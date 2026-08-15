#include "variadic_functions.h"

void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
    char *str = va_arg(args, char*);
    if(str == NULL)
        printf("(nil)");
    else
        printf("%s", str);
}

void print_all(const char * const format, ...)
{
    int i = 0;
    int j;
    char *sep = "";
    va_list args;
    void (*func)(va_list args);
    print_t print[] =
    {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL},
    };
    va_start(args, format);
    while( format && format[i])
    {
        j = 0;
        while(print[j].sp)
        {
            if(format[i] == print[j].sp)
            {
                printf("%s", sep);
                func = print[j].f;
                func(args);
                sep = ", ";
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}