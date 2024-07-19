#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and initialize to zero, zero, zero!
 * @nmemb: number of elements, a.k.a how many?
 * @size: size of each element, because size matters
 *
 * Return: pointer to the allocated memory, or NULL if anything goes wrong
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Let's fill this allocated memory with zeroes, because why not? */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

