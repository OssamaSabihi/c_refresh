#include <stdio.h>

/**
 *
 * A program that prints the alphabet in lower case except 'e' and 'q'
 *
 * return Always (0): success
 *
 */

int main(void)
{

	char ch = 'a';

	while(ch <= 'z'){

		if(ch == 'e'|| ch == 'q')

			ch++;
		
		else {

			putchar(ch);

		ch++;}
	}

		putchar('\n');

		return (0);
}
