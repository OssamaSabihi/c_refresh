#include <stdio.h>
#include <math.h>

int main(void)
{
	long long i = 50829599;
	long long j;

		for(j = 2; j * j <= i + 1; j++)
		{
			if( i % j == 0)
			{
				break;
			}
		}

	        if(j > sqrt(i))
		{
		printf("%lld: is prime\n", i);
		}
		else
			printf("%lld: is not prime\n", i);

	return (0);
}

