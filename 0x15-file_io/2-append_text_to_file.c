#include "main.h"

/**
 * append_text_to_file - appends text to the end of an existing file.
 * @filename: the name of the file.
 * @text_content: tcontent to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	ssize_t j;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
