#include "main.h"

/**
 * devizablity_chack - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

 int devizablity_chack(int n, int i)
{
    if(i * i > n)
        return (1);
        
    if(n % i == 0)
        return (0);
    else
        return (devizablity_chack(n, i + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

 int is_prime_number(int n)
{
    if(n < 2)
        return (0);
        
    return (devizablity_chack(n, 2));
}