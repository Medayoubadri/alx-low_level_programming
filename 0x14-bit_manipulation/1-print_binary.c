#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed in binary.
 *
 * Description: This function takes an unsigned long int and prints its
 *              binary representation. No arrays, no malloc, no divisions—
 *              just good ol' bitwise.
 */
void print_binary(unsigned long int n)
{
	int i;
	int leading_zero = 1;
	unsigned long int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
	}
}

