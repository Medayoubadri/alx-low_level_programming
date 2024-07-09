# Project: 0x07. C - Even More Pointers, Arrays, and Strings

## Description

This project focuses on advanced concepts in C involving pointers, arrays, and strings. It covers various string manipulation functions, multidimensional arrays, and complex memory management techniques.

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: memset](#task-0-memset)
  - [Task 1: memcpy](#task-1-memcpy)
  - [Task 2: strchr](#task-2-strchr)
  - [Task 3: strspn](#task-3-strspn)
  - [Task 4: strpbrk](#task-4-strpbrk)
  - [Task 5: strstr](#task-5-strstr)
  - [Task 6: Chess is mental torture](#task-6-chess-is-mental-torture)
  - [Task 7: The line of life is a ragged diagonal between duty and desire](#task-7-the-line-of-life-is-a-ragged-diagonal-between-duty-and-desire)
  - [Task 8: Double pointer, double fun](#task-8-double-pointer-double-fun)
  - [Task 9: My primary goal of hacking was the intellectual curiosity, the seduction of adventure](#task-9-my-primary-goal-of-hacking-was-the-intellectual-curiosity-the-seduction-of-adventure)

## Learning Objectives

- Understand and manipulate pointers and arrays.
- Work with multidimensional arrays.
- Implement various string manipulation functions.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- Code must follow the Betty style.
- No more than 5 functions per file.
- Global variables are not allowed.
- The standard library is allowed.

## Tasks

### Task 0: memset

Write a function that fills memory with a constant byte.

- Prototype: `char *_memset(char *s, char b, unsigned int n);`

### Task 1: memcpy

Write a function that copies memory area.

- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`

### Task 2: strchr

Write a function that locates a character in a string.

- Prototype: `char *_strchr(char *s, char c);`

### Task 3: strspn

Write a function that gets the length of a prefix substring.

- Prototype: `unsigned int _strspn(char *s, char *accept);`

### Task 4: strpbrk

Write a function that searches a string for any of a set of bytes.

- Prototype: `char *_strpbrk(char *s, char *accept);`

### Task 5: strstr

Write a function that locates a substring.

- Prototype: `char *_strstr(char *haystack, char *needle);`

### Task 6: Chess is mental torture

Write a function that prints the chessboard.

- Prototype: `void print_chessboard(char (*a)[8]);`

### Task 7: The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

- Prototype: `void print_diagsums(int *a, int size);`

### Task 8: Double pointer, double fun

Write a function that sets the value of a pointer to a char.

- Prototype: `void set_string(char **s, char *to);`

### Task 9: My primary goal of hacking was the intellectual curiosity, the seduction of adventure

Create a file that contains the password for the `crackme2` executable.

- Use `ltrace` to analyze the executable. `ltrace ./crackme2`
- Set the `jennieandjayloveasm` environment variable. `export jennieandjayloveasm=cool`
- Run the `ltrace` again. `ltrace ./crackme2`
- Decrypt the MD5 hash to find the password. `https://hashes.com/en/decrypt/hash`
- Create `101-crackme_password` with the password.

