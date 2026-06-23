#include "3-calc.h"

int main(int argc, char *argv[])
{
    int num1,num2;
    if(argc != 4)
    {
        printf("Error\n");
        exit (98);
    }
    int (*func)(int, int);
    func = get_op_func(argv[2]);
    if(func == NULL)
    {
        printf("Error\n");
        exit (99);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    if(((func == op_div) || (func == op_mod)) && num2 == 0)
    {
        printf("Error\n");
        exit (100);
    }

    printf("%d\n", func(num1, num2));

    return (0);

}