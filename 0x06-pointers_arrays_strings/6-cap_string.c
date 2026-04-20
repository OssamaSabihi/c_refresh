#include "main.h"

char *cap_string(char *x)
{
	char str[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};
	int i = 0;
	int j = 0;
	if(x[0] >= 97 && x[0] <= 122)
		x[0] -= 32;
	while(x[i] != '\0')
	{
		while(str[j] != '\0')
		{
			if(x[i] == str[j] )
			{
				if(x[i + 1] >= 97 && x[i + 1] <= 122)
				{
					x[i + 1] -= 32;
					break;
				}
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (x);
}


