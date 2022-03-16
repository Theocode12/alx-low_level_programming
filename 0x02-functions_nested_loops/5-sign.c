#include "main.h"

/**
 * print_sign - checks sign of integers
 * @n: The parameter it collects
 *
 * Return: + if positive integer, - if negetive integer or zero
 */
int print_sign(int n)
{
	int sign;

	sign = 0;
	if (n > 0)
	{
		sign = 1;
		purchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		putchar('-');
	}
	else
	{
		putchar('0');
	}
	return sign;
}
