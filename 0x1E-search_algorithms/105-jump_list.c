#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
* jump_list - searches for a value in a sorted list of integers
* using the Jump search algorithm
* @list: pointer to the head of the list to search in
* @size: number of nodes in list
* @value: value to search for
* Return: pointer to the first node where value is located, or NULL
* if not found or list is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *prev, *current;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = current = list;

	while (current->index + 1 < size && current->n < value)
	{
		prev = current;
		step_size = step;
		while (step_size > 0 && current->next != NULL)
		{
			current = current->next;
			step_size--;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);

	while (prev->index <= current->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		if (prev == NULL)
			break;
	}

	return (NULL);
}
