section .text
	global _start

_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4	; system call (sys_write)
	int 0x80	; to call kernel

	mov eax, 1	;system call (sys_exit)
	int 0x80

section .data
	str db "Hello, Holberton",10 ; or also 0xa
	lem equ $ -str
