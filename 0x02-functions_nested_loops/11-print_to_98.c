#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - counts til 98 
 *@n: takes in the argz passes
 *Return: Always(0)
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d",n);
		if (n < 98)
		{
			printf(", ");
		}
		else
		{
			break;
		}
		n++;
	}
	while (n >= 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(", ");
		}
		else
		{
			break;
		}
		n--;
	}
}
