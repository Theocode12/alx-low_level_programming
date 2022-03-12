#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		putchar(10);
		i++;
	}
	return (0);
}
