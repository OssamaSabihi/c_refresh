#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string
 *
 * Return: int
 */

int _atoi(char *s)
{

	unsigned int j = 0;
		 int i = 0;
		 int k = 1;

		 while(s[i] != '\0')
		 {
			 if(s[i] == '-')
				 k = k * -1;

			 if(s[i] >= 48 && s[i] <= 57)
			 {
				 while(s[i] >= 48 && s[i] <= 57)
				 {
					 j = (j * 10) + (s[i] - '0');
					 i++;
				 }

				 j = j * k;

				 return (j);
			 }
			 
			 i++;
		 }

		 return(0);
}
