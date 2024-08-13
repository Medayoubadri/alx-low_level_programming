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

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	case 2:
		printf(" (non-standard: modified for testing)\n");
		break;
	default:
		printf(" (unknown version)\n");
		break;
	}
}

