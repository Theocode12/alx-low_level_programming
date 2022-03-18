#include "main.h"

/**
 * _isupper - Takes in alphabet and return deir case
 * @c: input parameter
 * Return: returns 0 if lowercase and 1 id uppercase
 */
int _isupper(int c)
{
	int isupper = 0;

	if (c >= 'A' && c <= 'Z')
	{
		isupper = 1;
	}
	return (isupper);
}
