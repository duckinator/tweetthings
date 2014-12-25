org 7C00h

mov ah, 0xe
mov si,s
p:lodsb
cmp al, 0
jz $
int 0x10
jmp p

s db `Happy holidays!\r\n<3,\nMarie`

times 510-($-$$) db 0
dw 43605
