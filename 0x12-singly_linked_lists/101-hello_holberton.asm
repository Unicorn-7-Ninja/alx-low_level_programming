; 101-hello_holberton.asm
; Assemble and link with:
; nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
	global  main
	extern  printf

	section .data
msg     db      'Hello, Holberton', 10, 0

	section .text
main:
	; Prepare arguments for printf
	mov     rdi, msg        ; First argument is the format string
	xor     rax, rax        ; No floating-point arguments

	; Call printf
	call    printf

	; Return from main
	xor     rax, rax
	ret
