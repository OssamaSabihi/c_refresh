#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

 int main(int argc, char *argv[])
 {
    int i = 0;
    int coinsnum = 0;
    int tempnumb = 0;
    int money;
    int coins[] = {25, 10, 5, 2, 1};

    if(argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    money = atoi(argv[1]);

    if(money <= 0)
    {
        printf("0\n");
        return (0);
    }

    while(money > 0)
    {
        if(i > 4)
        {
            printf("Glitch\n");
            return (1);
        }
        if(money / coins[i] >= 1)
        {
            coinsnum += (money / coins[i]);
            tempnumb = money / coins[i];
            money = money - (tempnumb * coins[i]);
            i++;
        }
        else
        {
            i++;
        }
    }

    printf("%d\n", coinsnum);
    return (0);


 }