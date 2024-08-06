#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: Double pointer to the head of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 *
 * Description: Accio data! Summon the head node’s value,
 * then let the list carry on its magical journey.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
