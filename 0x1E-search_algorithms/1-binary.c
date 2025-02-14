#include "search_algos.h"
#include <stdio.h>

/**
* print_array - prints an array of integers
* @array: The array to be printed
* @left: The left index of the array
* @right: The right index of the array
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search - searches for a value in a sorted array binary search
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located, or -1 if not found or array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return ((int)mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
