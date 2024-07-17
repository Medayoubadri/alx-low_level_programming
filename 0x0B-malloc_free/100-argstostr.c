#include <stdlib.h>

/**
 * argstostr - turns all the arguments into one massive string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string, or NULL if it fails miserably
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}

