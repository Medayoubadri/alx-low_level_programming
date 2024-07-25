#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: This function uses variadic arguments to print anything
 *              based on the specified format. Supported formats: c, i, f, s.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *terminator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", terminator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", terminator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", terminator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", terminator, str);
					break;
				default:
					i++;
					continue;
			}
			terminator = ", ";
			i++;
		}
	}

	va_end(args);
	printf("\n");
}

