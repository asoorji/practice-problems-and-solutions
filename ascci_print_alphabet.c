/**
This program prints alphabet from a-z using their ascii code
*/

#include <stdio.h>

void alphabet()
{
    for (int i = 97; i<=122; i++)
        printf("%c\n", i);
}

int main()
{
    
    alphabet();

    return 0;
}
