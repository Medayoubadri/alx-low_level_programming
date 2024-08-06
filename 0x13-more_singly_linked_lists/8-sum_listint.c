#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n), or 0 if the list is empty.
 *
 * Description: Adding up all the pieces of the list’s soul.
 * In the end, it's just a number... isn’t it?
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);  /* The sum of all its parts... */
}


