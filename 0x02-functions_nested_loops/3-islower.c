#include "main.h"

/**
 * _islower - takes in an int 
 *
 * Return (0) if 0 and (1) if 1
 */

int _islower(int c)
{
	int islower;
	char ch ;

	islower = 0;
	if ( ch >= 'a' && ch <= 'z' )
	{
		islower = 1;
	}
		return (islower);
}

