#include "lists.h"

/**
 * sum_dlistint - sum interger element of a list
 * @head: head of the list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
