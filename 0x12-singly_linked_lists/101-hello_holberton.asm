section .data
    msg db "Hello, Holberton", 0   ; Message to print, who is this hoberton guy!! it's "hello, world!"

section .text
    global main

main:
    ; Load the message address into the first argument for printf
    mov rdi, msg
    ; Call printf function
    call printf
    ; Exit the program gracefully
    ret

