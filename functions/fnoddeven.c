#include <stdio.h>

int even(int a);

int main(){
    int a;
    
    printf("Enter the value of a");
    scanf("%d",&a);

    if(even(a)){
        printf("The no is even");
    }
    else{
        printf("The no is odd");
    }

    
}

int even(int a){
    return a % 2 == 0;
}