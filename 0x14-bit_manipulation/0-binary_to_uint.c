#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: a string of binary numbers
 * Return: an unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len, idx = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if ((b[len] != '0') && (b[len] != '1'))
		{
			return (0);
		}
		if (len > 0)
			idx *= 2;
	}
	for (len = 0; b[len]; len++)
	{
		num <<= 1;
		if (b[len] == '1')
			num += 1;
	}
	return (num);
}
