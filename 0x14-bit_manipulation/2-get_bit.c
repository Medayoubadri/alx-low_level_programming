#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit, starting from 0.
 *
 * Return: The value of the bit at index `index` (0 or 1),
 *         or -1 if an error occurs (e.g., index out of bounds).
 *
 * Description: Ever wonder if that one bit is doing its job? Well, This
 *              function lets you pluck out that bit like it's the last
 *              cookie in the jar, unless it's out of reach—then it's -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

