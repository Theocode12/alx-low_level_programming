#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void _cp(char *file_from, char *file_to);

/**
 * main - main
 * @argc: number of arguements
 * @argv: arguements
 * Return: 0 on sucess
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	_cp(argv[1], argv[2]);
	return (0);
}

/**
 * _cp - copies contents of a file to a another
 * @file_from: file to be copied from
 * @file_to: file to be copied to
 */

void _cp(char *file_from, char *file_to)
{
	int fd, sz = 1024, f_close;
	char *buff;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buff = malloc(sz);
	sz = read(fd, buff, sz);
	f_close = close(fd);
	if (f_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	sz = write(fd, buff, sz);
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	f_close = close(fd);
	if (f_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
