#include "main.h"

/**
 * string_toupper - converts all lowercase letters to uppercase
 * @str: string 1
 * Return: return the string all in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) > 96 && *(str + i) < 123)
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
