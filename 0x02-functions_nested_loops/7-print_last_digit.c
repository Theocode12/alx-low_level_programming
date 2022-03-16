#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: The int parameter taken
 * Return: n the last digit of the number is returned
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
	}
	if (n < 0)
	{
		n = -(n % 10);
	}

	_putchar(n + '0');
	return (n);
}
