#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the listint_t list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: Count the nodes one by one..
 * "One node, ah ah ah! Two nodes, ah ah ah!"
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;  /* Ah ah ah! */
		h = h->next;
	}

	return (count);
}

