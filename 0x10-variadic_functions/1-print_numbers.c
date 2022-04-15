#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>

/**
 * print_numbers -print numbers followes by new line
 * @separator: separator
 * @n: number of arguements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ap);
}
