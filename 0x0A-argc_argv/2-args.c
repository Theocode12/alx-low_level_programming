#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: list of args
 * Return: return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
