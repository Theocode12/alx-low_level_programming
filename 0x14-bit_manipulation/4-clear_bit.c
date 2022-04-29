#include "main.h"

/**
 * clear_bit - changes a bit at index from 1 to 0
 * @n: address of where n is stored
 * @index: position at where bit is changed
 * Return: 1 if successfull and -1 if not successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = ~(1 << index);

	if (index > (sizeof(int) * 8) - 1)
		return (-1);
	*n = *n & mask;
	return (1);
}
