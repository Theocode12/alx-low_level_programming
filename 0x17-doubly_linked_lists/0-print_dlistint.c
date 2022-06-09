#include "lists.h"
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
