#include "main.h"

/**
 * print_number - prints an integer
 *
 * Description: This function prints an integer using only `_putchar`.
 *              No arrays, pointers, or long variables are used.
 *
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

