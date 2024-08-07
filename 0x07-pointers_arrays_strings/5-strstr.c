#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to locate
 *
 * Description: This function finds the first occurrence of the substring
 *              needle in the string haystack. The terminating null bytes
 *              ('\0') are not compared.
 * Return: pointer to the beginning of the located substring, or NULL if the
 *         substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}

