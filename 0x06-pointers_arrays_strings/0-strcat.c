#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: concat string 2 to 1
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	*(dest + i) = ' ';
	for (j = 0; *(src + j); j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
