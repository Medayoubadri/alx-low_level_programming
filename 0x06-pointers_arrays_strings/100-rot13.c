#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to the string to be encoded
 *
 * Description: This function encodes a string using rot13, a simple
 *              substitution cipher that replaces a letter
 *              with the letter 13 letters after it in the alphabet.
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
