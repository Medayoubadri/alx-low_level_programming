#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed from the buffer
 *
 * Description: This function prints the content of a buffer in a specific
 *              format. The output should display 10 bytes per line, with
 *              the position of the first byte of the line in hexadecimal
 *              (starting with 0), followed by the hexadecimal content of
 *              the buffer, 2 bytes at a time, separated by a space, and
 *              the content of the buffer in printable characters.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];
			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
	}
}
