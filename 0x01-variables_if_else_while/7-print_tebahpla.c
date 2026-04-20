#include <stdio.h>

/**
 * A program that prints the alphabet in lowercase in reverse order, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch = 'z';

	while(ch >= 'a')
	{

		putchar(ch);

		ch--;
	}

	putchar('\n');

	return (0);

}
