#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts number of argurments
 * @argv: list the number of arguements
 * Return: returns 0 if succesful
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i <= argc - 1; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9'))
			{
				puts("Error");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
