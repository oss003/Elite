; Keycodes for keyscan $FE71

keyscan:
;	stx key_buf

	jsr $fe71
	lda conv_table,y
	beq keyscan1
	bit $b001
	bmi keyscan0
	ora #$80
keyscan0:
;	cmp key_buf
;	bne keyscan1
;	ora #$80

;	bvs keyscan1
;	ora #$40
keyscan1:
;	tax
	rts

;----------------------------------------------
; Keycode conversion table
;
; Atom keycode -> Electron keycode
;----------------------------------------------

conv_table:
	;      SP  [   \   ]   up  lo c_h c_v
	.byte $62,$57,$18,$7b,$00,$00,$39,$28

	;     	nc  nc  nc  nc  nc RET COP DEL
	.byte $00,$00,$00,$00,$00,$49,$38,$59
 
	;      0   1   2   3   4   5   6   7
	.byte $27,$30,$31,$11,$12,$13,$34,$24

	;      8   9   :   ;   ,   -   .   /
	.byte $15,$26,$48,$57,$66,$17,$67,$68

	;      @   A   B   C   D   E   F   G
	.byte $47,$41,$28,$52,$32,$22,$43,$18

	;      H   I   J   K   L   M   N   O
	.byte $54,$25,$45,$78,$56,$65,$55,$36

	;      P   Q   R   S   T   U   V   W
	.byte $37,$10,$33,$51,$23,$35,$63,$21

	;      X   Y   Z  ESC
	.byte $42,$39,$61,$70,$00,$00,$00,$00

	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0

	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0
	.byte 0,0,0,0,0,0,0,0

SPACE		= $00
BRACKET_L	= $01
BACKSLASH	= $02
BRACKET_R	= $03
UP		= $04
LOCK		= $05
CURSOR_H	= $06
CURSOR_V	= $07

RETURN		= $0d
COPY		= $0e
DELETE		= $0f

KEY_0		= $10
KEY_1		= $11
KEY_2		= $12
KEY_3		= $13
KEY_4		= $14
KEY_5		= $15
KEY_6		= $16
KEY_7		= $17
KEY_8		= $18
KEY_9		= $19
COLON		= $1a
SEMICOLON	= $1b
COMMA		= $1c
MINUS		= $1d
POINT		= $1e
SLASH		= $1f

AT		= $20
KEY_A		= $21
KEY_B		= $22
KEY_C		= $23
KEY_D		= $24
KEY_E		= $25
KEY_F		= $26
KEY_G		= $27
KEY_H		= $28
KEY_I		= $29
KEY_J		= $2a
KEY_K		= $2b
KEY_L		= $2c
KEY_M		= $2d
KEY_N		= $2e
KEY_O		= $2f

KEY_P		= $30
KEY_Q		= $31
KEY_R		= $32
KEY_S		= $33
KEY_T		= $34
KEY_U		= $35
KEY_V		= $36
KEY_W		= $37
KEY_X		= $38
KEY_Y		= $39
KEY_Z		= $3a
ESC		= $3b
