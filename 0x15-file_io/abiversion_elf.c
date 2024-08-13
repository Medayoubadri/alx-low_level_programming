#include "main.h"

/**
 * print_abiversion - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 *
 * Description: Print the ABI version without making a fuss.
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

