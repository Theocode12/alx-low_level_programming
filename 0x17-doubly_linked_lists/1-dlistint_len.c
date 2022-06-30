#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 * @h: head node
 * Return: return number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}
