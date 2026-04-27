#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while(n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (c);
}
