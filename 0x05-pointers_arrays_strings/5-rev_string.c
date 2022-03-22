#include "main.h"

/**
 * rev_string - reversing string
 * @s: string
 */
void rev_string(char *s)
{
	char new[500];
	int count, newcount;

	count = 0, newcount = 0;

	while (*(s + count) != '\0')
	{
		new[count] = *(s + count);
		count++;
	}

	count--;

	while (count >= 0)
	{
		*(s + newcount) = new[count];
		count--;
		newcount++;
	}
}
