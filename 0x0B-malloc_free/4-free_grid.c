#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees 2D arrays
 * @grid: pointer to the 2D array
 * @height: pointer to int
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(*(grid + i));
		free(grid);
	}
}
