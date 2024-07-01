#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: This function prints a string in reverse order, followed by
 *              a new line. It's like looking at the world through a mirror!
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len--)
		_putchar(s[len]);

	_putchar('\n');
}

