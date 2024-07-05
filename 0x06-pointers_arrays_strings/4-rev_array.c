#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 *
 * Description: This function reverses the content of an array of integers
 *              in place.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
