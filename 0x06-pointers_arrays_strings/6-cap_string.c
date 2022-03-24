#include "main.h"
/**
 * cap_string - convert letter that proceed special char to uppercase
 * @str: string
 * Return: returns updated string
 */

char *cap_string(char *str)
{
	int i, j;
	char cap[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '}', '{', '\n'};

	i = 0;
	while (*(str + i))
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		j = 0;
		while (cap[j])
		{
			if (str[i] == cap[j] && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
