#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: where the bytes is copied
 * @src: copied bytes from
 * @n: number of bytes to copy
 * Return: dest address is returned
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n)
	{
		*(dest + i) = *(src + i);
		n--;
		i++;
	}
	return (dest);
}
