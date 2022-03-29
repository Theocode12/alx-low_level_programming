#include "main.h"

/**
 * _memset - increases the value of a number of address by a number of bytes
 * @s: the address of the first array
 * @b: number of bytes
 * @n: number of continous address to increment
 * Return: returns the result of the s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(s + i) += b;
		i++;
	}
	return (s);
}
