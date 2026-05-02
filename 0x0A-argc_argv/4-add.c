#include <stdio.h>
#include <stdlib.h>

/**
* main - function that adds positive numbers
* @argc: argument count
* @argv: array of argument strings
* Return: result of addition or 1
**/

int main(int argc, char *argv[])
{
    int i = 1;
    int j;
    int sum = 0;

    if(argc == 1)
    {
        printf("0\n");
        return (0);
    }

    while(i < argc)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] >= '0' && argv[i][j] <= '9')
            {
                j++;
            }
            else
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
        i++;
    }

    printf("%d\n", sum);
    return (0);


}