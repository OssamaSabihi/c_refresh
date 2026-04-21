#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i = 0;
    int j = 1;
    int sum1 = 0;
    int sum2 = 0;

    while(i < size)
    {
        sum1 += *(a + ((i * size) + i));
            i++;
    }
    while(j <= size)
    {
        sum2 += *(a + (j * (size - 1)));
        j++;
    }

    printf("sum diagonal is: %d\n", sum1);
    printf("sum antidiagonal is: %d\n", sum2);
}