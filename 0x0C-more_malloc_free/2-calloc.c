#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocated memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return ((void *)ptr);
}
