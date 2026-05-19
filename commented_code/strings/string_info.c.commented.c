/* Extracted commented content from: strings/string_info.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 3 (line) --- */
int countLength(char arr[]);

/* --- CODE comment starting at line 5 (line) --- */
int main() {
char name[100];
fgets(name, 100, stdin);
printf("length is : %d",countLength(name));

/* --- CODE comment starting at line 10 (line) --- */
return 0;
}

/* --- CODE comment starting at line 13 (line) --- */
int countLength(char arr[]) {
int count = 0;
for(int i=0;arr[i] != '\0';i++){
count++;
}
return count - 1;
}

/* --- CODE comment starting at line 22 (line) --- */
strlen(str)
#include <stdio.h>
#include <string.h>

/* --- CODE comment starting at line 26 (line) --- */
int countLength(char arr[]);

/* --- CODE comment starting at line 28 (line) --- */
int main() {
char name[] = "Mayank";
int length = strlen(name);
printf("length is : %d",length);

/* --- CODE comment starting at line 33 (line) --- */
return 0;
}

/* --- CODE comment starting at line 39 (line) --- */
strcpy(old string, new string)
#include <stdio.h>
#include <string.h>

/* --- CODE comment starting at line 43 (line) --- */
int main() {
char OldStr[] = "oldstr";
char NewStr[] = "newstr";
strcpy(NewStr,OldStr); //Take value of old string and gives to new string so that the value of new string changes
puts(NewStr);

/* --- CODE comment starting at line 49 (line) --- */
return 0;
}

/* --- CODE comment starting at line 53 (line) --- */
strcat(firstStr,secStr)  "combine two string"
#include <stdio.h>
#include <string.h>

/* --- CODE comment starting at line 57 (line) --- */
int main() {
char firstStr[100] = "Hello ";
char secStr[] = "World";
strcat(firstStr,secStr);
puts(firstStr);

/* --- CODE comment starting at line 63 (line) --- */
return 0;
}

/* --- CODE comment starting at line 66 (block) --- */
strcmp(firstStr,secStr)  "compare two string"
0 -> string equal
positive -> first > second(ASCII)
negative -> first < second(ASCII)
