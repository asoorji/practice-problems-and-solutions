//THIS IS A SIMPLE STRUCT IN C
//struct is a Collection of related members(varibles)
//Similar to classes in other prog languages< but doesn't contain methods

#include <stdio.h>
#include <string.h>

struct Babes {
    char name[10];
    int age;
    char purpose[5];
};

int main()
{    

struct Babes dark;
struct Babes fair;

strcpy(dark.name, "Roseline");
strcpy(dark.purpose, "date");
dark.age = 23;

strcpy(fair.name, "Winners");
strcpy(fair.purpose, "friend");
fair.age = 21;

printf("The first girl's name is %s, she is %d years old and I want to %s her\n", dark.name, dark.age, dark.purpose);
printf("The second girl's name is %s, she is %d years old and I want to %s her", fair.name, fair.age, fair.purpose);

return 0;

}
