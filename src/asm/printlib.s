extern _GLOBAL_OFFSET_TABLE_

;define syscall     num
%define sys_write   1
%define sys_read    0

;define file descripter
%define stdout  1
%define stdin   0
%define stderr  2


section .rodata:
    hex: db "0123456789abcdef"

section .text


global putsn:function
global puts:function
global putr:function


putsn:
    mov rdx, rsi
    mov rsi, rdi
    mov rdi, stdout
    mov rax, sys_write

    syscall
    ret


puts:
    xor rsi, rsi
    .loop:
        lea rax, [rdi + rsi]
        mov al, [rax]
        test al, al
        jz .end
        inc rsi
        jmp .loop
    .end:

    jmp putsn


putr:
    push rbp
    mov rbp, rsp
    sub rsp, 16

    xor rdx, rdx
.loop:
    ; rax = hex + dil
    mov rsi, rdi
    and rsi, 0x0f   ; mov rcx, dil
    lea rax, [rel hex]
    add rax, rsi

    ; rsi = rbp - 1 - rdx
    lea rsi, [rbp-1]
    sub rsi, rdx

    ; [rsi] = [rax]
    mov al, byte [rax]
    mov byte [rsi], al

    ; rdi >>= 4
    shr rdi, 4

    inc rdx
    cmp rdx, 16
    je .end
    jmp .loop
.end:
    mov rdi, stdout
    mov rax, sys_write
    syscall

    leave
    ret
