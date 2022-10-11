#include <stdio.h>
#define PI 3.142

/**
*main - shows simple implementation of a macro in c
*PI is the macro name
*3.142 is the character sequence
*/

int main()
{
   
    int r = 2;
    float area = PI * r * r;
    
    printf("The area of a circle is %f", area);

    return 0;
}
