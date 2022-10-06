#include <stdio.h>
#include <stdlib.h>

/**
*main - Takes user input and dynamically assigns REALLOCATE memory space to them
*Resource: https://www.youtube.com/watch?v=ZThwHgNTHUs
*/

int main()
{
    int n, i, *ptr;
    printf("Enter no of values: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n*sizeof(int));
    
    printf("\tEnter the values ");
    for (i=0; i<n;i++)
    {
        scanf("%d", (ptr+i));
    }
    
    printf("\nEnter updated size of n: ");
    scanf("%d", &n);
    
    int *ptr1 = (int*)realloc(ptr,n*sizeof(int));
    printf("Previous address: %d\n New Address: %d", ptr, ptr1);
    
    printf("\n The entered values are: ");
    for (i=0; i<n;i++) 
    {
        printf("%d\t", *(ptr1+i));
    }
    
    free(ptr1);
    return 0;
}
