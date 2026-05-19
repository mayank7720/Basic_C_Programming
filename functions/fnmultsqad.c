#include <stdio.h>

int do_square(int a);
int do_multiply(int a, int b);
int do_sum(int a, int b);

int main() {
    
    int a,b;
    
    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    printf("Enter the value of b: ");
    scanf("%d",&b);
    
    int s = do_square(a);
    printf("%d\n",s);

    int t = do_multiply(a,b);
    printf("%d\n",t);

    int u = do_sum(a,b);
    printf("%d\n",u);
    
    return 0;
}

int do_multiply(int a, int b) {
    return a*b;
}
int do_square(int a) {
    return a*a;
}
int do_sum(int a, int b){
    return a+ b;
}
