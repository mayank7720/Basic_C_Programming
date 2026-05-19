#include <stdio.h>

int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",**pptr);

    return 0;
}

//p+2(size of data type)

