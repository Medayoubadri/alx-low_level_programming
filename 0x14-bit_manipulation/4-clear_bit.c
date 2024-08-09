#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number where the bit should be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 * Description: Flipped this bit to zero, unlike your attention span which is
 *              perpetually on ‘off’. At least one of us is doing their job.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

