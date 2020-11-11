.model small

display macro msg
lea dx,msg
mov ah,09h
int 21h
endm

.data
msg1 db 0dh,0ah,"enter a string :-$"
msg2 db 0dh,0ah,"entered string is palindrome$"
msg3 db 0dh,0ah,"entered string is not a palindrome$"
str db 10h dup(0)
revstr db 10h dup(0)
len dw 0

.code
mov ax,@data
mov ds,ax

display msg1

mov si,00h
back1: mov ah,01h
int 21h

cmp al,0dh
jz next

mov str[si],al
inc si
inc len
jmp back1

next: mov si,00h
      mov di,00h
      add di,len
      dec di
      mov cx,len

back2: mov al,str[si]
       mov revstr[di],al
       inc si
       dec di
       loop back2

       mov cx,len
       mov si,00h
       mov di,00h
       cld

back3: mov bl,str[si]
       cmp bl,revstr[di]
       jnz notpali
       loop back3
       display msg2
       jmp last

notpali: display msg3
last:    mov ah,4ch
int 21h
end
