#include "main.h"

/**
 * print_binary - prints binary equivalent
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0, shift = 0, temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (temp > 0)
	{
		temp = temp / 2;
		i++;
	}
	for (shift = 1 << (i - 1); shift > 0; shift = shift / 2)
	{
		(n & shift) ? _putchar('1') : _putchar('0');
	}
}
