#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: head of the list
 * @n: data in the new node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw_node, *tmp;

	tmp = *head;
	nw_node = get_Node(n);
	if (nw_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nw_node;
	nw_node->prev = tmp;
	return (nw_node);
}

/**
 * get_Node - Get a new node
 * @n: data element for the node
 * Return: Address of the new node
 */

dlistint_t *get_Node(const int n)
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
