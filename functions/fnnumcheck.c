//Check that the no is prime , armstrong , perfect
#include <stdio.h>
#include <math.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);


    int main(){
    int num;

    printf("Enter the num: ");
    scanf("%d",&num);

    if (isPrime(num)){
        printf("The num is Prime\n");
    }
    else{
        printf("The num is not a Prime\n");
    }

    if (isArmstrong(num)){
        printf("The num is Armstrong\n");
    }
    else{
        printf("The num is not a Armstrong\n");
    }

    if (isPerfect(num)){
        printf("The num is Perfect\n");
    }
    else{
        printf("The num is not a Perfect\n");
    }
}

int isPrime(int num) {
    for(int i = 2;i <= num/2; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int isPerfect(int num){
    int i,sum,n;
    sum = 0;
    n = num;

    for(i=1; i<n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return (num == sum);
}
\

int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;

    
    digits = (int) log10(num) + 1;

    
    while(num > 0)
    {
        lastDigit = num % 10;

    
        sum = sum + round(pow(lastDigit, digits));

        num = num / 10;
    }
    
    return (originalNum == sum);
}

