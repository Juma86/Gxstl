.intel_syntax noprefix

.global gx_assert

gx_assert:
    cmp rdi, rsi
    jne assert_fail
    ret
assert_fail:
    mov rax, 1
    mov rdi, 1
    mov rsi, rdx
    mov rdx, rcx
    syscall
    mov rax, 60
    mov rdi, 1
    syscall
