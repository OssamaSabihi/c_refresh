#include <stdio.h>

/**
 * print_first - prints a sentence before main starts
 * 
 * Return: void.
 */

void __attribute__ ((constructor)) print_first()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}