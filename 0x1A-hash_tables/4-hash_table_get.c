#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - get values from keys
 * @ht: hash tables
 * @key: key
 * Return: value if successfull else Null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);
	tmp = (ht->array)[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
