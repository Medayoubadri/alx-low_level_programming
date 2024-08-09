#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little endian, 0 if big endian.
 *
 * Description: Checking if your system prefers to read numbers the wrong way
 *              around—because even computers can have terrible habits.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *byte = (char *)&test;

	return (*byte);
}

