#include <stdio.h>
#define MAX(a, b) if (a > b) \
                    printf("%d is maximum", a);\
                  else \
                  printf("%d is maximum", b)
/**
 * main - calls the function
 * MAX: defined as a macro function for printing maximum value
 * @a: first arguments
 * @b: second arguments
 */
                  
int main()
{
    MAX(6,3);
    return 0;
}
