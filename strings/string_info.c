// #include <stdio.h>

// int countLength(char arr[]);

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is : %d",countLength(name));

//     return 0;
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i=0;arr[i] != '\0';i++){
//         count++;
//     }
//     return count - 1;
// }


//strlen(str)
// #include <stdio.h>
// #include <string.h>

// int countLength(char arr[]);

// int main() {
//     char name[] = "Mayank";
//     int length = strlen(name);
//     printf("length is : %d",length);

//     return 0;
// }




//strcpy(old string, new string)
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char OldStr[] = "oldstr";
//     char NewStr[] = "newstr";
//     strcpy(NewStr,OldStr); //Take value of old string and gives to new string so that the value of new string changes
//     puts(NewStr);

//     return 0;
// }


//strcat(firstStr,secStr)  "combine two string"
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char firstStr[100] = "Hello ";
//     char secStr[] = "World";
//     strcat(firstStr,secStr);
//     puts(firstStr);

//     return 0;
// }

/*strcmp(firstStr,secStr)  "compare two string"
0 -> string equal
positive -> first > second(ASCII)
negative -> first < second(ASCII)*/
#include <stdio.h>
#include <string.h>


int main() {
    char firstStr[] = "Apple";
    char secondStr[] = "Banana";
    printf("%d",strcmp(firstStr,secondStr));
    return 0;
}