.intel_syntax noprefix

.section .text
.globl _start

_start:

    sub rsp, 32

    call init

    mov rdi, rax
    mov rax, 60
    syscall
