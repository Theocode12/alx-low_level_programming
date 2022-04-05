#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional arrays
 * @width: columns
 * @height: rows
 * Return: returns pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = malloc(height * sizeof(int*));

	if (width < 0 || height < 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			ptr[j][i] = 0;
		}
	}
	return (ptr);
}
