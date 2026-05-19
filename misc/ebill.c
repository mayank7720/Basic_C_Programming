#include <stdio.h>
int main()
{

    int units, bill;
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 300)
    {
        bill = units * 8;
    }
    else
    {
        bill = units * 10;
    }

    printf("%d\n", bill);

    return 0;
}