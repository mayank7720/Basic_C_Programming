#include <stdio.h>

void price(float value);

int main() {
    float value = 100.0;
    price(value);
}

void price(float value){
    value = value + (value * 0.18);
    printf("final price is %f ",value);
}
