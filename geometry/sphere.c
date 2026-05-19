#include<stdio.h>

int main(){
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    float area = 3.14*radius*radius;
    printf("area is : %.2f",area);
    return 0;
}
