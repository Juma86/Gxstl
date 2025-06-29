.intel_syntax noprefix

.global exit
.global fork

exit:
    mov rax, 60
    syscall

fork:
    mov rax, 57
    syscall
    ret