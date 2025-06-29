.intel_syntax noprefix

.section .data
stack: .space 4096

.section .text
.globl _start

_start:

    mov rbp, stack
    mov rsp, rbp

    and rsp, 0xFFFFFFFFFFFFFFF0

    call main

    mov rsi, rax
    mov rax, 60
    syscall
