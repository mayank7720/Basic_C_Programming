// #include <stdio.h>

// int main()

// {

//     int choice;

//     int a = 10, b = 20;

//     printf("Enter choice");

//     scanf("%d", &choice);

//     switch (choice) {

//     case 1:

//         printf("add=%d", a + b);

//         break;

//     case 2:

//         printf("sub=%d", a - b);

//         break;

//     case 3:

//         printf("mul=%d", a * b);

//         break;

//     case 4:

//         printf("div=%d", a / b);

//         break;

//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int a = 10, b = 20, choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Add = %d\n", a + b);
            break;
        case 2:
            printf("Sub = %d\n", a - b);
            break;
        case 3:
            printf("Mul = %d\n", a * b);
            break;
        case 4:
            printf("Div = %d\n", a / b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}