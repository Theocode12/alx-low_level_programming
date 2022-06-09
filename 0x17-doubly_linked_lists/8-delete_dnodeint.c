#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: the head of the list
 * @index: index at which to delete
 * Return: 1 if successful, else 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int count = 0;

	current = *head;
	while (current)
	{
		if (count == index)
		{
			if (index == 0)
			{
				temp = *head;
				*head = (*head)->next;
				free(temp);
				return (1);
			}
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
