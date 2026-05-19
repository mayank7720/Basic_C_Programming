/* Extracted commented content from: misc/mix.c */

/* --- CODE comment starting at line 1 (line) --- */
all program in one set
#include <stdio.h>

/* --- CODE comment starting at line 4 (line) --- */
int main()
{
printf("A menu-driven program where the user chooses an operation \n");
printf("Each operation will internally use different control structures \n");

/* --- CODE comment starting at line 9 (line) --- */
int choice;

/* --- CODE comment starting at line 11 (line) --- */
while (1)
{
printf"\n=== MENU ===\n");
printf("1. Check Positive/Negative/Even/Odd (if-else)\n");
printf("2. Print Multiplication Table (for loop)\n");

/* --- CODE comment starting at line 17 (line) --- */
printf("3. Sum of Natural Numbers (while loop)\n");
printf("4. Factorial of a Number (do-while loop)\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
int a;
printf("Input a number: ");
scanf("%d", &a);

/* --- CODE comment starting at line 30 (line) --- */
if (a > 0)
{
printf("The number provided is POSITIVE\n");
if (a % 2 == 0)
{
printf("The number provided is EVEN\n");
}
else
{
printf("The number provided is ODD\n");
}
}
else if (a == 0)
{
printf("The number provided is ZERO\n");
}
else
{
printf("The number provided is NEGATIVE\n");
}

/* --- CODE comment starting at line 51 (line) --- */
if (a < 10)
{
printf("Size: Small\n");
}
else if (a < 100)
{
printf("Size: Medium\n");
}
else
{
printf("Size: Large\n");
}
break;
}
case 2:
{
int a1;
printf("Input a number: ");
scanf("%d", &a1);
for (int a = 1; a <= 10; a++)
{
printf("%d * %d = %d\n", a1, a, a1 * a);
}
break;
}

/* --- CODE comment starting at line 77 (line) --- */
case 3:
{
int n, sum = 0, a = 1;
printf("Input a number: ");
scanf("%d", &n);
while (a <= n)
{
sum += a;
a++;
}
printf("Sum of first %d natural numbers = %d\n", n, sum);
break;
}

/* --- CODE comment starting at line 91 (line) --- */
case 4:
{
int a, fact = 1, n = 1;
printf("Input a number: ");
scanf("%d", &a);
if (a < 0)
{
printf("Factorial not defined for negative numbers\n");
}
else
{
do
{
fact *= n;
n++;
} while (n <= a);
printf("Factorial of %d = %d\n", a, fact);
}
break;
}

/* --- CODE comment starting at line 112 (line) --- */
case 5:
printf("Exiting program...\n");
return 0;

/* --- CODE comment starting at line 116 (line) --- */
default:
printf("Invalid choice! Please try again.\n");
}
}

/* --- CODE comment starting at line 121 (line) --- */
return 0;
}

/* --- NOTE comment starting at line 124 (line) --- */
Palindrome

/* --- CODE comment starting at line 126 (line) --- */
#include <stdio.h>

/* --- CODE comment starting at line 128 (line) --- */
int main() {
int number, reverse = 0, original, remainder;

/* --- CODE comment starting at line 131 (line) --- */
Get user input
printf("Enter a number: ");
scanf("%d", &number);

/* --- NOTE comment starting at line 135 (line) --- */
original = number; // Store the original number for comparison later

/* --- CODE comment starting at line 137 (line) --- */
Reverse the number
while (number != 0) {
remainder = number % 10; // Get the last digit
reverse = reverse * 10 + remainder; // Build the reversed number
number /= 10; // Remove the last digit from the original number
}

/* --- CODE comment starting at line 144 (line) --- */
Check if the number is a palindrome
if (original == reverse) {
printf("%d is a palindrome number.\n", original);
} else {
printf("%d is not a palindrome number.\n", original);
}

/* --- CODE comment starting at line 151 (line) --- */
return 0;
}

/* --- CODE comment starting at line 154 (line) --- */
for statement
#include <stdio.h>
int main (){
int i;
for(i=2;i<10;i++)
{
if(i==5)
{
continue;
}
printf("%d \n", i);
}
return 0;
}
