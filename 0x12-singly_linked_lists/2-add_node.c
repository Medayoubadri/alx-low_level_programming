#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the list.
 *
 * Return: Address of the new element, or NULL if it failed.
 *
 * Description: Adds a new thought to the head of the list.
 * Because sometimes one shot isn't enough.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	if (str == NULL)
		return (NULL);

	/* Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = new_str;
	new_node->len = strlen(new_str);
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}

