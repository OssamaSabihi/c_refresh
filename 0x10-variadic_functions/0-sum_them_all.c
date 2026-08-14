#include "variadic_functions.h"

/**
 * sum_them_all: a function that returns the sum of all its arguments.
 * @n: number of arguments.
 * @...: the variabl arguments passed after n.
 * 
 * Return: the sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i = 0;
    int sum = 0;
    va_list args;

    if (n == 0)
        return (0);
    va_start(args, n);
    while (i < n)
    {
        sum += va_arg(args, int);
        i++;
    }
    va_end(args);

    return (sum);
}