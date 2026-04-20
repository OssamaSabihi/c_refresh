#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, result;
		
		for(row = 0; row < 10; row++)
		{
			for(column = 0; column < 10; column++)
			{
				result = row * column;
				if(result < 10)
				{
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				if(column < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				if(result < 10)
				{
					_putchar(' ');
				}
			}
			
			_putchar('\n');
		}
}

