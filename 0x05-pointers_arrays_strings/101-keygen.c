#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 0;
    int i   = 0;
    int random_num;
    int last_char;
    char password[100];
    int j = 0;
    srand(time(NULL));
    while(sum <= 2646)
    {
    random_num = (rand() % (126 - 33 + 1)) + 33;
    password[i] = random_num;
    i++;
    sum += random_num;
    }
    last_char = 2772 - sum;
    password[i] = last_char;
    while(j <= i)
    {
     putchar(password[j]);
     j++;
    }
    putchar('\n');
    return 0;
} 
