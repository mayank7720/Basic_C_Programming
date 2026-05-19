#include <stdio.h>

int main(){
    int a,b;
    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%d",&b);

    if( a > b){
        printf("a is greater than b");
    }
    else{
        printf("b is graeter than a");
    }
    return 0;
}