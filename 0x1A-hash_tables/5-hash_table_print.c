#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints contents of hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;
	hash_node_t *h_node;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		h_node = ht->array[index];
		while (h_node)
		{
			if (flag > 0)
				printf(", ");
			printf("'%s': '%s'", h_node->key, h_node->value);
			h_node = h_node->next;
			flag++;
		}
		index++;
	}
	printf("}\n");
}
