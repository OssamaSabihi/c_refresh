#include "main.h"

char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char mirror[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int count = 0;
	int count2 = 0;
	while(s[count] != '\0')
	{
		while(alphabet[count2] != '\0')
		{
			if(alphabet[count2] == s[count])
			{
				s[count] = mirror[count2];
				break;
			}
			count2++;
		}
		count2 = 0;
		count++;
	}
	return(s);
}
