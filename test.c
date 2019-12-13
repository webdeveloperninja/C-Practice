#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    printf("x is %d\n", x);

    x = 15;
    printf("x is %d\n", x);

    int *aptr = &x;

    printf("location in memory is %x\n", aptr);
    printf("x is %d\n", *aptr);
}