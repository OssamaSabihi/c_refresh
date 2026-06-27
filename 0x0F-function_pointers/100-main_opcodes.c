#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */

int main(int argc, char *argv[])
{
   unsigned char *p;
    int num, i;
    p =  (unsigned char*)main;
    if(argc != 2)
    {
        printf("Error\n");
        exit (1);
    }
    num = atoi(argv[1]);
    i = 0;
    if(num < 0)
    {
        printf("Error\n");
        exit (2);
    }
    while(i < num)
    {
        printf("%02x", p[i]);
        if(i < num - 1)
            printf(" ");
        i++;
    }
    printf("\n");
    return (0);

}

