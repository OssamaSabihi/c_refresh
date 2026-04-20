#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j, k;
	char l;

	while(s[i] != '\0')
		i++;

	j = i - 1;

	for(k = 0; k < j; k++, j--)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
	}

}

	
	
