#include "main.h"

/**
 * A program that prints _putchar, followed by a new line, using the _putchar function.
 *
 * Return: Always 0(success)
 */

int main(void)
{

	char ch[] = "_putchar";

	for(int i = 0 ; i < 8 ; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');

		return (0);

}
