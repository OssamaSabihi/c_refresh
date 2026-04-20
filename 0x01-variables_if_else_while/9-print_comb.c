#include <stdio.h>

/*
 * A program that prints all possible combinations of single-digit numbers.
 *
 * Return Always 0 (success)
 */

int main (void)
{

	char ch = '0';

	while(ch <= '9')
	{
		if(ch == '9')
		{
			putchar(ch);

			ch++;
		}
		else
		{ 
			putchar(ch);

			putchar(',');

			putchar(' ');

			ch++;

		}
	}

		putchar('\n');

		return (0);
}

	
