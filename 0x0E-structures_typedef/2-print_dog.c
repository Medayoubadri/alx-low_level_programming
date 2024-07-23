#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 *
 * Description: This function prints the details of a dog.
 * except chihuahuas those are PURE EVIL.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

