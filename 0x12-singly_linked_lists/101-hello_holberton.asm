global main
extern printf

section .data
hello db 'Hello, Holberton', 0
newline db 10, 0

section .text
main:
    mov rdi, hello
    mov rsi, 0
    call printf

    mov rdi, newline
    mov rsi, 0
    call printf

    xor eax, eax
    ret
