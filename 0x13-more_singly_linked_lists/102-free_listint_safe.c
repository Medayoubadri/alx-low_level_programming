#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: Erasing all evidence. Carefully traverse the list,
 * free each node, and make sure nothing is left behind.
 * After this, it'll be like the list never existed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;
	const listint_t **visited;
	size_t i;

	if (h == NULL || *h == NULL)
		return (0);

	visited = malloc(1024 * sizeof(listint_t *));
	if (visited == NULL)
		exit(98);

	current = *h;
	while (current != NULL)
	{
		/* Check if the current node has been visited before */
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				*h = NULL;
				free(visited);
				return (count);
			}
		}

		/* Mark the node as visited and free it */
		visited[count] = current;
		count++;
		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL; /* Set head to NULL erasing all evidence */
	free(visited);
	return (count);
}

