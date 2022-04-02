#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts number of argurments
 * @argv: list the number of arguements
 * Return: returns 0 if succesful
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; argv[i]; i++)
	{
		if (!(**(argv + i) >= '0' && (**(argv + i) <= '9')))
		{
			puts("Error");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
