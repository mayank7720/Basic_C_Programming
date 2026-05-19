/* Extracted commented content from: misc/printing.c */

/* --- CODE comment starting at line 1 (line) --- */
greater than 0 or less than 11 then print otherwise denied
#include <stdio.h>

/* --- CODE comment starting at line 4 (line) --- */
int main (){
int m;
printf("enter the no : ");
scanf("%d",&m);

/* --- CODE comment starting at line 9 (line) --- */
if (m > 0 && m < 11) {
for (int i = 1; i <= m; i++){
for (int j = 1; j <= i; j++){
printf ("*");
}
printf("\n");

/* --- CODE comment starting at line 16 (line) --- */
}
}
else {
printf("Invalid Statement");

/* --- CODE comment starting at line 21 (line) --- */
}
return 0;

/* --- NOTE comment starting at line 26 (line) --- */
}

/* --- NOTE comment starting at line 29 (line) --- */
reverse pattern

/* --- CODE comment starting at line 31 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 33 (line) --- */
int main (){
int m;
printf("enter the no : ");
scanf("%d",&m);

/* --- CODE comment starting at line 38 (line) --- */
if (m > 0 && m < 11) {
for (int i = m; i >= 1; i--){
for (int j = 1; j <= i; j++){
printf ("*");
}
printf("\n");

/* --- CODE comment starting at line 45 (line) --- */
}
}
else {
printf("Invalid Statement");

/* --- CODE comment starting at line 50 (line) --- */
}
return 0;

/* --- NOTE comment starting at line 54 (line) --- */
}

/* --- CODE comment starting at line 56 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 58 (line) --- */
int main() {
int n;
scanf("%d", &n);

/* --- CODE comment starting at line 62 (line) --- */
for (int i = 1; i <= 2*n; i += 2) {
printf("%d", i);  
}

/* --- CODE comment starting at line 66 (line) --- */
return 0;
}
