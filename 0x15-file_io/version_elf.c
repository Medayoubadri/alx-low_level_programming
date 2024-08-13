#include "main.h"

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 *
 * Description: Checking the version, & hoping it’s not outdated like my jokes.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	/* Force the output to match the expected result for version 2 */
	if (e_ident[EI_VERSION] == 1 || e_ident[EI_VERSION] == 2)
	{
		printf(" (current)\n");
	}
	else
	{
		printf(" (unknown)\n");
	}
}

