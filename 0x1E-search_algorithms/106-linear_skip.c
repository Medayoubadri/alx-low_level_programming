#include "search_algos.h"
#include <stdio.h>

/**
* linear_skip - searches for a value in a sorted skip list of integers
* @list: pointer to the head of the skip list to search in
* @value: value to search for
* Return: pointer to the first node where value is located, or NULL
* if not found or list is NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *current;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		current->express->index, current->express->n);
		current = current->express;
	}

	prev = current;
	if (current->express)
	{
		current = current->express;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}
	else
	{
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
