;	prints out Hello, Holberton

section .data
	message: db "Hello, Holberton", 0xA
	message_length equ $-message

section .text
	global main
	main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, message_length
	syscall

