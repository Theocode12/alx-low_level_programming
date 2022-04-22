#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds node at the beginning of a list_t list
 * @head: the head node
 * @str: str
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!(temp))
		return (NULL);
	temp->next = *(head);
	temp->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	*(head) = temp;
	return (*(head));
}
