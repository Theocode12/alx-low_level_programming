#include  "main.h"
#include <string.h>

/**
 * append_text_to_file - append a text to a file
 * @filename: file name
 * @text_content: text to append
 * Return: 1 if successful, 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	w = write(fd, text_content, strlen(text_content));
	if (w < 0)
		return (-1);
	return (1);
}
