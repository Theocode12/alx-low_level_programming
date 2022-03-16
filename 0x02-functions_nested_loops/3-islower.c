#include "main.h"

/**
 * _islower - takes in an int
 * c: an int
 * Return:  islower `equal zero if not a lower class letter else one
 */

int _islower(int c)
{
	int islower;
	char ch = c;

	islower = 0;
	if (ch >= 'a' && ch <= 'z')
	{
		islower = 1;
	}
		return (islower);
}

