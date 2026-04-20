#include <stdio.h>

/**
 * a program that  finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0(success)
 */

int main(void)
{
	    long long n = 612852475143;
	    long long j, k, p;
	    int is_prime;

	    for(j = 2; j*j <= n; j++)
	    {
		    if(n % j == 0)
		    {
			    k = n / j;
			    is_prime = 1;
			    for(p = 2; p*p <= k; p++)
			    {
				    if(k % p == 0)
				    {
					    is_prime = 0;
					    break;
				    }
			    }
			    if(is_prime)
			    {
				    printf("%lld\n", k);
				    return (0);
			    }
		    }
	    }
	    return (0);
}
