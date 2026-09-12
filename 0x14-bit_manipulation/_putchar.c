#include <unistd.h>

/**
 * _putchar - displays 1 character to stdo.
 * @c: tha character to display.
 *
 * Return: 1 on success -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
