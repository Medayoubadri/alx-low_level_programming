#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 *
 * Description: This function uses nested loops to print numbers from 0 to 14,
 *              ten times, each followed by a new line. It's like a counting
 *              marathon, but way more fun!
 *
 * Return: from 0 to 14, 10 times, followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
