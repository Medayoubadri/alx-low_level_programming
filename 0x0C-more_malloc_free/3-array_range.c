#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max, this sounds
 * like doing chors to me ( – _ – ')
 * @min: the minimum integer value in the array, bcz every story needs a start
 * @max: the maximum integer value in the array, bcz every story needs an end?
 *
 * Return: pointer to the newly created array, or NULL if it fails spectacularly
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

