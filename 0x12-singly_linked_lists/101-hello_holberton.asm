section .data
    format db "Hello, Holberton", 10, 0  ; Message with newline, it shoudl be "hello, world!"...

section .text
    global main
    extern printf

main:
    mov rdi, format   ; First argument: pointer to format string
    xor eax, eax      ; Zero out eax, as printf is a variadic function
    call printf       ; Call printf
    mov eax, 0        ; Return 0 status
    ret

