#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creating a hash table
 * @size: size of table
 * Return: pointer to table
 */

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

/**
 * shash_table_set - setting key ans value pairs in the hash table
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 1 if success else 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	shash_node_t *h_node, *tmp_node;
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
	h_node = get_sorted_node(ht, (char *)key, (char *)value);
	if (!h_node)
		return (0);
	h_node->next = (ht->array)[index];
	ht->array[index] = h_node;
	return (1);
}

/**
 * get_sorted_node - create the key-value pair as a list
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: address of node else null
 */

shash_node_t *get_sorted_node(shash_table_t *ht, char *key, char *value)
{
	shash_node_t *h_node;

	h_node = malloc(sizeof(shash_node_t));
	h_node->key = strdup(key);
	h_node->value = strdup(value);
	h_node->next = NULL;
	h_node->sprev = NULL;
	h_node->snext = NULL;
	if (ht->shead == NULL)
	{
		ht->shead = h_node;
		ht->stail = h_node;
		return (h_node);
	}
	else
		pre_set_ht(ht, h_node, key);
	return (h_node);
}

/**
 * pre_set_ht - links the elements together
 * @ht: hash table
 * @h_node: node to be inserted
 * @key: key
 */

void pre_set_ht(shash_table_t *ht, shash_node_t *h_node, char *key)
{
	shash_node_t *temp_h, *prev_h;
	int flag = 0, count = 0;

	temp_h = ht->shead;
	while (temp_h != NULL)
	{
		if (flag == 0)
		{
			if (strcmp(key, temp_h->key) < 0)
			{
				if (temp_h->sprev == NULL)
				{
					temp_h->sprev = h_node;
					h_node->snext = temp_h;
					ht->shead = h_node;
						flag++;
				}
				else
				{
					h_node->snext = temp_h;
					h_node->sprev = temp_h->sprev;
					temp_h->sprev = h_node;
					h_node->sprev->snext = h_node;
					flag += 1;
				}
			}
		}
		if (temp_h->snext == NULL && flag > 0)
		{
			ht->stail = temp_h;
			return;
		}
		prev_h = temp_h;
		temp_h = temp_h->snext;
		count++;
	}
	prev_h->snext = h_node;
	h_node->sprev = prev_h;
	ht->stail = h_node;
}


/**
 * shash_table_get - get values from keys
 * @ht: hash tables
 * @key: key
 * Return: value if successfull else Null
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
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

/**
 * shash_table_print - prints contents of hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head_node;
	unsigned long int flag = 0;

	if (ht == NULL)
		return;
	head_node = ht->shead;
	printf("{");
	while (head_node)
	{
		if (flag > 0)
			printf(", ");
		printf("'%s': '%s'", head_node->key, head_node->value);
		head_node = head_node->snext;
		flag++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print reversed sorted array
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail_node;
	unsigned long int flag = 0;

	if (ht == NULL)
		return;
	tail_node = ht->stail;
	printf("{");
	while (tail_node)
	{
		if (flag > 0)
			printf(", ");
		printf("'%s': '%s'", tail_node->key, tail_node->value);
		tail_node = tail_node->sprev;
		flag++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *h_node, *nxt_node;

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
