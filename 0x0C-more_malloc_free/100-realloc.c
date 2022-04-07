#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - replicate realloc on stdlib
 * @ptr: pointer to original memory
 * @old_size: size of previous memory
 * @new_size: size of new memory
 * Return: returns pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *str, *old_ptr;

	old_ptr = ptr;
	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		str = malloc(new_size);
		if (!str)
		{
			free(ptr);
			return (NULL);
		}
		return (str);
	}
	if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}

	str = malloc(new_size);
	if (!str)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < (old_size || new_size--); i++)
	{
		str[i] = old_ptr[i];
	}
	free(ptr);
	return (str);
}
