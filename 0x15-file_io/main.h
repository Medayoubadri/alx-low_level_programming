#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Function prototypes for each ELF header component */
void check_elf(unsigned char *e_ident);
void close_elf(int elf);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/* Function prototypes for main.c */
void read_elf_header(const char *filename, Elf64_Ehdr **header);
void print_elf_header(Elf64_Ehdr *header);

#endif /* MAIN_H */

