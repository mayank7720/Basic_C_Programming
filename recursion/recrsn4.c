//Percentage Calculator
#include <stdio.h>

float calcPercent(float maths,float science,float physics);


int main(){
    float sc,mth,phy;
    sc = 90.0;
    mth = 70.9;
    phy = 80.2;
    printf("percentage is : %.2f",calcPercent(sc,mth,phy));
    return 0;
}
float calcPercent(float maths,float science,float physics){
    return ((maths + science + physics)/3.0);
}

