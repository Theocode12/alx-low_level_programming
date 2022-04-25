#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: header pointer
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
