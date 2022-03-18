#include "main.h"

/**
 * print_square - prints square
 * @size - size of square
 */
void print_square(int size)
{
	int i, j;

	if (n == 0)
	{
		putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
