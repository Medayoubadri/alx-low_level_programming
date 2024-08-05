#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the listint_t list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: Investigating each node like Sherlock Holmes
 * on a case. Deduce the number of nodes while printing out
 * each element—elementary, my dear Watson!
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);  /* Another clue uncovered! */
		h = h->next;
		count++;
	}

	return (count);
}

