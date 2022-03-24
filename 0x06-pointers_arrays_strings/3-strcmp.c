#include "main.h"

/**
 * _strcmp - compares string
 * @s1: string 1
 * @s2: string 2
 * Return: returns 0 if equal, positive integer value if
 * s1 is greater else negative
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	n = i = 0;
	while (*(s1 + i) && n == 0)
	{
		n = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (n);
}
