#include <stdio.h>
#include <stdlib.h>

/**
*main - Takes user input and dynamically assigns memory space to them
* Returns gabbage values if no value is entered (unlike calloc which returns 0 values) i.e if the first loop is commented
*Resource 1: https://www.youtube.com/watch?v=U2MqRhKzOgg&list=RDLVy4EzSnHJj-Q&index=2
*Resource 2: https://www.youtube.com/watch?v=y4EzSnHJj-Q&list=RDLVy4EzSnHJj-Q&index=2
*/

int main()
{
    int n, i, *ptr;
    printf("Enter no of values: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n*sizeof(int));
    
     printf("\nEnter the values ");
    for (i=0; i<n;i++)
    {
        scanf("%d", (ptr+i));
    }
    
    printf("\n The values are: ");
    for (i=0; i<n;i++) 
    {
        printf("%d\n", *(ptr+i));
    }

    return 0;
}
