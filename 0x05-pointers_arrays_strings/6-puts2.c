#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 * @str: pointer to the string to be printed
 *
 * Description: This function prints every other character of a string,
 *              starting with the first character.
 *              It's like skipping every other step on a staircase!
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
