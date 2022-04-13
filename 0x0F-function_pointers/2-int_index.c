#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: pointer to array of ints
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 * Return: the index of element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if ((size > 0) && (cmp != NULL) && (array != NULL))
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(*(array + i));
			if (index)
				return (i);
		}
	}
		return (-1);
}
