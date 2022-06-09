#include "lists.h"

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
	nw_node = get_node(n);
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
