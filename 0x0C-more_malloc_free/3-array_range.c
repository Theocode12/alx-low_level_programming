#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - array craeted to contain all values feom main to max
 * @min: min value
 * @max: max value
 * Return: the pointer to new created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min += 1;
	}
	return (ptr);
}
