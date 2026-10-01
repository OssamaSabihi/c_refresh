#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * 
 * Return:number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor;
    unsigned int diff;
    unsigned long int bit;

    xor = m ^ n;
    diff = 0;
    for (bit = 1; bit > 0; bit <<= 1)
    {
        if ((bit & xor))
            diff++;
    }
    return (diff);
}
#include <stdio.h>
int main()
{
    unsigned int i = flip_bits(15, 0);
    printf("%i", i);
}