#include "main.h"
#include <stdlib.h>

/**
 * argstostr - caoncats all argur=ements to string
 * @ac: arguement count
 * @av: arguement vector
 * Return: returns a pointer to the string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++, n++)
			;
		n++;
	}
	n++;
	s = malloc(sizeof(char) * n);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j); j++, k++)
			*(s + k) = *(*(av + i) + j);
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';
	return (s);
}
