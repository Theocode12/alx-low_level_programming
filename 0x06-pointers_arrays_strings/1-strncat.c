#include "main.h"

/**
 * _strncat - concat two string with to a certain number of byte
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to concat
 * Return: a string 1 concat with string 2 to a specific byte n
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	if (n > 0)
	{
		*(dest + i) = ' ';
		for (j = 0; n > 0 && *(src + j); j++)
		{
			*(dest + i) = *(src + j);
			i++;
			n--;
		}
	}
	else
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
