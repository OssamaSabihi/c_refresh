#include "main.h"

void print_number(int n)
{
	unsigned int m;

	if(n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if(m > 9)
	print_number(m / 10);
	
	_putchar((m % 10) + '0');
}

	
