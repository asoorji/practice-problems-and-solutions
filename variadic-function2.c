#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - variadic function that outputs its arguments
 * @brief Takes any number of arguments
 * @brief misbehaves with too too or too many arguments
 * Resource: https://www.youtube.com/watch?v=S-ak715zIIE&t=128s
 * @param args 
 * @param ... 
 */

void print_int(int args, ...)
{
    
    va_list ap;   

    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        int value = va_arg(ap, int);
        printf("%d: %d", i, value);
    }
    va_end(ap);
}

int main()
{
    print_int(1,25,6,6,3);
    return 0;
}

