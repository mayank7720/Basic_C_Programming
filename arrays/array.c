// #include<stdio.h>
// int main(){
//     int i = 0;
//     int array[10] = {10,20,30,40,50,60,70,80,90,100};
//     for(i=0;i<10;i++){
//         printf("%d %d \n",array[10],array[i]);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int i, sum =0, average;
//     int arrays[10] = {10,20,30,40,50,60,70,80,90,100};
//     for (i = 0; i < 10; i++) {
        
//         sum = arrays[i] + sum;
//         average = sum/10;

//     }
//     printf("The sum is %d \n", sum);
//     printf("The average is %d", average);

    
    

// }

#include <stdio.h>

int main() {

    int arr[10] = {-2, -5, -6, 0, 1, 2, 4, 0, -3, 5};
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int sump = 0;
    int sumn = 0;

    for(int i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            positive = positive + 1;  
            sump = sump + arr[i];
        }
        else if(arr[i] < 0) {
            negative = negative + 1;  
            sumn = sumn + arr[i];
        }
        else {
            zero = zero + 1;          
        }
    }
    
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d\n", zero);
    
    return 0;
}