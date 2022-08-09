//Reverse an integer

#include <stdio.h>
int main()
{    

int x;
int y = 0;
int mod;
   
  printf("Enter (above 1 digit number): ");
  scanf("%d", &x);
   
  while(x != 0){
    y = y*10 + x%10;
    // printf("Y: %d\n", y);
   x = x/10;
  }
  printf("Reversed number is: %d", y);
   
   return 0;
} 
