#include "main.h"
#include <stdio.h>

/**
 * main - a program that copies the contents of one file into another.
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	int fdt, fdf, c1, c2;
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdt == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fdf);
		exit(99);
	}
	
	while ((r = read(fdf, buffer, sizeof(buffer))) > 0)
	{
		w = write(fdt, buffer, r);
		if (w != r)
		{
			close(fdt);
			close(fdf);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
        	close(fdt);
        	close(fdf);
        	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        	exit(98);
	}
	
	c1 = close(fdt);
	if (c1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	c2 = close(fdf);
	if (c2 == -1)
        {
                dprintf(2, "Error: Can't close fd %d\n", fdf);
                exit(100);
        }
	return (0);
}
