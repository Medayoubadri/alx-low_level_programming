# Project: 0x0A. C - argc, argv

## Description

This project focuses on handling command-line arguments in C using `argc` and `argv`. The tasks involve creating programs that can interpret and utilize command-line arguments to perform various functions such as printing arguments, performing arithmetic operations, and more.

## Table of Contents

- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: It ain't what they call you, it's what you answer to](#task-0-it-aint-what-they-call-you-its-what-you-answer-to)
  - [Task 1: Silence is argument carried out by other means](#task-1-silence-is-argument-carried-out-by-other-means)
  - [Task 2: The best argument against democracy is a five-minute conversation with the average voter](#task-2-the-best-argument-against-democracy-is-a-five-minute-conversation-with-the-average-voter)
  - [Task 3: Neither irony nor sarcasm is argument](#task-3-neither-irony-nor-sarcasm-is-argument)
  - [Task 4: To infinity and beyond](#task-4-to-infinity-and-beyond)
  - [Task 5: Minimal Number of Coins for Change](#task-5-minimal-number-of-coins-for-change)

## Tasks

### Task 0: It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.

- If you rename the program, it will print the new name, without having to recompile it.
- You should not remove the path before the name of the program.

### Task 1: Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.

- Your program should print a number, followed by a new line.

### Task 2: The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives.

- All arguments should be printed, including the first one.
- Only print one argument per line, ending with a new line.

### Task 3: Neither irony nor sarcasm is argument

Write a program that multiplies two numbers.

- Your program should print the result of the multiplication, followed by a new line.
- You can assume that the two numbers and result of the multiplication can be stored in an integer.
- If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`.

### Task 4: To infinity and beyond

Write a program that adds positive numbers.

- Print the result, followed by a new line.
- If no number is passed to the program, print `0`, followed by a new line.
- If one of the numbers contains symbols that are not digits, print `Error`, followed by a new line, and return `1`.
- You can assume that numbers and the addition of all the numbers can be stored in an `int`.

### Task 5: Minimal Number of Coins for Change

Write a program that prints the minimum number of coins to make change for an amount of money.

- Usage: `./change cents`
- If the number of arguments passed to your program is not exactly 1, print `Error`, followed by a new line, and return `1`.
- You should use `atoi` to parse the parameter passed to your program.
- If the number passed as the argument is negative, print `0`, followed by a new line.
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
