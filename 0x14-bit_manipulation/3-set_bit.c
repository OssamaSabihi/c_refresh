#include "main.h"

/**
 * set_bit -  sets the value of a bit at a given index to 1.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 * 
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    *n = (*n | ((unsigned long int)1 << index));
    return (1);
}