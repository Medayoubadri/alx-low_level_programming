#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there's an invalid char or b is NULL.
 *
 * Description: Converting binary to decimal, If binary were easy,
 *              we'd call it "barely code" instead of "bit manipulation."
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result << 1; /* Shift left to make space for the new bit */
		if (*b == '1')
			result += 1; /* Add 1 if current char is '1' */
		b++;
	}

	return (result);
}

