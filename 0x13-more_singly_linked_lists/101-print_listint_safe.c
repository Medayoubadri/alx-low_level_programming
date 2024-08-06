#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * print_listint_safe - Safely prints a listint_t linked list, even with loops.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: Just a casual stroll through the list—unless it loops,
 * in which case we’ll just tip our hats, print the node, and move on.
 * If things go south, well, that's status 98 for you.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t **visited;
	size_t count = 0, i;

	visited = malloc(1024 * sizeof(listint_t *));
	if (visited == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		/* Check if the current node has been visited before */
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(visited);
				return (count);
			}
		}

		/* Print current node and add it to visited nodes */
		printf("[%p] %d\n", (void *)current, current->n);
		visited[count] = current;
		count++;
		current = current->next;
	}

	free(visited);
	return (count);
}

