#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to the beginning of the list
 * @head: head of the list
 * @n: data of the node to be added
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_node;

	nw_node = get_node(n);
	if (nw_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}
	(*head)->prev = nw_node;
	nw_node->next = *head;
	*head = nw_node;
	return (nw_node);
}
