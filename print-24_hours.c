//This program prints time from 00:00 to 23:59

#include <stdio.h>

int main() {
    
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(':');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar('\n');
		}
	}

    return 0;
}
