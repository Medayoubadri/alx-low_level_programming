#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Description: This program generates random valid passwords for the
 *              101-crackme executable.
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < 2772 - 122)
	{
		c = rand() % 94 + 33;
		sum += c;
		putchar(c);
	}

	putchar(2772 - sum);

	return (0);
}

