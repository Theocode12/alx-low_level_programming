#include "main.h"

/**
 * _islower - takes in an int 
 *
 * Return (0) if 0 and (1) if 1
 */

int _islower(int c)
{
	if ( islower(c) == 0 )
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

