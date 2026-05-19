// #include <stdio.h>
// #include <string.h>

// int main() {
    
//     char str[100];
//     char str1[100];
//     char str2[100];

//     printf("enter the string\n");
//     printf("enter the string\n");
//     printf("enter the string\n");


//     fgets(str, sizeof(str), stdin);
//     printf("the string is %s", str);

//     fgets(str1, sizeof(str1), stdin);
//     printf("the string is %s", str1);

//     fgets(str2, sizeof(str2), stdin);
//     printf("the string is %s", str2); 

//     return 0;
// }




#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100];
    char str1[100];
    char str2[100];
    
    printf("enter the string\n");
    printf("enter the string\n");
    printf("enter the string\n");


    fgets(str, sizeof(str), stdin);
    puts(str);

    fgets(str1, sizeof(str1), stdin);
    puts(str1);

    fgets(str2, sizeof(str2), stdin);
    puts(str2); 

    return 0;
}