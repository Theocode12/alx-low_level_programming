#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: pointer to first element
 * @idx: index to insert node
 * @n: data to insert
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev_node, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = (*head);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	for (i = 0; i < idx; i++)
	{
		prev_node = temp;
		temp = temp->next;
	}
	new->next = temp;
	prev_node->next = new;
	return (new);
}
