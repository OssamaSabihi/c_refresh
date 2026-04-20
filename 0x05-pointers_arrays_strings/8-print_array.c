#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array pointer
 * @n: the number of elements to print
 *
 * Description: Numbers must be separated by a comma, followed by a space
 */

void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if(i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

