#include <stdio.h>
#include <stdarg.h>

/**
 * main - Takes the Variadic Function "add"
 * add - Add numbers together (Can take as many arguments as possible)
 * @args - Total number of arguments
 *@... - Signifies infinite arguments
 *Resource: https://www.youtube.com/watch?v=FgvrnYScdH8
 */

int add(int args, ...)
{
    va_list ap;
    
    va_start(ap, args);
    
    //Process
    int i, sum = 0;
    for (i = 0; i<args; i++)
    {
        sum += va_arg(ap, int);
    }
    
    va_end(ap);
    return sum;
}

int main()
{
    printf("Add 3 Nums= %d\n",add(3, 1,2,3));
    printf("Add 2 Nums= %d\n",add(2, 5,6));
    return 0;
}
