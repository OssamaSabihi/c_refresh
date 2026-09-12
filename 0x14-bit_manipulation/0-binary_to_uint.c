#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * 
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int sum;
    int i;

    sum = 0;
    if (!b)
	return (0);

    i = 0;
    while (b[i])
    {
	if (b[i] != '0' && b[i] != '1')
		return (0);

	sum = sum << 1;
        sum = sum | (b[i] - '0');
        i++;
    }

    return (sum);
}
