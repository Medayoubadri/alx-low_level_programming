#include "main.h"

/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be used from src
 *
 * Description: This function appends at most n bytes from the src string to
 *              the dest string, overwriting the terminating null byte (\0)
 *              at the end of dest, and then adds a terminating null byte.
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest string */
	while (dest[i] != '\0')
		i++;

	/* Append src to dest, at most n bytes */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add terminating null byte */
	dest[i] = '\0';

	return (dest);
}
