#include "main.h"

/**
 * _isdigit - checks if a char is numeric
 * @c: input parameter
 * Return: return 1 if numeric else zero
 */
int _isdigit(int c)
{
	int digit;

	digit = 0;
	if (c >= '0' && c <= '9')
		digit = 1;
	return (digit);
}
