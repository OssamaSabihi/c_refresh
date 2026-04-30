#include <stdio.h>

/**
* main - a program that prints all arguments it receives.
* @argc: arg count
* @argv: array of arg count
* Return: 0
**/
int main(int argc, char *argv[])
{
    int i = 0;
    int j = argc;
    while(i < j)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return(0);
}