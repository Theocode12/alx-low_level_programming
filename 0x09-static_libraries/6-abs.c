#include "stdio.h"

/**
 * _abs - Takes in a real number
 * @n: The int parameter taken
 * Return: The absolute value of a number
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}

