#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: size of memory allocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return ((void *)ptr);
}
