#include "main.h"

/**
 * _strspn - calculates the length (in bytes) of the
 * initial segment of s which consists entirely of bytes in accept
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing
 * the list of characters to match in str1.
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, counter;
	int i = 0, j;

	counter = 0;
	count = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] != s[i])
				;
			else
			{
				count++;
				break;
			}
		}
		if ((i > 0) && (counter == count))
			break;
		counter = count;
		i++;
	}
	return (count);
}
