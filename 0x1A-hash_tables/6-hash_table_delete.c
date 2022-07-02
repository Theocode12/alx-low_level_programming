#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *h_node, *nxt_node;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		h_node = ht->array[index];
		while (h_node)
		{
			nxt_node = h_node->next;
			free(h_node->key);
			free(h_node->value);
			free(h_node);
			h_node = nxt_node;
		}
	}
	free(ht->array);
	free(ht);
}
