#include "main.h"

/**
 * print_triangle -  prints a right-aligned triangle using #
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for(i = 1; i <= size; i++)
	{
		for(j = i; j < size; j++)
			_putchar(' ');

		for(j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
	
	
	if(size <= 0)
		_putchar('\n');
}
		
