# Project: 0x0E. C - Structures, typedef

## Description
This project focuses on the use of structures and typedef in C programming. You will learn how to define and use structures, which allow you to group different types of data under a single name. Additionally, you will learn how to use typedef to create new data types.

## Table of Contents
- [Requirements](#requirements) 
- [Tasks](#tasks)
  - [Task 0: Poppy](#task-0-poppy) 
  - [Task 1: A dog is the only thing on earth that loves you more than you love yourself](#task-1-a-dog-is-the-only-thing-on-earth-that-loves-you-more-than-you-love-yourself)
  - [Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad.](#task-2-a-dog-will-teach-you-unconditional-love-if-you-can-have-that-in-your-life-things-wont-be-too-bad)
  - [Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read](#task-3-outside-of-a-dog-a-book-is-a-mans-best-friend-inside-of-a-dog-its-too-dark-to-read)
  - [Task 4: A door is what a dog is perpetually on the wrong side of](#task-4-a-door-is-what-a-dog-is-perpetually-on-the-wrong-side-of)
  - [Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](#task-5-how-many-legs-does-a-dog-have-if-you-call-his-tail-a-leg-four-saying-that-a-tail-is-a-leg-doesnt-make-it-a-leg)

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc
- Code must follow the Betty style.
- No more than 5 functions per file.
- The standard library is allowed.

## Tasks

### Task 0: Poppy
**File:** `dog.h`

Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

### Task 1: A dog is the only thing on earth that loves you more than you love yourself
**File:** `1-init_dog.c`

Write a function that initializes a variable of type `struct dog`.

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad.
**File:** `2-print_dog.c`

Write a function that prints a struct dog. If an element of `d` is `NULL`, print `(nil)` instead of this element. If `d` is `NULL` print nothing.

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
**File:** `3-dog_t.h`

Define a new type `dog_t` as a new name for the type `struct dog`.

### Task 4: A door is what a dog is perpetually on the wrong side of
**File:** `4-new_dog.c`

Write a function that creates a new dog. You have to store a copy of `name` and `owner`. Return `NULL` if the function fails.

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
**File:** `5-free_dog.c`

Write a function that frees dogs.

---
Who let the dogs code? Woof, woof, woof, woof, woof!
