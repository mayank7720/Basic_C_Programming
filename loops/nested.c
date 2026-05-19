#include <stdio.h>

int main(){
    int a;

    printf("enter no.");

    scanf("%d",&a);

    
    if(a > 1 && a < 10){
        printf("the no given is (%d)",a);
    }
        else {
        printf("the no is not in range (%d)",a);
        }
    return 0;
}