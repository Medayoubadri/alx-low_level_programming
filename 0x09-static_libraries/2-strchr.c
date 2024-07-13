#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Description: This function locates the first occurrence of the character c
 *              in the string s. If c is found, a pointer to the character
 *              is returned. If c is not found, NULL is returned.
 * Return: pointer to the first occurrence of c in s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}

