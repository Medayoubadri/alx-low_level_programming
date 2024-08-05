#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 *
 * Description: A new character emerges at the front of our story,
 * like a Jedi joining the fight at the beginning of a new Star Wars episode.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

