# 0x05. C - Pointers, arrays, and strings

## Description

This project focuses on understanding pointers, arrays, and strings in C programming. You will learn how to manipulate these data structures and use them effectively in your programs.

## Table of Contents

- [Description](#description)
- [Table of Contents](#table-of-contents)
- [Tasks](#tasks)
  - [Task 0: 98 Battery st.](#task-0-98-battery-st)
  - [Task 1: Don't swap horses in crossing a stream](#task-1-dont-swap-horses-in-crossing-a-stream)
  - [Task 2: This report, by its very length, defends itself against the risk of being read](#task-2-this-report-by-its-very-length-defends-itself-against-the-risk-of-being-read)
  - [Task 3: I do not fear computers. I fear the lack of them](#task-3-i-do-not-fear-computers-i-fear-the-lack-of-them)
  - [Task 4: I can only go one way. I've not got a reverse gear](#task-4-i-can-only-go-one-way-ive-not-got-a-reverse-gear)
  - [Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](#task-5-a-good-engineer-thinks-in-reverse-and-asks-himself-about-the-stylistic-consequences-of-the-components-and-systems-he-proposes)
  - [Task 6: Half the lies they tell about me aren't true](#task-6-half-the-lies-they-tell-about-me-arent-true)
  - [Task 7: Winning is only half of it. Having fun is the other half](#task-7-winning-is-only-half-of-it-having-fun-is-the-other-half)
  - [Task 8: Arrays are not pointers](#task-8-arrays-are-not-pointers)
  - [Task 9: strcpy](#task-9-strcpy)
  - [Task 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](#task-10-great-leaders-are-willing-to-sacrifice-the-numbers-to-save-the-people-poor-leaders-sacrifice-the-people-to-save-the-numbers)
  - [Task 11: Don't hate the hacker, hate the code](#task-11-dont-hate-the-hacker-hate-the-code)

## Tasks

### Task 0: 98 Battery st.

**Objective:** Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

- Prototype: `void reset_to_98(int *n);`

### Task 1: Don't swap horses in crossing a stream

**Objective:** Write a function that swaps the values of two integers.

- Prototype: `void swap_int(int *a, int *b);`

### Task 2: This report, by its very length, defends itself against the risk of being read

**Objective:** Write a function that returns the length of a string.

- Prototype: `int _strlen(char *s);`

### Task 3: I do not fear computers. I fear the lack of them

**Objective:** Write a function that prints a string, followed by a new line, to stdout.

- Prototype: `void _puts(char *str);`

### Task 4: I can only go one way. I've not got a reverse gear

**Objective:** Write a function that prints a string, in reverse, followed by a new line.

- Prototype: `void print_rev(char *s);`

### Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

**Objective:** Write a function that reverses a string.

- Prototype: `void rev_string(char *s);`

### Task 6: Half the lies they tell about me aren't true

**Objective:** Write a function that prints every other character of a string, starting with the first character, followed by a new line.

- Prototype: `void puts2(char *str);`

### Task 7: Winning is only half of it. Having fun is the other half

**Objective:** Write a function that prints half of a string, followed by a new line.

- Prototype: `void puts_half(char *str);`

### Task 8: Arrays are not pointers

**Objective:** Write a function that prints `n` elements of an array of integers, followed by a new line.

- Prototype: `void print_array(int *a, int n);`

### Task 9: strcpy

**Objective:** Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

- Prototype: `char *_strcpy(char *dest, char *src);`

### Task 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

**Objective:** Write a function that converts a string to an integer.

- Prototype: `int _atoi(char *s);`

### Task 11: Don't hate the hacker, hate the code

**Objective:** Create a program that generates random valid passwords for the program `101-crackme`.
