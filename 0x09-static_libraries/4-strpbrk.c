#include "main.h"

/**
 * _strpbrk - locates the first occurance in the string
 * s of any of the bytes in the string accept
 * @s: the string it receives
 * @accept: byte you want to locate
 * Return: returns string of the first occurrance of a byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return ('\0');
}
