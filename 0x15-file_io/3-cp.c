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
		exit(97);
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
	int fd1, fd2, buf_sz = 1024, f_close, sz = 1;
	char *buff;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buff = malloc(buf_sz);
	while (sz != 0)
	{
		sz = read(fd1, buff, buf_sz);
		if (sz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		sz = write(fd2, buff, sz);
		if (sz < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	f_close = close(fd1);
	if (f_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	f_close = close(fd2);
	if (f_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
}
