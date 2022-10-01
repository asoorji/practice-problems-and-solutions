#include <stdio.h>

/**
 * factorial - returns factorial of a number using recursion
 */

int factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    return (n * factorial(n-1));
}

int main()
{
    int fact; 
    
    fact = factorial(5);
    printf("5! = %d", fact);
    
    return 0;
}
