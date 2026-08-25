#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0
	int fd;
	ssize_t j;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while(text_content[i])
			i++;
		j = write(fd, text_content, i);
		if (j == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
