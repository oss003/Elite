demo:
	ldy #0
	sty $87

	jsr clear_block
loop:
	ldy $87
	lda demotxt,y
	bmi demo
	jsr PUTCHAR
;	jsr $fb81
	jsr moveblock
	lda #32
	jsr PUTCHAR
	inc $87

	lda #0
	sta $88
scan_loop:
	dec $88
	lda $88
	beq loop
	jsr $fe71
	cpy #$ff
	beq scan_loop
	rts

moveblock:
	txa
	pha
	ldx #1
repeat:
	lda $8804,x
	sta $8803,x
	lda $8824,x
	sta $8823,x
	lda $8844,x
	sta $8843,x
	lda $8864,x
	sta $8863,x
	lda $8884,x
	sta $8883,x
	lda $88a4,x
	sta $88a3,x
	inx
	cpx #24
	bne repeat
	pla
	tax
	rts

clear_block:
	txa
	pha
	ldx #1
repeat2:
	lda #0
	sta $8803,x
	sta $8823,x
	sta $8843,x
	sta $8863,x
	sta $8883,x
	sta $88a3,x
	inx
	cpx #24
	bne repeat2
	pla
	tax
	rts



SCR	  = $80
CHR	  = $82
TMP_Y	  = $84
XPOS	  = $85
YPOS	  = $86

PUTCHAR:
	stx XPOS
	sty YPOS

PRINTCHAR:
	sec
	sbc #$20
    sta CHR        ; Calculate characterspritedata address
    lda #0         ; = A * 8 + charsprite data address
    sta CHR+1
    asl CHR
    rol CHR+1
    asl CHR
    rol CHR+1
    asl CHR
    rol CHR+1
    lda CHR
    clc
    adc #<FONT
    sta CHR
    lda CHR+1
    adc #>FONT
    sta CHR+1

	lda #27
	sta SCR		   ; Calculate screenaddress
	lda #$88
	sta SCR+1
 
	ldx #0
	ldy #0		 ; Put character on screen
P_C_1:
	lda (CHR),y
	sta (SCR),y
	inc CHR
	bne P_C_2
	inc CHR+1
P_C_2:
	lda SCR
	clc
	adc #$20
	sta SCR
	lda SCR+1
	adc #0
	sta SCR+1
	inx
	cpx #8
	bne P_C_1

	ldx XPOS
	ldy YPOS
	rts

demotxt:
	.byte "Welcome to the Acorn Atom version of Elite."
	.byte "This version is converted from the Electron "
	.byte "version written by David Braben and Ian Bell. "
	.byte "            Press any key to start            "
	.byte "           ",$ff