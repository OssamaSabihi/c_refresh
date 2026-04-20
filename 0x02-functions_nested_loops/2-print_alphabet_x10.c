#include "main.h"

/*
 * A function that prints the alphabet
 * 10 times each in a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for(i = 0; i < 10; i++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		
		_putchar('\n');
	}

}
