#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet
 * @c : int parameter
 * Return : isalpha is one when its an alphabet
 */
int _isalpha(int c)
{
	int isalpha;

	isalpha = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		isalpha = 1;
	}
	return (isalpha);
}


