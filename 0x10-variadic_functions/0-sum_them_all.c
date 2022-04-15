#include <stdarg.h>

/**
 * sum_them_all - sums the variable number of arguements
 * @n: number of variable arguements passed
 * Return: sum of variable arguements
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	va_list ap;
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
