// #include <stdio.h>

// void function();

// int main(){
//     function();
// }

// void function(){
//     printf("Hello\n");
//     printf("Good Bye\n");
// }

#include <stdio.h>

void Hello();
void GoodBye();

int main(){
    Hello();
    GoodBye();
}

void Hello() {
    printf("Hello!!\n");
}

void GoodBye() {
    printf("GoodBye!!\n");
}
