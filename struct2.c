#include <stdio.h>

struct date 
{
        int day;
        int month;
        int year;
};

int main(void)
{
    struct date today;
    today.day = 1;
    today.month = 1;
    today.year = 2003;
    
    if (today.day==1 && today.month==1)
    {
        printf("Happy New year");
    }
    
    return 0;
}
