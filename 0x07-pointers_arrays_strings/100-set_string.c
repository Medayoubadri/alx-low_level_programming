#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to be set
 * @to: char pointer to set
 *
 * Description: This function sets the value of a double pointer to a char pointer.
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
