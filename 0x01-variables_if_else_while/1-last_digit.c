#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return 0 (Sucess)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	if (l < 6)
	{
		printf("Last digit of %d and is less than 6 and not 0", n, l);
	}
	return (0);
}
