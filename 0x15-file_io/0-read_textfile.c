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
	size_t sz;

	if (!filename)
		return (0);
	arr = malloc(sizeof(char) * (letters));
	if (!arr)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	sz = read(fd, arr, letters);
	arr[sz] = '\0';
	sz = write(STDOUT_FILENO, arr, sz);
	if (!(sz > 0))
		return (0);
	close(fd);
	free(arr);
	return (sz);
}
