#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
    int bit;
    int start;
    char c;

    bit = 63;
    start = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while(bit >= 0)
    {
        if (n >> bit == 1)
            start = 1;
        if (start)
        {
            c = ((n >> bit) & 1) + '0';
            _putchar(c);
        }
        bit--;
    }
}