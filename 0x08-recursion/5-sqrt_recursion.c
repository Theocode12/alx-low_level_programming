#include "main.h"

 /**
  * _sqrt_recursion - takes in value of the number to b e squared
  * @n: the squared value
  * Return: return the value returned by _sqrt_val function
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (1);
	return (_sqrt_val(1, n));
}

/**
 * _sqrt_val - find the square root of a value
 * @i: counter
 * @n: squared value
 * Return: square root of a value or -1 if its not a perfect square
 */
int _sqrt_val(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_val(i + 1, n));
}
