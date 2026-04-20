#include <stdio.h>

/*
 *a program that prints all single digit numbers (0-9) of base 10, followed by a new line.
 */

int main(void)
{

  char ch = '0';

  while( ch <= '9' )
 {

    putchar(ch);

    ch++;
 }

  putchar('\n');

  return (0);
}
