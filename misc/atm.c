#include<stdio.h>
int main()
{
    int amount,balance;
    scanf("%d %d",&amount, &balance);
    if(amount %100==0 && amount<=balance){
        printf("Transaction Successful\n");
    } else {
        printf("Transaction Failed\n");
    }
    return 0;
}