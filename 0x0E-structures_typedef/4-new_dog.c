#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * thedawg - Creates a new dag.
 * @name: The name of the dowg.
 * @age: The age of the dawg.
 * @owner: The dog of the owner.
 *
 * Return: A pointer to the new dog_t, or NULL if it fails.
 * Description: This function creates a new dog and stores copies of the name and owner.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *thedawg;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	if (!name || !owner)
		return (NULL);

	thedawg = malloc(sizeof(dog_t));
	if (!thedawg)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	name_copy = malloc(name_len + 1);
	if (!name_copy)
	{
		free(thedawg);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];

	owner_copy = malloc(owner_len + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(thedawg);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	thedawg->name = name_copy;
	thedawg->age = age;
	thedawg->owner = owner_copy;

	return (thedawg);
}
