#include "main.h"
#include <stdlib.h>

/*
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Returns: a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int k = 0;
	int size = 0;
	int j;

	if(ac == 0 || av == NULL)
		return (NULL);

	while(i < ac)
	{
		j = 0;

		while(av[i][j] != '\0')
		{
			size++;
			j++;
		}

		i++;
	}

	char *s = malloc(sizeof(char) * (size + ac + 1));
	if(s == NULL)
		return (NULL);

	i = 0;

	while(i < ac)
	{
		j = 0;

		while(av[i][j] != '\0')
		{
			s[k] = av[i][j];
			j++;
			k++;
		}
		
		s[k] = '\n';
		k++;
		i++;
	}

	s[k] = '\0';
	return (s);
}

			
		



