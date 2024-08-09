#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from
 *             one number to another.
 * @n: The original number.
 * @m: The target number.
 *
 * Return: The number of bits that need to be flipped.
 *
 * Description: Counting bits that need flipping—just like counting
 *              how many times you’ve already screwed up today...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}

