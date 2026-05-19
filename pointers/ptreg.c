#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("%d\n",p);
    printf("%u\n",p);
    printf("%p\n",p);

    printf("%d\n",&a);
    printf("%u\n",&a);
    printf("%p\n",&a);

    printf("%d\n",a);
    printf("%u\n",*p);
    printf("%d\n",*(&a));

    printf("%p\n",*(&a));
 
 
 
    return 0;
}

//Returns in Hexadecimal form