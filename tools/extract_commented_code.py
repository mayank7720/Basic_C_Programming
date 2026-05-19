#!/usr/bin/env python3
"""Extract commented-out code from C/H sources into a mirrored folder tree.

- Scans .c/.h files under the workspace (excluding build/bin/output folders)
- Extracts // line comments and /* block comments */
- Writes stripped comment content into commented_code/<relative_path>.commented.c

Original source files are NOT modified.
"""

from __future__ import annotations

import os
from dataclasses import dataclass
from pathlib import Path


@dataclass
class CommentBlock:
    kind: str  # 'line' | 'block'
    start_line: int
    text: str


EXCLUDE_DIRS = {
    ".git",
    ".vscode",
    "bin",
    "build",
    "commented_code",
    "tools",
}


def looks_like_code(text: str) -> bool:
    """Heuristic: is this comment likely to contain code?"""
    s = text.strip()
    if not s:
        return False

    keywords = (
        "#include",
        "int ",
        "float ",
        "double ",
        "char ",
        "void ",
        "return ",
        "for(",
        "for (",
        "while(",
        "while ",
        "if(",
        "if (",
        "switch(",
        "case ",
        "printf(",
        "scanf(",
        "main(",
    )

    if any(k in s for k in keywords):
        return True

    # Common code punctuation
    punct_hits = sum(1 for ch in ";{}()" if ch in s)
    return punct_hits >= 2


def _strip_line_comment_prefix(line: str) -> str:
    """Strip one or more leading '//' markers from a line.

    Handles cases like:
      "// code" -> "code"
      "// // // code" -> "code"
      "    //   // code" -> "    code"

    If '//' does not appear at the start (after whitespace), the line is returned unchanged.
    """
    if "//" not in line:
        return line

    # Preserve original indentation.
    leading_ws_len = len(line) - len(line.lstrip(" \t"))
    pos = leading_ws_len
    if line[pos : pos + 2] != "//":
        return line

    # Strip one or more consecutive // tokens separated by whitespace.
    while line[pos : pos + 2] == "//":
        pos += 2
        # Consume whitespace after the token
        while pos < len(line) and line[pos] in " \t":
            pos += 1
        # If another // follows, loop continues

    return line[:leading_ws_len] + line[pos:]


def extract_comments(text: str) -> list[CommentBlock]:
    """Tokenizes C-like comments while respecting strings/chars."""
    blocks: list[CommentBlock] = []

    i = 0
    line = 1
    n = len(text)

    state = "normal"  # normal|string|char|line_comment|block_comment
    current: list[str] = []
    current_start_line = 1
    current_kind = ""

    def flush():
        nonlocal current, current_kind, current_start_line
        if current:
            blocks.append(
                CommentBlock(kind=current_kind, start_line=current_start_line, text="".join(current))
            )
        current = []
        current_kind = ""

    while i < n:
        ch = text[i]
        nxt = text[i + 1] if i + 1 < n else ""

        if ch == "\n":
            line += 1

        if state == "normal":
            if ch == '"':
                state = "string"
                i += 1
                continue
            if ch == "'":
                state = "char"
                i += 1
                continue

            if ch == "/" and nxt == "/":
                state = "line_comment"
                current_kind = "line"
                current_start_line = line
                current.append("//")
                i += 2
                continue

            if ch == "/" and nxt == "*":
                state = "block_comment"
                current_kind = "block"
                current_start_line = line
                current.append("/*")
                i += 2
                continue

            i += 1
            continue

        if state == "string":
            if ch == "\\":
                i += 2
                continue
            if ch == '"':
                state = "normal"
            i += 1
            continue

        if state == "char":
            if ch == "\\":
                i += 2
                continue
            if ch == "'":
                state = "normal"
            i += 1
            continue

        if state == "line_comment":
            current.append(ch)
            if ch == "\n":
                # Merge consecutive // lines into one block if the next line begins with // (allow spaces).
                # We look ahead from i+1 (start of next line).
                j = i + 1
                while j < n and text[j] in " \t":
                    j += 1
                if j + 1 < n and text[j] == "/" and text[j + 1] == "/":
                    # Keep going, but do not include the second // markers twice; they will be captured as chars.
                    pass
                else:
                    flush()
                    state = "normal"
            i += 1
            continue

        if state == "block_comment":
            current.append(ch)
            if ch == "*" and nxt == "/":
                current.append("/")
                i += 2
                flush()
                state = "normal"
                continue
            i += 1
            continue

    # Flush if file ends inside a comment
    flush()
    return blocks


def strip_comment_markers(block: CommentBlock) -> str:
    s = block.text
    if block.kind == "line":
        # Remove // at start of each line.
        out_lines = []
        for ln in s.splitlines(True):
            if "//" in ln:
                out_lines.append(_strip_line_comment_prefix(ln))
            else:
                out_lines.append(ln)
        return "".join(out_lines).rstrip() + "\n"

    # block comment
    if s.startswith("/*"):
        s = s[2:]
    if s.endswith("*/"):
        s = s[:-2]
    return s.strip("\n") + "\n"


def iter_source_files(root: Path) -> list[Path]:
    files: list[Path] = []
    for dirpath, dirnames, filenames in os.walk(root):
        # prune excluded dirs
        dirnames[:] = [d for d in dirnames if d not in EXCLUDE_DIRS]
        for fn in filenames:
            p = Path(dirpath) / fn
            if p.suffix.lower() in {".c", ".h"}:
                files.append(p)
    return sorted(files)


def main() -> int:
    root = Path(__file__).resolve().parents[1]
    out_root = root / "commented_code"
    out_root.mkdir(exist_ok=True)

    sources = iter_source_files(root)
    extracted_files = 0
    extracted_blocks = 0

    for src in sources:
        try:
            raw = src.read_text(encoding="utf-8", errors="ignore")
        except OSError:
            continue

        blocks = extract_comments(raw)
        if not blocks:
            continue

        # Decide output path (mirror folders)
        rel = src.relative_to(root)
        out_path = out_root / rel
        out_path = out_path.with_suffix(out_path.suffix + ".commented.c")
        out_path.parent.mkdir(parents=True, exist_ok=True)

        lines: list[str] = []
        lines.append(f"/* Extracted commented content from: {rel.as_posix()} */\n")

        for b in blocks:
            stripped = strip_comment_markers(b)
            if not stripped.strip():
                continue

            tag = "CODE" if looks_like_code(stripped) else "NOTE"
            lines.append(f"\n/* --- {tag} comment starting at line {b.start_line} ({b.kind}) --- */\n")
            lines.append(stripped)
            extracted_blocks += 1

        if len(lines) > 1:
            out_path.write_text("".join(lines), encoding="utf-8")
            extracted_files += 1

    summary = out_root / "SUMMARY.txt"
    summary.write_text(
        "\n".join(
            [
                f"Scanned: {len(sources)} source files (.c/.h)",
                f"Generated: {extracted_files} extracted files", 
                f"Extracted blocks: {extracted_blocks}",
            ]
        )
        + "\n",
        encoding="utf-8",
    )

    print(f"OK: wrote {extracted_files} files under {out_root}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
