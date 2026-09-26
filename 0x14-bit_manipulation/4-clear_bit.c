#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: pointer of an unsigned long int.
 * @index: the index of the bit.
 *  
 * Return: 1 on success -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int bit = 1;
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);
    *n = *n & (~(bit << index));
    return (1);
}