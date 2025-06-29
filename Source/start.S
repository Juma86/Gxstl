.intel_syntax noprefix

.section .data
stack:
times 1024 db 0

.section .text
.globl _start

_start:

    mov rbp, stack
    mov rsp, rbp

    call main

    mov rsi, rax
    mov rax, 60
    syscall