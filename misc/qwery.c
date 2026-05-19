/*HELLO@CLASS14#
find:-
count of alphabet?
count of digits?
count of special char?*/



#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "HELLO@CLASS14#";
    int alphabets = 0, digits = 0, special = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } 
        else if (isdigit(str[i])) {
            digits++;
        } 
        else if (str[i] != ' ') {  
            special++;
        }
    }

    printf("Number of alphabets = %d\n", alphabets);
    printf("Number of digits = %d\n", digits);
    printf("Number of special symbols = %d\n", special);

    return 0;
}