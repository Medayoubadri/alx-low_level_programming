#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Description: This program calculates the largest prime factor of the
 *              number 612852475143 without using the math library.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	long factor;

	for (factor = 2; factor <= num; factor++)
	{
		while (num % factor == 0)
		{
			num /= factor;
		}
	}

	printf("%ld\n", factor - 1);

	return (0);
}
