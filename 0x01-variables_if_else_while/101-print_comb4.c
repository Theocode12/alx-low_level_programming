#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digi1, digi2, digi3;
	for (digi1 = 0; digi1 < 9; digi1++)
	{
		for (digi2 = digi1 + 1; digi2 < 10; digi2++)
		{
			for (digi3 = digi2 + 1; digi3 < 10; digi3++)
			{
				putchar((digi1 % 10) + '0');
				putchar((digi2 % 10) + '0');
				putchar((digi3 % 10) + '0');
				if (digi1 == 7 && digi2 == 8 && digi3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
