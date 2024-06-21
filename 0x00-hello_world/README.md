# 0x00. C - Hello, World

This repository contains programs written in C as part of the ALX Low Level Programming curriculum. The tasks focus on understanding the basics of C programming, including compiling, linking, and working with the C standard library.

## Table of Contents

1. [0-preprocessor](#0-preprocessor)
2. [1-compiler](#1-compiler)
3. [2-assembler](#2-assembler)
4. [3-name](#3-name)
5. [4-puts.c](#4-puts.c)
6. [5-printf.c](#5-printf.c)
7. [6-size.c](#6-size.c)
8. [100-intel](#100-intel)
9. [101-quote.c](#101-quote.c)

## Task Descriptions

### 0-preprocessor

- **File:** `0-preprocessor`
- **Description:** A script that runs a C file through the preprocessor and saves the result into another file. The C file name is saved in the variable `$CFILE`. The output is saved in the file `c`.

### 1-compiler

- **File:** `1-compiler`
- **Description:** A script that compiles a C file but does not link. The C file name is saved in the variable `$CFILE`. The output file is named the same as the C file, but with the extension `.o` instead of `.c`.

### 2-assembler

- **File:** `2-assembler`
- **Description:** A script that generates the assembly code of a C code and saves it in an output file. The C file name is saved in the variable `$CFILE`. The output file is named the same as the C file, but with the extension `.s` instead of `.c`.

### 3-name

- **File:** `3-name`
- **Description:** A script that compiles a C file and creates an executable named `cisfun`. The C file name is saved in the variable `$CFILE`.

### 4-puts.c

- **File:** `4-puts.c`
- **Description:** A C program that prints exactly "Programming is like building a multilingual puzzle", followed by a new line. The program uses the function `puts` and returns `0`.

### 5-printf.c

- **File:** `5-printf.c`
- **Description:** A C program that prints exactly "with proper grammar, but the outcome is a piece of art,", followed by a new line. The program uses the function `printf` and returns `0`. The program should compile without warnings when using the `-Wall` gcc option.

### 6-size.c

- **File:** `6-size.c`
- **Description:** A C program that prints the size of various types on the computer it is compiled and run on. The program returns `0`.

### 100-intel

- **File:** `100-intel`
- **Description:** A script that generates the assembly code (Intel syntax) of a C code and saves it in an output file. The C file name is saved in the variable `$CFILE`. The output file is named the same as the C file, but with the extension `.s` instead of `.c`.

### 101-quote.c

- **File:** `101-quote.c`
- **Description:** A C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error. The program does not use any functions listed in the NAME section of the `man (3) printf` or `man (3) puts`. The program returns `1` and should compile without any warnings when using the `-Wall` gcc option.

