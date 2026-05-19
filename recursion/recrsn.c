#include <stdio.h>

void printfHW(int count);
int main() {
    printfHW(3);
    return 0;
}

void printfHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printfHW(count - 1);
}