#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to use.
 *
 * Description: This function takes an array, its size, and a function
 *              pointer as arguments.
 *              It executes the function on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
