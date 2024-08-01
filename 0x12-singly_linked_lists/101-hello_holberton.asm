section .data
    msg db "Hello, Holberton", 0

section .text
    global main

main:
    mov rdi, msg
    call printf
    ret

