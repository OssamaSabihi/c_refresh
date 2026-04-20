#include <stdio.h>

/**
 *
 * A Program that 
 * Prints the alphabet in lowercase, followed by a new line.
 *
 */

int main(void){

	char c = 'a';

	while(c <= 'z'){

		putchar(c);

		c++;
	}

	putchar('\n');

	return (0);

}
