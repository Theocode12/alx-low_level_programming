#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_node_at_head - insert node at the head of a list
 * @head: pointer to the first element
 * @new: new node
 * Return: pointer to the new node
 */

listint_t *insert_node_at_head(listint_t **head, listint_t *new)
{
	new->next = *head;
	*head = new;
	return (new);
}

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
	unsigned int i, count = 0;

	if (head == NULL)
		return (NULL);
	temp = (*head);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (idx >= count)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = (*head);
	if (idx == 0)
		return (insert_node_at_head(&(*head), new));
	if (idx == (count))
	{
		for (i = 0; i <= idx; i++)
		{
			prev_node = temp;
			temp = temp->next;
		}
		prev_node->next = new;
		return (new);
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
