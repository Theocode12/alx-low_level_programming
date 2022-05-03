#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *arr;
	size_t sz;

	if (!filename)
		return (0);
	arr = malloc(sizeof(char)*letters);
	if (!arr)
		return (0);
	fd = open(filename, O_RDONLY);
	sz = read(fd, arr, letters);
	arr[letters] = '\0';
	dprintf(STDOUT_FILENO, "%s\n", arr);
	close (fd);
	free(arr);
	return (sz);
}