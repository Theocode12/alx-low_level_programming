#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as
 * parameter on each element of an array
 * @array: point to array of int
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)

	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
