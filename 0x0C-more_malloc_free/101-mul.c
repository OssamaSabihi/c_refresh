#include "main.h"
#include <stdlib.h>

/**
 * strlen -  returns the length of a string
 * @s: input string
 *
 * Returns: the lenght of the sting
 */

int _strlen(char *s)
{
    if(*s != '\0')
        return (_strlen(s + 1) + 1);

    return (0);
}

/**
 * print_error - prints the word Error follwed by a new 
 * line and stops the program with exit value of 98
 * 
 * Returns: void
 */

void print_error(void)
{
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
}

/**
 * digits_check - checks if a string contains only digits
 * @s: input string
 * 
 * Returns: 1 on success 0 otherwise
 */

int digits_check(char *s)
{
    int i = 0;
    if(*(s + i) == '\0')
        return (0);
    while(*(s + i) != '\0')
    {
        if(*(s + i) > 57 || *(s + i) < 48)
            return (0);

        i++;
    }

    return (1);
}

/**
 * print_result: skips 0s until it finds the start of the array
 * and then prints it
 * @array: input array
 * @l: the array length
 * 
 * Returns: void
 */

void print_result(int *array, int l)
{
    int i = 0;
    while(i < l && array[i] == 0)
    {
        i++;
    }

    if(i == l)
        _putchar('0');
    else
    {
        while(i < l)
        {
            _putchar(array[i] + '0');
            i++;
        }
    }
    _putchar('\n');
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
    int l1, l2, j, k;
    int *result;
    int i = 0;

    if(argc != 3)
        print_error();

    if(digits_check(argv[1]) == 0 || digits_check(argv[2]) == 0)
        print_error();

    l1 = _strlen(argv[1]);
    l2 = _strlen(argv[2]);

    result = malloc(sizeof(int) * (l1 + l2));
    if(result == NULL)
        print_error();
    
    while(i < (l1 + l2))
    {
        result[i] = 0;
            i++;
    }

    i = l1 - 1;

    while(i >= 0)
    {
        j = l2 - 1;
        while(j >= 0)
        {
            k = (argv[1][i] - '0') * (argv[2][j] - '0') + result[i + j + 1];
            result[i + j + 1] = k % 10;
            result[i + j ] += k / 10;

            j--;
        }
        i--;
    }

    print_result(result, (l1 + l2));

    free(result);
    return (0);
}