#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;
	char *temp = dest;

	while(src[len] != '\0')
		len++;
	if(len < n)
	{
		while(j < len)
		{
			dest[j] = src[j];
			j++;
		}
		while(len < n)
		{
			dest[len] = '\0';
			len++;
		}
	}
	else
	{
	while(j < n)
	{
		dest[j] = src[j];
		j++;
	}
	}
	return (temp);
}

