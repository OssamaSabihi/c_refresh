#include "main.h"

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i = 0;
	int j = 0;
	while(s[i] != '\0')
	{
		while(letters[j] != '\0')
		{
			if(s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		j++;
		}
		j = 0;
		i++;
	}
	return (s);
}	
