#include <stdio.h>

void Namaste();
void Bonjour();

int main(){
    printf("enter i for indian & f for french\n");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        Namaste();
    }
    else if(ch == 'f'){
        Bonjour();
    }
    else{
        printf("invalid input");
    }
    return 0;
}

void Namaste() {
    printf("Namaste\n");
}

void Bonjour() {
    printf("Bonjour\n");
}