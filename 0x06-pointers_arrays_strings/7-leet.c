#include "main.h"

/**
 * leet - replaces some special char with num
 * @str: string
 * Return: returns the updated string
 */
char *leet(char *str)
{
	int i, j;
	char alpha[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	i = 0;
	while (*(str + i))
	{
		j = 0;
		while (alpha[j])
		{
			if (alpha[j] == str[i])
			{
				str[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}

