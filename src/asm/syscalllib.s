section .text

global _syscall:function
global mmap:function

_syscall:
    mov rax, rdi
    mov rdi, rsi
    mov rsi, rdx
    mov rdx, rcx
    mov r10, r8
    mov r8, r9
    mov r9, [rsp+8]
    syscall
    ret


mmap:
    mov rax, 9
    mov r10, rcx
    syscall
    ret

