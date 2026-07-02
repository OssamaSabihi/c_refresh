#include "main.h"

/**
 * print_memory - prints the position of the first
 * byte of the line in hexadecimal (8 chars)
 * @c: the byte to print
 * 
 * return: void
 */

void print_memory(int c)
{
    char buffer[8];
    char hex[] = "0123456789abcdef";
    int i = 7;
    while(i >= 0)
    {
        buffer[i] = hex[c & 0xF];
        c = c >> 4;
        i--;
    }
    i = 0;
    while(i < 8)
    {
        _putchar(buffer[i]);
        i++;
    }
    _putchar(' ');
}

/**
 * print_hex - prints the hex value of 10 chars of a string
 * @s: input string
 * @size: the number of the chars left in the string
 * 
 * return: void
 */

void print_hex(char *s, int size)
{
    int i = 0;
    char hex[] = "0123456789abcdef";
    char buffer[2];
    char l;
    if(size <= 0)
        return;
    while(i < 10)
    {
        if(i < size)
        {
            buffer[0] = hex[s[i] & 0xF];
            l = s[i] >> 4;
            buffer[1] = hex[l & 0xF];
            _putchar(buffer[1]);
            _putchar(buffer[0]);
            _putchar(' ');
        }
        else
        {
            _putchar(' ');
            _putchar(' ');
        }
        i++;
    }
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */


void print_buffer(char *b, int size)
{
    int i = 0;
    int j, bytes_left;
    bytes_left = size;
    while(i < size)
    {
        print_memory(i);
        print_hex(&(b[i]), bytes_left);
        j = 0;
        while(j < 10)
        {
            if(j < bytes_left)
            {
                if(b[i] >= 32 && b[i] <= 126)
                {
                    _putchar(b[i]);
                }
                else
                    _putchar('.');
            }
            else
                _putchar(' ');
            j++;
            i++;
        }
        bytes_left -= 10;
        _putchar('\n');
    }
}
