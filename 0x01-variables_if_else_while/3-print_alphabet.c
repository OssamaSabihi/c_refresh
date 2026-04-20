#include <stdio.h>

/**
 *
 * A Program that
 * Prints the alphabet in lowercase and uppercase, followed by a new line.
 *
 **/

int main(void)
{

	char c = 'a';

	char d = 'A';

        while(c <= 'z'){

	        putchar(c);

 	c++;
}

     while(d <= 'Z'){

		putchar(d);

	d++;
	}

	 putchar('\n');

	return (0);

}
