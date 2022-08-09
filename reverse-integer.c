//Reverse an integer 

//Reverse an integer
#include <stdio.h>

int rev(int x) {
int y = 0;
int mod;
  printf("Enter (above 1 digit number): ");
  scanf("%d", &x);

while(x != 0){
    y = y*10 + x%10;
    x = x/10;
  }
printf("Output: %d", y);
}

int main()
{    
//The argument can be any interger value
rev(0);
return 0;
} 
