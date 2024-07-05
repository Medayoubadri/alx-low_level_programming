#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be modified
 *
 * Description: This function iterates through a string and capitalizes the
 *              first letter of each word. Words are separated by spaces,
 *              tabs, newlines, commas, semicolons, periods, exclamation marks,
 *              question marks, double quotes, parentheses, curly braces, or
 *              square brackets.
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first character if it is lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	while (str[i] != '\0')
	{
		/* Check for separators and capitalize the next character */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}

	return (str);
}
