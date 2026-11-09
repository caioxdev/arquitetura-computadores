"soma_positivos":
        test    esi, esi
        jle     .L5
        mov     esi, esi
        xor     edx, edx
        lea     rsi, [rdi+rsi*4]
.L4:
        mov     eax, DWORD PTR [rdi]
        xor     ecx, ecx
        test    eax, eax
        cmovs   eax, ecx
        add     rdi, 4
        add     edx, eax
        cmp     rdi, rsi
        jne     .L4
        mov     eax, edx
        ret
.L5:
        xor     edx, edx
        mov     eax, edx
        ret

