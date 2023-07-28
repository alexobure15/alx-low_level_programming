format: db "%s", 10,0
msg: db "Hello, Holberton",0
	global main
	extern	printf

main:
	mov   edi, format
	xor   eax, eax
	mov esi, msg
	call  printf
	mov esi, msg
	mov 	eax, 0
	ret


