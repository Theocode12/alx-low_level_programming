#include "main.h"

/**
 * print_rev - returns reversed string
 * @: string parameter
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	i--;
	for (; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
