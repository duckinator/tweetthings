;nasm -fbin a.s;qemu-system-i386 -hdc a
org 7C00h
mov ah,14
mov si,s
p:lodsb
int 16
cmp al,"i"
jnz p
s db"Hi"
times 510-($-$$) db 0
dw 43605