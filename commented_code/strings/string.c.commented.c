/* Extracted commented content from: strings/string.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>
#include <string.h>

/* --- CODE comment starting at line 4 (line) --- */
int main() {

/* --- CODE comment starting at line 6 (line) --- */
char str[100];
char str1[100];
char str2[100];

/* --- CODE comment starting at line 10 (line) --- */
printf("enter the string\n");
printf("enter the string\n");
printf("enter the string\n");

/* --- CODE comment starting at line 15 (line) --- */
fgets(str, sizeof(str), stdin);
printf("the string is %s", str);

/* --- CODE comment starting at line 18 (line) --- */
fgets(str1, sizeof(str1), stdin);
printf("the string is %s", str1);

/* --- CODE comment starting at line 21 (line) --- */
fgets(str2, sizeof(str2), stdin);
printf("the string is %s", str2);

/* --- CODE comment starting at line 24 (line) --- */
return 0;
}
