.MODEL SMALL
.DATA
NUM1 DW 2
NUM2 DW 6
RES DB ?

.CODE
MOV AX,@DATA
MOV DS,AX

MOV AX,NUM1
ADD AX,NUM2
MOV RES,AL

MOV AH,4CH
INT 21H
END