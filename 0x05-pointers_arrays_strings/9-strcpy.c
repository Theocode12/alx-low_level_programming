#include "main.h"

/**
 * _strcpy -  copies strings 
 * @dest: pointer to which the string is copied to
 * @src: the string itself
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		*(dest + 1) = src[i];
	}
	*(dest + i) = '\0';
	return dest;
}
