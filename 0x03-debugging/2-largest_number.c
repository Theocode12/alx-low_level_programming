#include "main.h"

/**
 * largest_number - return the larges of 3 numberss
 *@a: first integer
 *@b: 2nd integer
 *@c: 3rd integer
 * Returns: largest number
 */

int largest_number(int a, int b, int c)
{
	if (c >= b)
	{
		if (c >= a)
		{
			return (c);
		}
		else
		{
			return (a);
		}
	}
	else
	{
		if (b >= a)
		{
			return(b);
		}
		else
		{
			return (a);
		}
	}
}
