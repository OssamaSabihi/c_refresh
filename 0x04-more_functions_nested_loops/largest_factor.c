#include <stdio.h>
#include <math.h>

int main(void)
{
	long long i = 612852475143;
	long long j, k;

	for(j = 2; j*j <= i; j++)
	{
		if(i % j == 0)
		{
			k = i / j;
			printf("%lld: is the largest factor", k);
			break;
		}
	}
	printf("\n");

	return (0);

}
			
