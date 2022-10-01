#include <stdio.h>

/**
 * ascii - returns the ASCII value of a character
 * @t: this outputs 116
*/

int ascii(char c)
{
    return c;
}

int main()
{
    int asc = ascii('t');

    printf("Ascii: %d", asc);
    return 0;
}
