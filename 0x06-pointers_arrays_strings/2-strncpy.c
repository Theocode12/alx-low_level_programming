#include "main.h"

/**
 * _strncpy - copies a string to a particular number of bytes
 * @dest: string 1
 * @src: string 2
 * Return: copies string 2 into string 1
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
