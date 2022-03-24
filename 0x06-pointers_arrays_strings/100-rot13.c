#include "main.h"

/**
 * rot13 - using rot cipher to encode a string
 * @str: string
 * Return: returns rot encoded string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			*(str + i) += 13;
		else if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
			*(str + i) -= 13;
		i++;
	}
	return (str);
}
