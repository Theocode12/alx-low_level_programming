#include "main.h"

/**
 * get_bit - gets bit at a particular position
 * @n: integer
 * @index: position to get bit
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (mask > n)
		return (-1);
	n = n & mask;
	if (n > 0)
	{
		n = 1;
		return (n);
	}
	else
	{
		n = 0;
	}
	return (n);
}
