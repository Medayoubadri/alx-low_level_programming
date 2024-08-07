# Project: 0x12. C - Singly Linked Lists

## Description
This project delves into the essential concepts of singly linked lists in C. You’ll learn how to create, traverse, and manipulate these lists through a series of tasks that build on each other. We’ll even dip our toes into the world of assembly language for a special finale!

## Table of Contents
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: Print List](#task-0-print-list)
  - [Task 1: List Length](#task-1-list-length)
  - [Task 2: Add Node](#task-2-add-node)
  - [Task 3: Add Node at the End](#task-3-add-node-at-the-end)
  - [Task 4: Free List](#task-4-free-list)
  - [Task 5: The Hare and the Tortoise](#task-5-the-hare-and-the-tortoise)
  - [Task 6: Real Programmers Can Write Assembly Code in Any Language](#task-6-real-programmers-can-write-assembly-code-in-any-language)

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks

### Task 0: Print List
**File:** `0-print_list.c`

Write a function that prints all the elements of a `list_t` list. This function should return the number of nodes and handle `NULL` strings gracefully. It's like printing out a to-do list, but this time, in C!

### Task 1: List Length
**File:** `1-list_len.c`

Write a function that returns the number of elements in a linked `list_t` list. Think of it as counting how many things you still have left on that to-do list—let’s hope it’s not over 9000!

### Task 2: Add Node
**File:** `2-add_node.c`

Write a function that adds a new node at the beginning of a `list_t` list. This function duplicates the string and puts it at the front of the line, like giving someone a VIP pass.

### Task 3: Add Node at the End
**File:** `3-add_node_end.c`

Write a function that adds a new node at the end of a `list_t` list. Imagine you’re adding the cherry on top of a sundae—this node goes at the very end of the list!

### Task 4: Free List
**File:** `4-free_list.c`

Write a function that frees a `list_t` list. Just like letting go of old junk you no longer need, this function frees up memory by saying goodbye to each node.

### Task 5: The Hare and the Tortoise
**File:** `100-first.c`

Write a function that prints a specific message before the `main` function is executed. Sometimes the slow and steady approach wins, but this time, it’s just about being first to print!

### Task 6: Real Programmers Can Write Assembly Code in Any Language
**File:** `101-hello_holberton.asm`

Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line. Real programmers write in assembly, because who doesn’t want to feel like Neo in *The Matrix*?

---

Did you know that *The Lord of the Rings* trilogy was filmed simultaneously over an eight-year period, creating one of the most epic movie series ever? It’s like compiling the most complex C program ever written—except with hobbits and elves. 


