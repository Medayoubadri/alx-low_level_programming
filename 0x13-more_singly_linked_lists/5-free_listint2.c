#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Description: Zapping the list out of memory with the neuralyzer |^|
 *                                                                 |_|
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;  /* Memory erased, nothing to see here! */
}

