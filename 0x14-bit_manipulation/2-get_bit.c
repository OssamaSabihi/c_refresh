#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * @n: unsigned long int input.
 * @index: index of the bit.
 * 
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
    int bit;

    bit = 63;

    while (bit >= index)
    {
        if (bit == index)
            return ((n >> bit) & 1);
        bit--;
    }
    return (-1);
}