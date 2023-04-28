;64-bit program in assembly that Prints out Hello Holbrtn
extern	printf

        section .data
msg:	db "Hello, Holberton", 0
fmt:    db "%s", 10, 0

        section .text

        global main
main:
        push    rp
	
	mov	rdi,fmt
	mov	rs,msg
	mov	rax,0
        call    printf

	pop	rbp

	mov	rax,0
	ret
