#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to the first element
 * @n: element to be added
 * Return: returns the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		(*temp).next = new;
	}
	return (new);
}
