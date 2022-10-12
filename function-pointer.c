#include <stdio.h>

/**
 * @ptr: Function pointer
 *Uses: Function pointers are mainly used for callback functions
 * Resource: https://www.youtube.com/watch?v=qaszuaFXRTA
 */

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptr)(int, int) = add;
    int c = ptr(7,5);
    
    printf("Ouptut: %d\n", c);

    // To get the address use this instead
    //int c = ptr(9,5);
    // printf("Ouptut: %p\n", &c);
    
    return 0;
}
