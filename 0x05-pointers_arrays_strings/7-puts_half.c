#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 *
 * Return: void 
 */

void puts_half(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	if(i % 2 == 0)
	{
		int j;
		for(j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else
	{
		int k;
		for(k = (i / 2) + 1; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
