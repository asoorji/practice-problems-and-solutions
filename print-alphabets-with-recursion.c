/**
printAlpha - prints alphabets using recursion
*/
#include <stdio.h>

void printAlpha(char c) {
    
    if (c <= 'z')
    {
        printf("%c\n", c);
         printAlpha(c+1);
    }
}

int main()
{
    printAlpha('a');

    return 0;
}
