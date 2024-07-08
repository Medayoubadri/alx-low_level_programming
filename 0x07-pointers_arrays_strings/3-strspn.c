#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to include
 *
 * Description: This function calculates the length (in bytes) of the initial
 *              segment of s which consists only of bytes from accept.
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}

	return (length);
}



