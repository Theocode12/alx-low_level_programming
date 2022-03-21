#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: takes in a string literal
 * Return: returs the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
