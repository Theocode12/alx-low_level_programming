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
	list_t *temp, *ptr;

	temp = *(head);
	if ((*head) == NULL)
	{
		*(head) = malloc(sizeof(list_t));
		(*head)->str = strdup(str);
		(*head)->next = NULL;
		(*head)->len = strlen(str);
	}
	else
	{
		while (temp != NULL)
		{
			ptr = temp;
			temp = temp->next;
		}
		ptr->next = malloc(sizeof(list_t));
		if (ptr->next == NULL)
			return (NULL);
		ptr->next->str = strdup(str);
		ptr->next->len = strlen(str);
		ptr->next->next = NULL;
	}
	return (ptr->next);
}
