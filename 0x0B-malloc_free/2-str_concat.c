#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - fuction concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++, i++)
		;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
