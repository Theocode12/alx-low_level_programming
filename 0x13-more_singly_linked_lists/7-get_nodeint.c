#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at index object
 * @head: head of the list
 * @index: index of the node
 * Return: the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
