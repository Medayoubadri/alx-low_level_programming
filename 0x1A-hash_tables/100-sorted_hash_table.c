#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* shash_table_create - Creates a sorted hash table.
* @size: The size of the array.
*
* Return: A pointer to the newly created sorted hash table, or NULL.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
* insert_sorted - Inserts a node in the sorted linked list.
* @ht: The hash table.
* @node: The node to insert.
*/
void insert_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}

	temp = ht->shead;
	while (temp && strcmp(node->key, temp->key) > 0)
		temp = temp->snext;

	if (temp == ht->shead)
	{
		node->snext = temp;
		node->sprev = NULL;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else if (temp == NULL)
	{
		node->sprev = ht->stail;
		node->snext = NULL;
		ht->stail->snext = node;
		ht->stail = node;
	}
	else
	{
		node->sprev = temp->sprev;
		node->snext = temp;
		temp->sprev->snext = node;
		temp->sprev = node;
	}
}


/**
 * create_shash_node - Creates a new sorted hash table node.
 * @key: The key to assign to the node.
 * @value: The value to assign to the node.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node;
	char *new_key, *new_value;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_key = strdup(key);
	if (new_key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_key);
		free(new_node);
		return (NULL);
	}

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
* shash_table_set - Adds or updates a key/value pair in the sorted hash table.
* @ht: The hash table.
* @key: The key.
* @value: The value associated with the key.
*
* Return: 1 if successful, 0 otherwise.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	shash_node_t *current_node, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (new_value == NULL)

				return (0);
			free(current_node->value);
			current_node->value = new_value;
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = create_shash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	insert_sorted(ht, new_node);
	return (1);
}

/**
* shash_table_get - Retrieves a value associated with a key.
* @ht: The hash table.
* @key: The key to look for.
*
* Return: The value associated with the key, or NULL if not found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
* shash_table_print - Prints the hash table in sorted order.
* @ht: The sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints the hash table in reverse sorted order.
* @ht: The sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}
	printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: The sorted hash table to delete.
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
