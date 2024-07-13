#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to be printed
 *
 * Description: This function prints a string, followed by a new line, to
 *              stdout. It's like broadcasting your message to the world!
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
