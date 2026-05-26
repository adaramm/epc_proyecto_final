SECTION .text
GLOBAL _start

_start:
    MOV EAX, 1
    MOV EBX, 0
    INT 80h
