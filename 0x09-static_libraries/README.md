# Project: 0x09. C - Static Libraries

## Description

This project focuses on understanding and creating static libraries in C. Static libraries are collections of object files that are linked into programs at compile time, which can be reused across multiple programs to save space and increase modularity. This project covers creating and using static libraries, and writing scripts to automate the creation process.

## Table of Contents

- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: A library is not a luxury but one of the necessities of life](#task-0-a-library-is-not-a-luxury-but-one-of-the-necessities-of-life)
  - [Task 1: Without libraries what have we? We have no past and no future](#task-1-without-libraries-what-have-we-we-have-no-past-and-no-future)

## Tasks

### Task 0: A library is not a luxury but one of the necessities of life

Create the static library `libmy.a` containing all the functions listed below:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

**Steps**:
1. Compile each `.c` file into an object file.
2. Create the static library `libmy.a` from the object files.
3. Create a `main.h` file with all the function prototypes.
4. Verify the library with a test program.
5. Commit and push the changes to GitHub.

### Task 1: Without libraries what have we? We have no past and no future

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory.

**Steps**:
1. Write the script `create_static_lib.sh`.
2. Make the script executable.
3. Run the script to create `liball.a`.
4. Verify the static library.
5. Commit and push the changes to GitHub.
