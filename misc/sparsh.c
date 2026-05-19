#include <stdio.h>
#include <string.h>

#ifdef _WIN32
  #include <windows.h>
  void msleep(int ms){ Sleep(ms); }
  // Enable ANSI escape processing on Windows 10+
  void enable_ansi() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE) return;
    DWORD mode = 0;
    if (!GetConsoleMode(hOut, &mode)) return;
    SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
  }
#else
  #include <unistd.h>
  void msleep(int ms){ usleep(ms * 1000); }
  void enable_ansi() { /* nothing needed on most Unix terminals */ }
#endif

void type_print(const char *s, int delay_ms) {
    for (size_t i = 0; i < strlen(s); ++i) {
        putchar(s[i]);
        fflush(stdout);
        msleep(delay_ms);
    }
}

int main(void) {
    enable_ansi();

    // red color start, reset at end
    const char *red   = "\x1B[31m";
    const char *reset = "\x1B[0m";

    // big heart (use newline escapes)
    const char *heart =
    "  ***     ***  \n"
    " *****   ***** \n"
    "******* *******\n"
    " ************* \n"
    "  ***********  \n"
    "   *********   \n"
    "    *******    \n"
    "     *****     \n"
    "      ***      \n"
    "       *       \n";

    printf("%s", red);
    printf("%s\n", heart);
    printf("%s", reset);

    msleep(400);

    // Personalize this message:
    const char *proposal = "Hey (Her Name),\nI like you a lot. Will you be my girlfriend? ❤\n";

    // "typing" effect
    type_print("\n", 50);
    type_print(proposal, 50);

    // final flourish
    msleep(300);
    printf("\n");
    type_print("Answer: ", 60);

    // simple blinking cursor like wait (not interactive)
    for (int i = 0; i < 6; ++i) {
        putchar('.');
        fflush(stdout);
        msleep(300);
    }
    printf("\n\nGood luck! 🍀\n");

    return 0;
  }