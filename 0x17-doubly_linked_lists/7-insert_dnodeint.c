#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: head of the list
 * @idx: index to insert at
 * @n: data to insert
 * Return: new_node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw_node, *tmp, *idx_node;
	unsigned int count = 0;

	nw_node = getnode(n);
	idx_node = *h;
	if (idx == 0)
	{
		(*h)->prev = nw_node;
		nw_node->next = *h;
		*h = nw_node;
		return (nw_node);
	}
	while (idx_node)
	{
		if (count == idx - 1)
		{
			tmp = idx_node->next;
			idx_node->next = nw_node;
			nw_node->prev = idx_node;
			nw_node->next = tmp;
			if (tmp == NULL)
				return (nw_node);
			tmp->prev = nw_node;
			return (nw_node);
		}
		idx_node = idx_node->next;
		count++;
	}
	return (NULL);
}

/**
 * getnode - Get a new node
 * @n: data element for the node
 * Return: Address of the new node
 */

dlistint_t *getnode(const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}
