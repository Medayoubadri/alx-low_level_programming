#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
* min - returns the minimum of two size_t values
* @a: first value
* @b: second value
* Return: minimum of a and b
*/
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}


/**
* jump_search - searches for a value using Jump search
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located, or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	step = prev - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, prev);

	prev = min(prev, size - 1);

	for (i = step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
