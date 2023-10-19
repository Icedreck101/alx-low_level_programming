section .data
    hello db "Hello, Holberton",0
    format db "%s",10,0

section .text
    global _start

_start:
    ; Push arguments for printf
    push rdi
    push rsi

    ; Set rdi to the format string
    mov rdi, format

    ; Set rsi to the address of hello
    mov rsi, hello

    ; Call printf
    call printf

    ; Clean up the stack
    add rsp, 16

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status: 0
    syscall

