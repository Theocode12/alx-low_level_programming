#include "main.h"
#include "string.h"

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of the file
 * Return: 1 if successful, 0 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		close(fd);
	else
	{
		write(fd, text_content, strlen(text_content));
		close(fd);
	}
	return (1);
}
