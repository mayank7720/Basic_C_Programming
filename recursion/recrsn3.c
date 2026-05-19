//Temp Converter
#include <stdio.h>

float convertTem(float cels);

int main() {
    float far = convertTem(37);
    printf("far is : %.2f",far);
    return 0;
}

float convertTem(float cels){
    float far = cels *(9.0/5.0) +32;
    return far;
}

