#include "search_algos.h"
#include <stdio.h>

/**
* binary_search_exp - binary search for exponential search
* @array: pointer to the first element of the array to search in
* @left: left index of the subarray
* @right: right index of the subarray
* @value: value to search for
* Return: index where value is located, or -1 if not found
*/
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	return (-1);
}

/**
* exponential_search - searches for a value in a sorted array of integers
* using Exponential search
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located, or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	if (bound >= size)
		bound = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);

	return (binary_search_exp(array, prev, bound, value));
}
