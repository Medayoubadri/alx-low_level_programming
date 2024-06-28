#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Description: This function draws a straight line using the underscore
 *              character ('_'). It's like drawing a line in the sand, but
 *              cooler because it's in C.
 *
 * @n: number of times the character '_' should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
