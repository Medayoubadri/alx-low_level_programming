#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Who let the dogs out!!!!
 * @d: The dog to be freed.
 *
 * Description: This function frees the memory allocated for a dog.
 *              RUN DAWG RUUUNN!
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

