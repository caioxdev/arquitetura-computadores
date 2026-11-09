soma_positivos:
        cmp     w1, 0
        ble     .L5
        mov     x3, x0
        add     x1, x0, w1, uxtw 2
        mov     w0, 0
.L4:
        ldr     w2, [x3], 4
        bic     w2, w2, w2, asr #31
        add     w0, w0, w2
        cmp     x3, x1
        bne     .L4
        ret
.L5:
        mov     w0, 0
        ret

