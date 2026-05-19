//find diameter, circumference,area of circle
#include <stdio.h>

float get_diameter(float r);
float get_circumference(float r);
float get_area(float r);

int main(){
    float r;
    printf("enter the value of r: ");
    scanf("%f",&r);

    printf("diameter is %.1f\n",get_diameter(r));
    printf("circumference is %.2f\n",get_circumference(r));
    printf("area is %.2f\n",get_area(r));
    return 0;
}

float get_diameter(float r){
    return 2 * r;
}

float get_circumference(float r){
    return (2 * 3.14 * r);
}

float get_area(float r){
    return (3.14 * r * r);
}