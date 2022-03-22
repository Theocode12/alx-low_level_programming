#include "main.h"

/**
 * puts - takes in a char
 * @str: value passed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		if (*(str + i) % 2 == 0)
			_putchar(str[i]);
}
