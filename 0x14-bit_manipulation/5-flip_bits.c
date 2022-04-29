#include "main.h"

/**
 * flip_bits - flipbits and counts the number of bits /
 * flipped between two numbers
 * @n: number 1
 * @m: number 2
 * Return: number of bit flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long count = 0, flip;

	flip = n ^ m;
	while (flip >= 0)
	{
		if ((flip & 1) == 1)
			count++;
		flip >>= 1;
	}
	return (count);
}