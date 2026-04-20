#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest:input
 * @src:input
 *
 * Return:A pointer to the resulting string dest
 */

char *strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;
	char *temp = dest;

	while(dest[len] != '\0')
		len++;

	while(src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}

	dest[len] = '\0';

	return (temp);
}

	
