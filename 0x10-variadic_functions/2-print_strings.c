#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as arguements
 * @separator: what seperates the string
 * @n: number strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
