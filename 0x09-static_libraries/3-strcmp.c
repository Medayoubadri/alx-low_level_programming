#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: This function compares two strings character by character.
 *              It returns an integer less than, equal to, or greater than
 *              zero if s1 is found, respectively, to be less than, to match,
 *              or be greater than s2.
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
