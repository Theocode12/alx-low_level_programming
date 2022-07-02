#include "sorted_hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t));
	if (ht->array == NULL)
		return (NULL);
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**/