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
	hash_node_t *h_node, *tmp_node, *prev_node;
	char *dup_value, *dup_key;

	if (key == NULL || strlen(key) == 0 || value == NULL
		|| ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	dup_key = strdup(key);
	dup_value = strdup(value);
	if (!dup_key || !dup_key)
		return (0);
	h_node = get_node(dup_key, dup_value);
	if (!h_node)
		return (0);
	index = key_index((unsigned char *)dup_key, ht->size);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = h_node;
	}
	else
	{
		tmp_node = (ht->array)[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key) == 0)
			{
				tmp_node->value = dup_value;
				return (1);
			}
			prev_node = tmp_node;
			tmp_node = tmp_node->next;
		}
		prev_node->next = h_node;
	}
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

	h_node = malloc(sizeof(hash_node_t));
	if (!h_node)
		return (NULL);
	h_node->key = key;
	h_node->value = value;
	h_node->next = NULL;
	return (h_node);
}
