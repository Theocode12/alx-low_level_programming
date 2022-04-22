#include "lists.h"
#include <string.h>
#include "stdlib.h"
#include <stdio.h>

/**
 * add_node_end - adds node to the end
 * @head: head node
 * @str: element to be inserted
 * Return: address of the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while(temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
