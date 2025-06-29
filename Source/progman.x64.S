.intel_syntax noprefix

.global exit
.global fork
.global execve
.global waitid

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

waitid:
    mov rax, 247
    mov rcx, r10
    syscall
    ret