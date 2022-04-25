#include "lists.h"
#include "stdio.h"

/**
 * print_listint - print list if element in a singly linked list
 * @h: pointer to the first elemrnt in the list
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
