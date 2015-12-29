;----------------------------------------------
;ELITE Electron
; Atom conversion by Kees van Oss 2012
;----------------------------------------------
	.DEFINE asm_code $4000
	.DEFINE header   1		; Header Wouter Ras emulator
	.DEFINE filenaam "ELITE"

.org asm_code-22*header

.IF header
;********************************************************************
; ATM Header for Atom emulator Wouter Ras

name_start:
	.byte filenaam			; Filename
name_end:
	.repeat 16-name_end+name_start	; Fill with 0 till 16 chars
	  .byte $0
	.endrep

	.word asm_code			; 2 bytes startaddress
	.word exec			; 2 bytes linkaddress
	.word eind_asm-start_asm	; 2 bytes filelength

;********************************************************************
.ENDIF



start_asm:
	.include "elitedata.inc"
	.include "8x6font.inc"
	.include "demo.inc"
	.include "elitesong.inc"

eind_asm:

exec = L1C00
