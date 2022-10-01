#include <stdio.h>

/**
 * factorial - returns factorial of a number using for loop
 */

int factorial(int n)
{
    int i, ans = 1;
    for(i=1; i<=n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main()
{
    int fact; 
    
    fact = factorial(5);
    printf("5! = %d", fact);
    
    return 0;
}
