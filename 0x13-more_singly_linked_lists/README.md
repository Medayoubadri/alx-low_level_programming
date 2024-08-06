# Project: 0x13. C - More Singly Linked Lists

## Description
This project dives deeper into the world of singly linked lists in C. We tackle more complex operations such as handling loops, reversing lists, and even tracking down the elusive node that causes infinite cycles of doom (a.k.a loops). It’s all about mastering data structures while keeping things fun... or dark, depending on your mood.

## Table of Contents
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: Print List](#task-0-print-list)
  - [Task 1: List Length](#task-1-list-length)
  - [Task 2: Add Node](#task-2-add-node)
  - [Task 3: Add Node at the End](#task-3-add-node-at-the-end)
  - [Task 4: Free List](#task-4-free-list)
  - [Task 5: Free List and Set Head to NULL](#task-5-free-list-and-set-head-to-null)
  - [Task 6: Pop Node](#task-6-pop-node)
  - [Task 7: Get Node at Index](#task-7-get-node-at-index)
  - [Task 8: Sum List](#task-8-sum-list)
  - [Task 9: Insert Node](#task-9-insert-node)
  - [Task 10: Delete Node at Index](#task-10-delete-node-at-index)
  - [Task 11: Reverse List](#task-11-reverse-list)
  - [Task 12: Print (Safe Version)](#task-12-print-safe-version)
  - [Task 13: Free (Safe Version)](#task-13-free-safe-version)
  - [Task 14: Find Loop](#task-14-find-loop)
  
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
**File**: `0-print_listint.c`

Print all elements of a `listint_t` list and return the number of nodes. A simple walk through the list, one node at a time.

### Task 1: List Length
**File**: `1-listint_len.c`

Count the number of elements in a `listint_t` list. It's like counting sheep, but with nodes—don't fall asleep!

### Task 2: Add Node
**File**: `2-add_nodeint.c`

Add a new node at the beginning of a `listint_t` list. A new hero enters the saga of your list.

### Task 3: Add Node at the End
**File**: `3-add_nodeint_end.c`

Add a new node at the end of a `listint_t` list. Because every list needs a grand finale.

### Task 4: Free List
**File**: `4-free_listint.c`

Free a `listint_t` list. Say goodbye to your list, and make sure no nodes are left behind.

### Task 5: Free List and Set Head to NULL
**File**: `5-free_listint2.c`

Free a `listint_t` list and set the head to `NULL`. It’s like wiping the slate clean—nothing to see here.

### Task 6: Pop Node
**File**: `6-pop_listint.c`

Delete the head node of a `listint_t` list and return its data. Out with the old and... well, just out with the old.

### Task 7: Get Node at Index
**File**: `7-get_nodeint_at_index.c`

Return the nth node of a `listint_t` list. Your mission, should you choose to accept it, is to find the node at the specified index.

### Task 8: Sum List
**File**: `8-sum_listint.c`

Return the sum of all the data in a `listint_t` list. Adding up the pieces, like tallying up the bill at the end of a long night.

### Task 9: Insert Node
**File**: `9-insert_nodeint.c`

Insert a new node at a given position in a `listint_t` list. Place this new element in exactly the right spot—or else.

### Task 10: Delete Node at Index
**File**: `10-delete_nodeint.c`

Delete the node at a specific index in a `listint_t` list. Quietly remove the node and pretend it was never there.

### Task 11: Reverse List
**File**: `11-reverse_listint.c`

Reverse a `listint_t` list. Flip the list around like a reverse Uno card—because sometimes you just need to change direction.

### Task 12: Print (Safe Version)
**File**: `101-print_listint_safe.c`

Safely print a `listint_t` list, even if it has a loop. Enter the twilight zone of linked lists, where reality might bend but we’ll print our way out.

### Task 13: Free (Safe Version)
**File**: `102-free_listint_safe.c`

Safely free a `listint_t` list, even with a loop. Carefully erase all traces—like a well-executed heist, nothing left behind.

### Task 14: Find Loop
**File**: `103-find_loop.c`

Find the loop in a `listint_t` list. Oh look, it's a loop. Let's pretend we didn’t see this infinite cycle of doom and move on, shall we?

---

**Fun Fact**: Did you know? If you manage to write a linked list function without a single bug, a mythical creature known as the Debugging Elf will appear and grant you three wishes. But let's be honest... that list function is still buggy, isn't it?

