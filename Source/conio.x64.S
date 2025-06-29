.intel_syntax noprefix

.global write
.global read

write:
    mov rax, 1
    syscall
    ret

read:
    mov rax, 0
    syscall
    ret
