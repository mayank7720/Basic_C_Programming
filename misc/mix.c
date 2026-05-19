// //all program in one set
// #include <stdio.h>

// int main()
// {
//     printf("A menu-driven program where the user chooses an operation \n");
//     printf("Each operation will internally use different control structures \n");

//     int choice;

//     while (1)
//     {
//         printf"\n=== MENU ===\n");
//         printf("1. Check Positive/Negative/Even/Odd (if-else)\n");
//         printf("2. Print Multiplication Table (for loop)\n");

//         printf("3. Sum of Natural Numbers (while loop)\n");
//         printf("4. Factorial of a Number (do-while loop)\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//         {
//             int a;
//             printf("Input a number: ");
//             scanf("%d", &a);

//             if (a > 0)
//             {
//                 printf("The number provided is POSITIVE\n");
//                 if (a % 2 == 0)
//                 {
//                     printf("The number provided is EVEN\n");
//                 }
//                 else
//                 {
//                     printf("The number provided is ODD\n");
//                 }
//             }
//             else if (a == 0)
//             {
//                 printf("The number provided is ZERO\n");
//             }
//             else
//             {
//                 printf("The number provided is NEGATIVE\n");
//             }

//             if (a < 10)
//             {
//                 printf("Size: Small\n");
//             }
//             else if (a < 100)
//             {
//                 printf("Size: Medium\n");
//             }
//             else
//             {
//                 printf("Size: Large\n");
//             }
//             break;
//         }
//         case 2:
//         {
//             int a1;
//             printf("Input a number: ");
//             scanf("%d", &a1);
//             for (int a = 1; a <= 10; a++)
//             {
//                 printf("%d * %d = %d\n", a1, a, a1 * a);
//             }
//             break;
//         }

//         case 3:
//         {
//             int n, sum = 0, a = 1;
//             printf("Input a number: ");
//             scanf("%d", &n);
//             while (a <= n)
//             {
//                 sum += a;
//                 a++;
//             }
//             printf("Sum of first %d natural numbers = %d\n", n, sum);
//             break;
//         }

//         case 4:
//         {
//             int a, fact = 1, n = 1;
//             printf("Input a number: ");
//             scanf("%d", &a);
//             if (a < 0)
//             {
//                 printf("Factorial not defined for negative numbers\n");
//             }
//             else
//             {
//                 do
//                 {
//                     fact *= n;
//                     n++;
//                 } while (n <= a);
//                 printf("Factorial of %d = %d\n", a, fact);
//             }
//             break;
//         }

//         case 5:
//             printf("Exiting program...\n");
//             return 0;

//         default:
//             printf("Invalid choice! Please try again.\n");
//         }
//     }

//     return 0;
// }

//  Palindrome

// #include <stdio.h>

//  int main() {
//      int number, reverse = 0, original, remainder;

//      // Get user input
//      printf("Enter a number: ");
//      scanf("%d", &number);

//      original = number; // Store the original number for comparison later

//      // Reverse the number
//      while (number != 0) {
//          remainder = number % 10; // Get the last digit
//          reverse = reverse * 10 + remainder; // Build the reversed number
//          number /= 10; // Remove the last digit from the original number
//      }

//     // Check if the number is a palindrome
//      if (original == reverse) {
//          printf("%d is a palindrome number.\n", original);
//      } else {
//          printf("%d is not a palindrome number.\n", original);
//      }

//      return 0;
//  }

// for statement
//  #include <stdio.h>
//  int main (){
//      int i;
//      for(i=2;i<10;i++)
//      {
//          if(i==5)
//          {
//              continue;
//          }
//          printf("%d \n", i);
//      }
//      return 0;
//  }
