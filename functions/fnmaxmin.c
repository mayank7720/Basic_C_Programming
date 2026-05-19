#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(){
    int a,b;
    
    printf("Enter the value of a,b\n");
    scanf("%d%d",&a,&b);

    printf("maximum = %d\n",max(a,b));
    printf("minimum = %d\n",min(a,b));

    return 0;
}

int max(int a, int b){
    return (a > b) ? a : b;
}

int min(int a, int b){
    return (b > a) ? a : b;
}

      