#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the size of the times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	if(n <= 15 && n >= 0)
	{
		int row, column;
		
		for(row = 0;row <= n; row++)
		{
			for(column = 0; column <= n; column++)
			{
				int result = row * column;

				if(result < 10)
				{
					_putchar('0' + result);
				}
				else if(result < 100 && result >= 10)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
			  	else
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + result % 10);
				}
				
				if(column < n)
				{
				if(row * (column + 1) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (row * (column + 1) > 10 && row * (column + 1) < 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar(',');
				}
			}
				_putchar('\n');
		}
	}
}
