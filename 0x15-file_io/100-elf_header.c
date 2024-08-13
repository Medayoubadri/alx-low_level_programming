#include "main.h"
#include "magic_elf.c"
#include "class_elf.c"
#include "data_elf.c"
#include "check-close_elf.c"
#include "version_elf.c"
#include "osabi_elf.c"
#include "abiversion_elf.c"
#include "type_elf.c"
#include "entry_elf.c"

void read_elf_header(const char *filename, Elf64_Ehdr **header);
void print_elf_header(Elf64_Ehdr *header);

/**
 * main - Entry point to the program, displays ELF header information.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, exits with code 98 on error.
 *
 * Description: This function serves as the main control flow for the program.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	read_elf_header(argv[1], &header);
	print_elf_header(header);

	free(header);
	return (0);
}

/**
 * read_elf_header - Reads the ELF header from a file.
 * @filename: The name of the ELF file.
 * @header: Double pointer to store the ELF header.
 *
 * Description: This function handles file opening, reading, and validation.
 */
void read_elf_header(const char *filename, Elf64_Ehdr **header)
{
	int o, r;

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
		exit(98);
	}

	*header = malloc(sizeof(Elf64_Ehdr));
	if (*header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
		exit(98);
	}

	r = read(o, *header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(*header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", filename);
		exit(98);
	}

	check_elf((*header)->e_ident);
	close_elf(o);
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: Pointer to the ELF header structure.
 *
 * Description: This function prints the information
 *              contained in the ELF header.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abiversion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
}

