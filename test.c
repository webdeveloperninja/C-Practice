#include <stdio.h>
#include <stdlib.h>

int main()
{
    fizzBuzz();
}

void fizzBuzz()
{
    char position = 0;

    while (position <= 100)
    {
        if (position % 3 == 0)
            printf("Fizz");
        if (position % 5 == 0)
            printf("Buzz");
        if (position % 3 != 0 && position % 5 != 0)
            printf("%d", position);
        printf("\n");

        position++;
    }
}