#include "hash_tables.h"

/**
 * key_index - Index used to access the key value pair
 * @key: key
 * @size: size of the hash table
 * Return: index for acessing key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
