# 0x04. C - More functions, more nested loops

## Description

This project focuses on using more functions and nested loops to solve various problems. You will further develop your understanding of C programming by working on more complex tasks that build on what you've learned so far.

## Table of Contents

- [Description](#description)
- [Tasks](#tasks)
  - [Task 0: isupper](#task-0-isupper)
  - [Task 1: isdigit](#task-1-isdigit)
  - [Task 2: Collaboration is multiplication](#task-2-collaboration-is-multiplication)
  - [Task 3: The numbers speak for themselves](#task-3-the-numbers-speak-for-themselves)
  - [Task 4: I believe in numbers and signs](#task-4-i-believe-in-numbers-and-signs)
  - [Task 5: Numbers constitute the only universal language](#task-5-numbers-constitute-the-only-universal-language)
  - [Task 6: The shortest distance between two points is a straight line](#task-6-the-shortest-distance-between-two-points-is-a-straight-line)
  - [Task 7: I feel like I am diagonally parked in a parallel universe](#task-7-i-feel-like-i-am-diagonally-parked-in-a-parallel-universe)
  - [Task 8: You are so much sunshine in every square inch](#task-8-you-are-so-much-sunshine-in-every-square-inch)
  - [Task 9: Fizz-Buzz](#task-9-fizz-buzz)
  - [Task 10: Triangles](#task-10-triangles)
  - [Task 11: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081](#task-11-the-prime-factors-of-1231952-are-2-2-2-2-37-and-2081)
  - [Task 12: Write a function that prints an integer](#task-12-write-a-function-that-prints-an-integer)

## Tasks

### Task 0: isupper

**Objective:** Write a function that checks for uppercase character.

- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase, `0` otherwise.

### Task 1: isdigit

**Objective:** Write a function that checks for a digit (`0` through `9`).

- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit, `0` otherwise.

### Task 2: Collaboration is multiplication

**Objective:** Write a function that multiplies two integers.

- Prototype: `int mul(int a, int b);`

### Task 3: The numbers speak for themselves

**Objective:** Write a function that prints the numbers, from `0` to `9`, followed by a new line.

- Prototype: `void print_numbers(void);`
- Use `_putchar` function to print characters.

### Task 4: I believe in numbers and signs

**Objective:** Write a function that prints the numbers, from `0` to `9`, followed by a new line, but do not print `2` and `4`.

- Prototype: `void print_most_numbers(void);`
- Use `_putchar` function to print characters.

### Task 5: Numbers constitute the only universal language

**Objective:** Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

- Prototype: `void more_numbers(void);`
- Use `_putchar` function to print characters.

### Task 6: The shortest distance between two points is a straight line

**Objective:** Write a function that draws a straight line in the terminal.

- Prototype: `void print_line(int n);`
- Use `_putchar` function to print characters.

### Task 7: I feel like I am diagonally parked in a parallel universe

**Objective:** Write a function that draws a diagonal line on the terminal.

- Prototype: `void print_diagonal(int n);`
- Use `_putchar` function to print characters.

### Task 8: You are so much sunshine in every square inch

**Objective:** Write a function that prints a square, followed by a new line.

- Prototype: `void print_square(int size);`
- Use `_putchar` function to print characters.

### Task 9: Fizz-Buzz

**Objective:** Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

- Prototype: `int main(void);`
- Each number or word should be separated by a space.

### Task 10: Triangles

**Objective:** Write a function that prints a triangle, followed by a new line.

- Prototype: `void print_triangle(int size);`
- Use `_putchar` function to print characters.

### Task 11: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081

**Objective:** Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

- You are allowed to use the standard library.
- Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor`

### Task 12: Write a function that prints an integer

**Objective:** Write a function that prints an integer.

- Prototype: `void print_number(int n);`
- You can only use `_putchar` function to print.
- You are not allowed to use `long`.
- You are not allowed to use arrays or pointers.
- You are not allowed to hard-code special values.
