#include<stdio.h>
//a = lengthg and b = breadth 
int main(){
    int a;
    int b;
    printf("entere length = a");
    scanf("%d",&a);
    printf("enter breadth = b");
    scanf("%d",&b);

    printf("perimeter is : %d" , 2 * (a + b) );
    return 0;
}