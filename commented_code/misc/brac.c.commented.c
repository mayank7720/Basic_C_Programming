/* Extracted commented content from: misc/brac.c */

/* --- CODE comment starting at line 1 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 3 (line) --- */
int main()

/* --- NOTE comment starting at line 5 (line) --- */
{

/* --- CODE comment starting at line 7 (line) --- */
int choice;

/* --- CODE comment starting at line 9 (line) --- */
int a = 10, b = 20;

/* --- CODE comment starting at line 11 (line) --- */
printf("Enter choice");

/* --- CODE comment starting at line 13 (line) --- */
scanf("%d", &choice);

/* --- CODE comment starting at line 15 (line) --- */
switch (choice) {

/* --- CODE comment starting at line 17 (line) --- */
case 1:

/* --- CODE comment starting at line 19 (line) --- */
printf("add=%d", a + b);

/* --- NOTE comment starting at line 21 (line) --- */
break;

/* --- CODE comment starting at line 23 (line) --- */
case 2:

/* --- CODE comment starting at line 25 (line) --- */
printf("sub=%d", a - b);

/* --- NOTE comment starting at line 27 (line) --- */
break;

/* --- CODE comment starting at line 29 (line) --- */
case 3:

/* --- CODE comment starting at line 31 (line) --- */
printf("mul=%d", a * b);

/* --- NOTE comment starting at line 33 (line) --- */
break;

/* --- CODE comment starting at line 35 (line) --- */
case 4:

/* --- CODE comment starting at line 37 (line) --- */
printf("div=%d", a / b);

/* --- NOTE comment starting at line 39 (line) --- */
break;

/* --- NOTE comment starting at line 41 (line) --- */
}

/* --- CODE comment starting at line 43 (line) --- */
return 0;
}
