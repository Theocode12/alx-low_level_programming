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
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
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
	int fd, sz = 1024;
	char *buff;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		exit(98);
	}
	buff = malloc(1024);
	sz = read(fd, buff, 1024);
	close(fd);
	fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd < 0)
		exit(99);
	sz = write(fd, buff, sz);
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		exit(99);
	}
	sz = close(fd);
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
		exit(100);
	}
}
