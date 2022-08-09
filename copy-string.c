//How to copy a string from one variable to another

#include <stdio.h>

int main()
{
    
    char x[] = "Orji";
    char y[7];
    int i=0;
    
    while(x[i] != '\0'){
        y[i] = x[i];
        i++;
    }
    
    printf("X: %s\n", x);
    printf("Y: %s", y);

    return 0;
}
