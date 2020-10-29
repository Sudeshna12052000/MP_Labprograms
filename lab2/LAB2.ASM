.MODEL SMALL
.DATA
A DB 10H,20H,30H,40H,50H
B DB 11H,22H,33H,44H,55H

.CODE
MOV AX,@DATA
MOV DS,AX

LEA SI,A  ;SI WILL HAVE STARTING ADDRESS OF A
LEA DI,B  ;DI WILL HAVE STARTING ADDRESS OF B

MOV CL,05H

;loop definition

back: mov al,[si]  ;[si] retrieves the element present the address in si
      xchg al,[di] ;exchanges the elements in al and [di]

      mov [si],al

      inc si  ;si=si+1
      inc di
      loop back  ;cx=cx-1;if cx!=0;then jump back to target

      ;to verify the output

      lea si,a
      lea di,b

      mov bl,[si]
      mov bh,[di]

      mov bl,[si]
      mov bh,[di]

      mov ah,4ch
      int 21h
      end

