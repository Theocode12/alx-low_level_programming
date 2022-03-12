#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (i = 48; j <= 57; j++)
		{
			if(!(i == j))
			{
				putchar(i);
				putchar(j);
				if (!(i == 56 && j == 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
