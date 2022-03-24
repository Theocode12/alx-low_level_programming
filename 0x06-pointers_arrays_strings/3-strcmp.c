#include "main.h"

/**
 * _strcmp - compares string
 * @s1 - string 1
 * @s2 - string 2
 * Return: returns 0 if equal, positive integer value if 
 * s1 is greater else negative
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, n;

	j = 0;
	i = 0;
	n = 0;
	while ((*(s1 + i) || *(s2 + i)) && (j < 1))
	{
		if (*(s1 + i) == *(s2 + i))
			;
		if (*(s1 + i) > *(s2 + i))
		{
			n = *(s1 + i) - *(s2 + i);
			j++;
		}
		if (*(s1 + i) < *(s2 + i))
		{
			n = *(s1 + i) - *(s2 + i);
			j++;
		}
		i++;
	}
	return (n);
}
