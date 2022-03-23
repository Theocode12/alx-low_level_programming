#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints an array
 * @a: address of first element of array
 * @n: total element of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
}
