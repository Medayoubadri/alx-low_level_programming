# 0x06. C - More pointers, arrays, and strings

## Description

This project builds on your knowledge of pointers, arrays, and strings in C programming. You will further develop your skills by working on more advanced tasks involving these data structures.

## Table of Contents

- [Description](#description)
- [Table of Contents](#table-of-contents)
- [Tasks](#tasks)
  - [Task 0: strcat](#task-0-strcat)
  - [Task 1: strncat](#task-1-strncat)
  - [Task 2: strncpy](#task-2-strncpy)
  - [Task 3: strcmp](#task-3-strcmp)
  - [Task 4: I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](#task-4-i-am-a-kind-of-paranoid-in-reverse-i-suspect-people-of-plotting-to-make-me-happy)
  - [Task 5: Always look up](#task-5-always-look-up)
  - [Task 6: Expect the best. Prepare for the worst. Capitalize on what comes](#task-6-expect-the-best-prepare-for-the-worst-capitalize-on-what-comes)
  - [Task 7: Mozart composed his music not for the elite, but for everybody](#task-7-mozart-composed-his-music-not-for-the-elite-but-for-everybody)
  - [Task 8: rot13](#task-8-rot13)
  - [Task 9: Numbers have life; they're not just symbols on paper](#task-9-numbers-have-life-theyre-not-just-symbols-on-paper)
  - [Task 10: A dream doesn't become reality through magic; it takes sweat, determination and hard work](#task-10-a-dream-doesnt-become-reality-through-magic-it-takes-sweat-determination-and-hard-work)
  - [Task 11: It is the addition of strangeness to beauty that constitutes the romantic character in art](#task-11-it-is-the-addition-of-strangeness-to-beauty-that-constitutes-the-romantic-character-in-art)
  - [Task 12: Noise is a buffer, more effective than cubicles or booth walls](#task-12-noise-is-a-buffer-more-effective-than-cubicles-or-booth-walls)

## Tasks

### Task 0: strcat

**Objective:** Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`

### Task 1: strncat

**Objective:** Write a function that concatenates two strings with at most `n` bytes from `src`.

- Prototype: `char *_strncat(char *dest, char *src, int n);`

### Task 2: strncpy

**Objective:** Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n);`

### Task 3: strcmp

**Objective:** Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2);`

### Task 4: I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

**Objective:** Write a function that reverses the content of an array of integers.

- Prototype: `void reverse_array(int *a, int n);`

### Task 5: Always look up

**Objective:** Write a function that changes all lowercase letters of a string to uppercase.

- Prototype: `char *string_toupper(char *);`

### Task 6: Expect the best. Prepare for the worst. Capitalize on what comes

**Objective:** Write a function that capitalizes all words of a string.

- Prototype: `char *cap_string(char *);`

### Task 7: Mozart composed his music not for the elite, but for everybody

**Objective:** Write a function that encodes a string into `1337`.

- Prototype: `char *leet(char *);`

### Task 8: rot13

**Objective:** Write a function that encodes a string using `rot13`.

- Prototype: `char *rot13(char *);`
- Constraints:
  - You can only use `if` statement once in your code.
  - You can only use two loops in your code.
  - You are not allowed to use `switch`.
  - You are not allowed to use any ternary operation.

### Task 9: Numbers have life; they're not just symbols on paper

**Objective:** Write a function that prints an integer.

- Prototype: `void print_number(int n);`
- Constraints:
  - You can only use `_putchar` function to print.
  - You are not allowed to use `long`.
  - You are not allowed to use arrays or pointers.
  - You are not allowed to hard-code special values.

### Task 10: A dream doesn't become reality through magic; it takes sweat, determination and hard work

**Objective:** Add one line to the code to print `a[2] = 98`, followed by a new line.

- You are not allowed to use `a`.
- You are not allowed to modify `p`.
- Only one statement.
- You are not allowed to code anything else than this line of code.

### Task 11: It is the addition of strangeness to beauty that constitutes the romantic character in art

**Objective:** Write a function that adds two numbers.

- Prototype: `char *infinite_add(char *n1, char *n2, char *r, int size_r);`
- Constraints:
  - The result must be stored in `r`.
  - If the result cannot be stored in `r`, the function must return `0`.

### Task 12: Noise is a buffer, more effective than cubicles or booth walls

**Objective:** Write a function that prints a buffer.

- Prototype: `void print_buffer(char *b, int size);`
- The function must print the content of `size` bytes of the buffer pointed by `b`.
- Output:
  - Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0.
  - Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
  - Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print `.`.
  - Each line ends with a new line `\n`.
  - If `size` is 0 or less, the output should be a new line only `\n`.

---

