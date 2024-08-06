#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
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
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				break;
			}
		}
	}
	return (count);  /* Loop or not, we’ve seen it all. */
}

