#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: pointer to which the string is copied to
 * @src: the string itself
 * Return: the copied srting is returned
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
