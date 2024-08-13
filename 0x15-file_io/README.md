# Project: 0x15. C - File I/O

## Description

This project delves into file input/output (I/O) operations in C. You'll learn how to work with file descriptors, read and write to files, handle errors, and more. These are essential skills for managing file data and understanding how operating systems interact with files.

## Table of Contents

- Requirements
- Tasks
  - Task 0: Tread lightly, she is near
  - Task 1: Under the snow
  - Task 2: Speak gently, she can hear
  - Task 3: cp
  - Task 4: elf

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any other use of functions like `printf`, `puts`, etc. is forbidden
- You are allowed to use `_putchar`
- The prototypes of all your functions should be included in your header file called `main.h`
- All your header files should be include guarded

## Tasks

### Task 0: Tread lightly, she is near

- **File:** `0-read_textfile.c`
- **Prototype:** `ssize_t read_textfile(const char *filename, size_t letters);`
- **Description:** Reads a text file and prints it to the POSIX standard output.

### Task 1: Under the snow

- **File:** `1-create_file.c`
- **Prototype:** `int create_file(const char *filename, char *text_content);`
- **Description:** Creates a file with given permissions and writes text content to it.

### Task 2: Speak gently, she can hear

- **File:** `2-append_text_to_file.c`
- **Prototype:** `int append_text_to_file(const char *filename, char *text_content);`
- **Description:** Appends text at the end of a file.

### Task 3: cp

- **File:** `3-cp.c`
- **Description:** Copies the content of one file to another. Exits with specific codes on error.

### Task 4: elf

- **File:** `4-elf_header.c`
- **Description:** Displays the information contained in the ELF header at the start of an ELF file.

---
Why do programmers prefer dark mode? Because the light attracts too many bugs!
