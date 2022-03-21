#include "main.h"

/**
 * swap_int - swaps integer variable of a and b
 * @a: pointer variable
 * @b: pointer variable
 */
void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
