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
* advanced_binary_recursive - recursive implementation of binary search
* @array: pointer to the first element of the array to search in
* @left: left index of the subarray
* @right: right index of the subarray
* @value: value to search for
* Return: index where value is located, or -1 if not found
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] < value)
			return (mid);
		return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid - 1, value));
}

/**
* advanced_binary - searches for a value in a sorted array of integers
* using Advanced binary search
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located, or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
