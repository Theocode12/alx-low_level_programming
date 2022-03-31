#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string passed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[0]);
	return (_puts_recursion(s + 1));
}
