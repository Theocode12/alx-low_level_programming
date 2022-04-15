#include <stdarg.h>
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
	for (i = 0; i < n; i++)
	{
		if (seperator != NULL)
		{
			printf("%d", va_arg(ap, int));
			if (i < (n - 1))
				printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(ap);
}
