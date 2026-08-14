#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    va_list args;

    if(n == 0)
    {
        printf("\n");
        return;
    }
    va_start(args, n);
    while(i < n)
    {
        printf("%d", va_arg(args, int));
        if(i < n - 1 && separator != NULL)
            printf("%s", separator);
        i++;
    }
    printf("\n");
    va_end(args);
}