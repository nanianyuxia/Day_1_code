// Day_1_code.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <Windows.h>


int main()
{

    printf("hello word!\n");

    system("pause");
    return 0;

    __asm
    {
       /* .data 
        szCaption db 'A MessageBox !',0
        szText db 'Hello, World !',0

        .code
        start:
            invoke MessageBox,NULL,offset szText,\offset szCaption,MB_MODEMASK
            invoke ExitProcess,NULL
             end start*/
        //haha
        data segment
      
        szHello db  'Hello, world', 0dh, 0ah, '$'
        DATAS ENDS

        STACKS SEGMENT stack
        
            db  100 dup(? )
        STACKS ENDS

        CODE SEGMENT
            ASSUME CS : CODES, DS : DATA, SS : STACKS
        START :
        MOV AX, DATAS
            MOV DS, AX

            mov ah, 9
            mov dx, offset szHello
            int 21h
            
            MOV AH, 4CH
            INT 21H
            CODES ENDS
            END START
    }
}


