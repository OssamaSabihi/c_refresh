#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98 .
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if(n >= 98)
	{
		while(n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while(n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
			
