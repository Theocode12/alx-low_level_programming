#include "main.h"
/**
 * _strchr - function returns a pointer to the first
 * occurrence of the character c in the string s
 * @s: character string
 * @c: character to find
 * Return: returns null if character not found
 * else return address to the character found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
	return ('\0');
}
