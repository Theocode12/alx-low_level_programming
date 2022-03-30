#include "main.h"
#include "stdio.h"
/**
 * print_chessboard - prints chessboard
 * @a: multi-dimensional array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		_putchar('\n');
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
