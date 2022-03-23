#include "main.h"

/**
 * puts_half - take in characters and returns half of them
 * @str: characters taken by the function
 */
void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; *(str + i); i++);
	k = i;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	k--;
	for (; j <= k; )
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
