#include <stdlib.h>

/**
 * count_words - count the number of words in a string. Easy peasy.
 * @str: string to evaluate
 *
 * Return: number of wurds
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		if (i == 0 || str[i - 1] == ' ')
			count++;
	}
	return (count);
}

/**
 * strtow - splits a string into words because why not
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 *         or NULL if it fails miserably
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < count; i++)
	{
		while (str[k] == ' ')
			k++;
		for (len = 0; str[k + len] && str[k + len] != ' '; len++)
			;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[k + j];
		words[i][j] = '\0';
		k += len + 1;
	}
	words[i] = NULL;

	return (words);
}

