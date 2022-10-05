#include "search_algos.h"
#include <stdio.h>


/**
 * binary_search - implementation of binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lo, high, i, mid;

	if (!array)
		return (-1);
	lo = 0;
	high = size - 1;
	while (lo <= high)
	{
		printf("Searching in array:");
		for (i = lo; i <= high; i++)
		{
			if (i == high)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		mid = (lo + high) / 2;
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			lo = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
