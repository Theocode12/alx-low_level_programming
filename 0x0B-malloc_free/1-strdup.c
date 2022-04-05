#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string str
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char* cp_ptr;
	cp_ptr = malloc(sizeof(char));
	if (cp_ptr == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cp_ptr[i] = str[i];
	cp_ptr[i] = '\0';
	return (cp_ptr);
}
