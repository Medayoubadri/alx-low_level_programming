#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to be encoded
 *
 * Description: This function encodes a string into 1337. Letters a and A
 *              are replaced by 4, e and E by 3, o and O by 0, t and T by 7,
 *              and l and L by 1.
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
			}
		}
	}

	return (str);
}
