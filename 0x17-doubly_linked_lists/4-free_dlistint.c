#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr_ptr = head;

	while (head)
	{
		head = head->next;
		free(fr_ptr);
		fr_ptr = head;
	}
}
