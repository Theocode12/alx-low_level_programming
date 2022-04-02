#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: list of args
 * Return: multiplys args
 */

int main(int argc, char *argv[])
{
	int c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	c = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", c);
	return (0)
}
