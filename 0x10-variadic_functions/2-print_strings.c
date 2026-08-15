#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: Number of unnamed parameters
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    char *str;
    va_list args;

    va_start(args, n);
    while(i < n)
    {
        str = va_arg(args, char*);
        if(str != NULL)
            printf("%s", str);
        else
            printf("(nil)");
        if(i < n - 1 && separator != NULL)
            printf("%s", separator);
        i++;
    }
    va_end(args);
    printf("\n");
}