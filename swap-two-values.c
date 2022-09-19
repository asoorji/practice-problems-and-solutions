#include "main.h"

/**
 * swap_int - swap the values referenced in 2 pointers
 * @a: 1st Pointer
 * @b: 2nd pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
