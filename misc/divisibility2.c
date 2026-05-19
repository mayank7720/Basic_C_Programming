#include <stdio.h>

int main(){
    int a;
    printf("enter value for a");
    scanf("%d",&a);

    float b = a % 2;


    if( b == 0){
        printf("number (%d) is divisible by 2 \n", a);
    }
    else{
        printf("number (%d) is not divisible by 2 \n", a);
    }
    return 0;
}