#include "search_algos.h"
#include <stdio.h>
int bin_sch(int *array, int value, int high, int lo);

/**
 * min - finds minimum btw two values
 * @bound: bound
 * @size: size
 * Return: minimum
 */

int min(int bound, int size)
{
	if (bound < size)
		return (bound);
	return (size);
}

/**
 * exponential_search - implements exponential search algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index to which value was found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev;

	do {
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	} while (array[bound] < value && bound < size);

	printf("Value found between indexes [%ld] and [%d]\n",
			prev, min(bound, size - 1));
	return (bin_sch(array, value, min(bound, size - 1), bound / 2));
}

/**
 * bin_sch - implementation of binary search
 * @array: array to search
 * @high: high bound of where to search
 * @lo: lower bound of where to search
 * @value: value to search
 * Return: index where value is located
 */

int bin_sch(int *array, int value, int high, int lo)
{
	int i, mid;

	if (!array)
		return (-1);
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
