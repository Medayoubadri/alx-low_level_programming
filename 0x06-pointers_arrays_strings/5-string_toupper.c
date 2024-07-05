#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to be modified
 *
 * Description: This function iterates through a string and converts all
 *              lowercase letters to uppercase.
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
