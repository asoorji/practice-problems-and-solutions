
//Reverse an integer

#include <stdio.h>
int main()
{    

int x = 123;
int y = 0;
int mod;
   
  while(x != 0){
    y = y*10 + x%10;
    printf("Y: %d\n", y);
   x = x/10;
  }
  printf("Reversed number is: %d", y);
   
   return 0;
} 
