#include <stdio.h>

/**
 * Resource: https://www.youtube.com/watch?v=wMI2k951nqs
 */

void sum(int a, int b)
{
    printf("Sum is %d\n", a+b);
}

void sub(int a, int b)
{
    printf("Sub is %d\n", a-b);
}

void display(void (*fptr)(int, int))
{
    fptr(5,2);
}

int main()
{

    display(sum);
    display(sub);

    return 0;
}
