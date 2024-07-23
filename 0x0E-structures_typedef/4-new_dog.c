#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function creates a new dog and stores a copy of
 * the name and owner. Returns NULL if the function fails.
 * Every dog deserves a fresh start, don't they?
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *thedog;
	char *new_name, *new_owner;

	thedog = malloc(sizeof(dog_t));
	if (thedog == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(thedog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(thedog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	thedog->name = new_name;
	thedog->age = age;
	thedog->owner = new_owner;

	return (thedog);
}

