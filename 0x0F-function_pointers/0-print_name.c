#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using the provided function.
 * @name: The name to be printed.
 * @f: Pointer to the function that prints the name.
 *
 * Description: This function takes a name and a function pointer as arguments
 *              and uses the function pointer to print the name.
 *              why not complicate things heiin?
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
