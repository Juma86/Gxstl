.intel_syntax noprefix

.global exit
.global fork
.global execve

exit:
    mov rax, 60
    syscall

fork:
    mov rax, 57
    syscall
    ret

execve:
    mov rax, 59
    syscall