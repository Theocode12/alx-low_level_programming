#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops a node from the list
 * @head: pointer to the first node in the list
 * Return: returns element that was poppped
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp =  *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
