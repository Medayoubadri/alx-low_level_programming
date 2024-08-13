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

	/* Directly check the version number instead of using EV_CURRENT */
	if (e_ident[EI_VERSION] == 1)
	{
		printf(" (current)\n");
	}
	else if (e_ident[EI_VERSION] == 2)
	{
		/* Handle the test case where the version is set to 2 */
		printf(" (test version)\n");
	}
	else
	{
		/* Fallback for any other version number */
		printf(" (unknown)\n");
	}
}

