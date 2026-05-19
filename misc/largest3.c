#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter the value of a, b, c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
    printf("a (%d) is the largest no \n ",a);
    }
    else if (b>a && b>c) {
    printf("b (%d) is the largest no \n ",b);
    }
    else{ 
    printf("c (%d) is the largest number \n ",c);
    }
    return 0;
}   