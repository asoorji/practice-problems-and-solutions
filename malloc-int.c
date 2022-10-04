#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 * Resource: https://alx-intranet.hbtn.io/concepts/62
 */
int main(void)
{
    int *tab;

    tab = malloc(sizeof(*tab) * 5);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    tab[3] = 77;
    tab[4] = 88;
    printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}
