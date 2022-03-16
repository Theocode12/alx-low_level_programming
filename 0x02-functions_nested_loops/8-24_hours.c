#include "main.h"

/**
 *
 *
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (l = 0; l < 3; l++)
	{
		for (k = 0; k < 4; k++)
		{
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 10; j++)
				{
					_putchar(l + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar('\n');
				}
			}
		}
	}
}
