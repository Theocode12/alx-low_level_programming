#include <stdio.h>

/**
 * _pow_recursion - solves the power of numbers
 * @x: number
 * @y: index number
 * Return: the result of powers of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}