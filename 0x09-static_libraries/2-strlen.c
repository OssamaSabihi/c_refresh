#include "main.h"

/**
 * strlen -  returns the length of a string
 * @s: input
 *
 * Return: the lenght of the sting
 */

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
			i++;

	return (i);
}
	
	
