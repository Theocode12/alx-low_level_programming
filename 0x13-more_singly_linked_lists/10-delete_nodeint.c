#include "lists.h"
#include <stdlib.h>

/**
 * delete_first_node - deletes the first node
 * @head: Pointer to the head of the list
 * Return: 1 if successful
 */

int delete_first_node(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (1);
}

/**
 * delete_node_in_btw_node - deletes a node in between two nodes in a list
 * @ptr: pointer to first node
 * @index: index of node to delete
 * Return: i if successful
 */

int delete_node_in_btw_node(listint_t *ptr, unsigned int index)
{
	unsigned int i;
	listint_t *next_node, *prev_node;

	for (i = 0; i < index; i++)
	{
		prev_node = ptr;
		ptr = ptr->next;
		next_node = ptr->next;
	}
	free(prev_node->next);
	prev_node->next = next_node;
	return (1);
}

/**
 * delete_nodeint_at_index - delete a node and frees it
 * @head: pointer to the head of the list
 * @index: index to delete
 * Return: 1 if successfull, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev_node;
	unsigned int i = 0;

	ptr = *head;
	if (ptr == NULL)
		return (-1);
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	if (index >= i)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		return (delete_first_node(&(*head)));
	}
	if (index == (index - 1))
	{
		for (i = 0; i < index; i++)
		{
			prev_node = ptr;
			ptr = ptr->next;
		}
		free(prev_node->next);
		prev_node->next = NULL;
		return (1);
	}
	return (delete_node_in_btw_node(ptr, index));
}
