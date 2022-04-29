#include "main.h"

/**
 * set_bit - set a bit at an index
 * @n: pointer to number
 * @index: position of bit to set
 * Return: 1 if sucessfull and -1 if unsucessfull 
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	if (index > (sizeof(int) * 7))
		return (-1);
	*n = *n | mask;
	return (1);
}
