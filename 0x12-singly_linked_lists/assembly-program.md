# Assembly Language: The Bare Metal Basics

## Introduction

Welcome to the world of assembly language, where you get up close and personal with your computer's brain. If high-level programming is like giving your computer instructions in human language, assembly is more like teaching it Morse code. But don’t worry, we’ll make sure this ride is as fun as it is enlightening!

---

## Sections of an Assembly Program
In assembly, the program is divided into sections. Think of these like different rooms in a house, each with a specific purpose.

### `.data` Section
This is the data room. It's where you store all the stuff your program will use, like strings, numbers, or anything else that needs a place to hang out in memory.

- **Example**:

```asm
section .data
    msg db "Hello, World!", 0  ; Define a string with a null terminator
```
#### Breakdown:

`msg`: The name of your data, kind of like labeling a jar.
`db`: Stands for "define byte". You're saying, "Put this string in memory, byte by byte."
"Hello, World!", 0: The string you want to store, followed by 0, which marks the end of the string (null terminator).

### .bss Section

The Blank Storage Section (because just calling it "empty space" wasn't technical enough). It’s where you declare variables that don't have an initial value but will take up space.

- **Example**:

```asm
section .bss
    count resb 1  ; Reserve 1 byte of space for a variable called count
```
#### Breakdown:

`resb`: Reserve a byte. You can also resw (word), resd (double word), or resq (quad word) depending on how much space you need.

### .text Section

This is the action room where all the code hangs out. Think of this as the living room where all the exciting stuff happens.

- **Example**:

```asm
section .text
    global main  ; Let everyone know where the main entrance is

main:
    mov rdi, msg  ; Move the address of msg into the rdi register
    call printf   ; Call the printf function
    ret           ; Return from main, time to relax
```

#### Breakdown:

`global main`: This tells the assembler, "Hey, this is the starting point!"
`mov rdi, msg`: Moves the address of the data we defined into a register so we can use it.
call printf: Calls the printf function to print our message.
`ret`: Returns control back to wherever the program needs to go next (usually to finish execution).


### Registers: The CPU’s Pocket Tools

Registers are like your CPU’s tiny, super-fast pockets where it keeps data it needs right now. There are general-purpose registers and special ones for specific tasks. Here are a few you’ll use a lot:

`rax, rbx, rcx, rdx`: General-purpose registers. They can hold data, addresses, or whatever you need.
`rdi, rsi`: Used for passing arguments to functions. For example, rdi often holds the first argument.
`rsp, rbp`: The stack pointer (rsp) and base pointer (rbp). They’re like your computer’s hands, helping to manage the stack (a special area in memory).

### Common Instructions

`mov`: Moves data from one place to another.

- **Example**:

`mov rax`, 5 – Put the number 5 into the rax register.
`add` and `sub`: Adds or subtracts values.

- **Example**:

`add rax, rbx` – Adds the value in rbx to rax.
`call`: Calls a function.

- **Example**:

`call printf` – Calls the printf function.
`ret`: Returns from a function.

- **Example**:

`ret `– Ends the function and returns control to the calling code.

### Calling Conventions: Passing the Baton
When calling a function, there’s a protocol for how arguments are passed and results are returned. This is called a calling convention.

#### x86-64 System V (Linux, macOS)
- First argument: Goes into rdi.
- Second argument: Goes into rsi.
- Return value: Comes back in rax.
So, if you’re calling printf("Hello, World!"), "Hello, World!" would go into rdi.

### The Stack: Your Program’s Backpack
The stack is a LIFO (Last In, First Out) structure used for storing temporary data like function parameters, return addresses, and local variables. Think of it like a backpack: you can put stuff in, but you have to take it out in the reverse order.

- `push`: Adds something to the top of the stack.
- **Example**: push rax – Puts the value in rax onto the stack.

- `pop`: Removes the top item from the stack.
- **Example**: pop rax – Takes the top value off the stack and puts it into rax.


### Assembling and Linking: From Text to Executable
#### Assembling
- nasm -f elf64 filename.asm: Converts your assembly code (filename.asm) into an object file (filename.o) that the linker can use.
#### Linking
gcc -no-pie -std=gnu89 filename.o -o outputname: Links your object file and creates an executable. -no-pie ensures the executable is non-Position Independent, which is simpler to understand when learning.
#### Running Your Program
./outputname: Executes the program.


### Conclusion: The Journey is Yours
Assembly language is like a secret handshake with your computer. It’s not as forgiving as high-level languages, but it gives you unmatched control and insight into how computers really work.

Remember, every line of code in assembly is like speaking directly to the machine. It's not just about what you say, but how you say it—because the CPU is a bit like a genie: it’ll do exactly what you ask, but you better be sure of what you’re asking for!

So, go ahead, embrace the challenge, and remember: you're bending the machine to your will, one instruction at a time.

Feel free to copy and save this guide for your personal study. With a bit of practice, you’ll be decoding the Matrix and controlling the bare metal like a pro!
