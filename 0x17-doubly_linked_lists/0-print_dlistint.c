#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print the data in double linked list
 * @h:head node
 * Return: number of nodes in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

/**
 * get_node - Get a new node
 * @n: data element for the node
 * Return: Address of the new node
 */

dlistint_t *get_node(const int n)
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
