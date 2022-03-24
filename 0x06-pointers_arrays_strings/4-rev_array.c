#include "main.h"

/**
 * reverse_array - reverses integer passed to it
 * @a: array of integers being passed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int n_a[500];

	i = 0;
	while (i < n)
	{
		n_a[i] = *(a + i);
		i++;
	}
	i--;
	j = 0;
	while (i >= 0)
	{
		*(a + j) = *(n_a + i);
		j++;
		i--;
	}
}
