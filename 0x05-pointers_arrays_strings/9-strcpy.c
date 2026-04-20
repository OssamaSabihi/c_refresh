#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *save = dest;

	for(i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (save);
}
