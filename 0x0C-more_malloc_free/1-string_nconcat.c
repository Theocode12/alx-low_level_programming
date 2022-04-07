#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - returns pointer to a newly allocated space in
 * memory which contains s1 followed by n byted of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of string 1 to be printed
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	unsigned int _n = n;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j] && _n--; j++, i++)
		;
	i++;
	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	_n = n;
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] && _n--; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
