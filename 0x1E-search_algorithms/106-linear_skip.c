#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - implement jump search with linear skip
 * @list: head of the linked list
 * @value: value to search for
 * Return: if value found, return node else NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list;

	list = list->express;
	while (list)
	{
		if (list->n < value)
		{
			printf("Value checked at index [%ld] = [%d]\n",
					list->index, list->n);
			if (!list->express)
			{
				prev = list;
				break;
			}
		}

		else
		{
			printf("Value checked at index [%ld] = [%d]\n",
					list->index, list->n);
			break;
		}
		prev = list;
		list = list->express;
	}

	if (!list && list->n < value)
	{
		list = prev;
		while (list->next)
			list = list->next;
		printf("Value found between indexes [%ld] and [%ld]\n",
				prev->index, list->index);
	}

	else
		printf("Value found between indexes [%ld] and [%ld]\n",
				prev->index, list->index);

	do {
		if (!prev)
			return (NULL);
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	} while (prev != list);
	return (NULL);
}
