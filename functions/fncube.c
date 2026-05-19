//find cube via function
#include <stdio.h>

int cube(int a);

int main(){
    int a,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    c = cube(a);
    printf("cube is %d",c);
    return 0;
}

int cube(int a){
    return (a * a * a);
}