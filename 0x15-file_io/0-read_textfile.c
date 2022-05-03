#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file
 * @filename: file name
 * @letters: amount of byter to read
 * Return: return number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *arr;
	ssize_t sz, sz_r;

	if (!filename)
		return (0);
	arr = malloc(sizeof(char) * (letters));
	if (!arr)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(arr);
		return (0);
	}
	sz_r = read(fd, arr, letters);
	close(fd);
	if (!(sz_r > 0))
	{
		free(arr);
		return (0);
	}
	sz = write(STDOUT_FILENO, arr, sz_r);
	if (!(sz > 0))
		return (0);
	free(arr);
	return (sz);
}
