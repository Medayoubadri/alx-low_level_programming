#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * Description: This function prints a square using the hash character ('#').
 *              It's like a mini building block in C. Let's build some cool
 *              squares!
 *
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
