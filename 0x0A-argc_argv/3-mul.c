#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: arg count
 * @argv: array of strings
 * Return: result of multiplication or 1
 **/

 int main(int argc, char *argv[])
 {
    if(argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    int a = atoi(*(argv + 1));
    int b = atoi(*(argv + 2));

    printf("%d\n", a * b);
    return (0);
 }