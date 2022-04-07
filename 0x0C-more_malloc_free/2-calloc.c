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
	int *ptr;

	ptr = malloc(nmemb * size);
	return ((void *)ptr);
}
