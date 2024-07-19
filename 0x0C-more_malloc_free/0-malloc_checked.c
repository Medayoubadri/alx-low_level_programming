#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and makes sure it's all good
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the allocated memory, or exit with status
 * 98 if malloc fails miserably.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

