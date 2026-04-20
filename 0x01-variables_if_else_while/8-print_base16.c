#include <stdio.h>

/*
 * A program that prints all the numbers of base 16 (hexadecimal) in lowercase, followed by a new line.
 * 
 * Return: Always 0 (success).
 */

int main(void)
{

	char ch = '0';

	char  n = 'a';

	while(ch <= '9')
	{

		putchar(ch);

		ch++;

	}

	while(n <= 'f')
	{

		putchar(n);

		n++;
	}

	putchar('\n');

	return (0);
}
