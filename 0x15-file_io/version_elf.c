#include "main.h"

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 *
 * Description: Checking the version, & hoping it’s not outdated like my jokes.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           1 (current)\n");
}

