#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size, i;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;

	dup = malloc(size * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	return (dup);
}

