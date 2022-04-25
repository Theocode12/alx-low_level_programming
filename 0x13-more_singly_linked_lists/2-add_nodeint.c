#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  add a node
 * @head: head of the list
 * @n: element to be added
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n =  n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
