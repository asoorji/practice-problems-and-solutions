#include <stdio.h>

/**
 * Calculator using function pointer instead of switch statement
 * Resource: https://www.youtube.com/watch?v=ccoKzyaO0jI
 */

void sum(int a, int b)
{
    printf("Sum is %d\n", a+b);
}

void sub(int a, int b)
{
    printf("Sub is %d\n", a-b);
}

void mul(int a, int b)
{
    printf("Mul is %d\n", a*b);
}

void dvs(int a, int b)
{
    printf("Div is %d\n", a/b);
}


int main()
{
    int a, b, choice;
    int (*fptr[10])(int,int) = {sum, sub, mul, dvs};
    
    printf("*********WELCOME TO THE CALCULATOR**********\n");
    printf("What do you want to perform?: \n");
    printf("0 for add: \n 1 for sub: \n 2 for multiply \n 3 for divide: \n");
    scanf("%d", &choice);
    
    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);
    
    // switch(choice)
    // {
    //     case 0: sum(a,b); break;
    //     case 1: sub(a,b); break;
    //     default: printf("Enter valid chioce");
    // }
    
    (*fptr[choice])(a,b);

    return 0;
}
