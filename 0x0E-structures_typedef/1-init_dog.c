#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dowg.
 * @age: The age of the dawg.
 * @owner: The dog of the owner.
 *
 * Description: This function initializes the members of a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
