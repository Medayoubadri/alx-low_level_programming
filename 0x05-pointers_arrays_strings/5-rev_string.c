#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Description: This function reverses a string in place. It's like doing
 *              a 180-degree turn on a road trip!
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[len])
		len++;

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
