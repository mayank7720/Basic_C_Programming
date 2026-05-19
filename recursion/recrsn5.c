//Fibonacci Series
#include <stdio.h>

int fib(int n);

int main() {
    //fib(6);//code for the 22nd line 
    printf("%d",fib(6));  //only print final ans
    return 0;
}

int fib(int n){
    if (n == 1 ){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fib = fibNm1 + fibNm2;
    //printf("fib of %d is : %d\n",n,fib); //it runs fn inside fun , runs together with line 7
    return fib; 
}