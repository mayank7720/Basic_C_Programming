#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter value for a");
    scanf("%d",&a);

    printf("enter value for b");
    scanf("%d",&b);

    printf("enter value for c");
    scanf("%d",&c);

    if( a >= b && a >= c){
        printf("a (%d) is the greatest \n", a);
    }
    else if( b >= a && b >= c){
        printf("b (%d) is the greatest \n" , b);
    }
    else{
        printf("c (%d) is the greatest \n", c);
    }
    return 0;
}