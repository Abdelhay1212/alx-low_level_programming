section .data
    message db 'Hello, Holberton', 0
    newline db 10, 0
section .text
    global main
main:
    push rbp
    mov rbp, rsp
    sub rsp, 16
    lea rdi, [message]
    mov eax, 0
    call printf
    lea rdi, [newline]
    mov eax, 0
    call printf
    add rsp, 16
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
