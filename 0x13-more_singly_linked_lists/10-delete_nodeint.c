#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node of a linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node that should be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 *
 * Description: The first rule of deleting a node is: you do not talk
 * about deleting the node. The second rule is: you DO NOT talk about
 * deleting the node. We just quietly remove it and move on.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);  /* The job is done, but we don't discuss it. */
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);  /* Remember, no talking about it. */
}

