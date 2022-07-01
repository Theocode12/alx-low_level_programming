#include "hash_tables.h"
#include "string.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_set - setting key ans value pairs in the hash table
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 1 if success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *h_node, *tmp_node;
	char *dup_value;

	if (strlen(key) == 0 || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	tmp_node = (ht->array)[index];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			dup_value = strdup(value);
			if (!dup_value)
				return (0);
			free(tmp_node->value);
			tmp_node->value = dup_value;
			return (1);
		}
		tmp_node = tmp_node->next;
	}
	h_node = get_node((char *)key, (char *)value);
	if (!h_node)
		return (0);
	h_node->next = (ht->array)[index];
	ht->array[index] = h_node;
	return (1);
}

/**
 * get_node - create the key-value pair as a list
 * @key: key
 * @value: value
 * Return: address of node else null
 */

hash_node_t *get_node(char *key, char *value)
{
	hash_node_t *h_node;
	char *dup_key, *dup_value;

	dup_key = strdup(key);
	if (dup_key == NULL)
		return (NULL);
	dup_value = strdup(value);
	if (dup_value == NULL)
	{
		free(dup_key);
		return (NULL);
	}
	h_node = malloc(sizeof(hash_node_t));
	if (!h_node)
		return (NULL);
	h_node->key = dup_key;
	h_node->value = dup_value;
	h_node->next = NULL;
	return (h_node);
}
