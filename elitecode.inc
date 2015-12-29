;
; OS calls
;

OSRDCH		= $fe94
READCHR		= $fe71
BELL		= $fd1a

;
; Code equates
;

L0001       = $0001
L0002       = $0002
L0003       = $0003
L0005       = $0005
L0006       = $0006
L0007       = $0007
L0008       = $0008
L0009       = $0009
L000A       = $000a
L000B       = $000b
L000C       = $000c
L000D       = $000d
L000E       = $000e
L000F       = $000f

L0010       = $0010
L0011       = $0011
L0013       = $0013
L0014       = $0014
L0015       = $0015
L0016       = $0016
L0017       = $0017
L0018       = $0018
L001B       = $001b

L001C       = $001c	; Font address
L001D       = $001d

L001E       = $001e
L001F       = $001f

L0020       = $0020
L0021       = $0021
L0022       = $0022
L0023       = $0023
L0024       = $0024
L0025       = $0025
L0026       = $0026
L0027       = $0027
L002A       = $002a
L002B       = $002b
L002C       = $002c	; Cursor X
L002D       = $002d	; Cursor Y
L002E       = $002e	; Hyperspace sub timer
L002F       = $002f	; Hyperspace timer

L0030       = $0030	; E mark in panel
L0031       = $0031	; X1
L0032       = $0032	; Y1
L0033       = $0033	; X2
L0034       = $0034	; Y2
L0035       = $0035
L0036       = $0036
L0037       = $0037
L0038       = $0038
L0039       = $0039
L003A       = $003a
L003B       = $003b
L003C       = $003c
L003D       = $003d
L003E       = $003e
L003F       = $003f

L0040       = $0040
L0041       = $0041	; Key buffer, last key
L0042       = $0042	; Key buffer
L0043       = $0043	; Key buffer
L0044       = $0044	; Key buffer
L0045       = $0045	; Key buffer
L0046       = $0046	; Key buffer
L0047       = $0047	; Key buffer
L0048       = $0048	; Key buffer
L0049       = $0049	; Key buffer
L004A       = $004a	; Key buffer
L004B       = $004b	; Key buffer
L004C       = $004c	; Key buffer
L004D       = $004d	; Key buffer
L004E       = $004e	; Key buffer
L004F       = $004f	; Key buffer

L0050       = $0050	; Key buffer
L0051       = $0051
L0052       = $0052

L0053       = $0053	; Galaxy data
L0054       = $0054	; Galaxy data
L0055       = $0055	; Galaxy data
L0056       = $0056	; Galaxy data
L0057       = $0057	; Galaxy data
L0058       = $0058	; Galaxy data
L0059       = $0059	; Galaxy data
L005A       = $005a	; Galaxy data
L005B       = $005b	; Galaxy data
L005C       = $005c	; Galaxy data
L005D       = $005d	; Galaxy data
L005E       = $005e	; Galaxy data
L005F       = $005f	; Galaxy data
L0060       = $0060	; Galaxy data
L0061       = $0061	; Galaxy data
L0062       = $0062	; Galaxy data
L0063       = $0063	; Galaxy data
L0064       = $0064	; Galaxy data
L0065       = $0065	; Galaxy data
L0066       = $0066	; Galaxy data
L0067       = $0067	; Galaxy data
L0068       = $0068	; Galaxy data
L0069       = $0069	; Galaxy data
L006A       = $006a	; Galaxy data
L006B       = $006b	; Galaxy data
L006C       = $006c	; Galaxy data
L006D       = $006d	; Galaxy data
L006E       = $006e	; Galaxy data
L006F       = $006f	; Galaxy data
L0070       = $0070	; Galaxy data
L0071       = $0071	; Galaxy data
L0072       = $0072	; Galaxy data
L0073       = $0073	; Galaxy data
L0074       = $0074	; Galaxy data
L0075       = $0075	; Galaxy data
L0076       = $0076	; Galaxy data

L0077       = $0077
L0078       = $0078
L0079       = $0079
L007A       = $007a
L007B       = $007b
L007C       = $007c
L007D       = $007d
L007E       = $007e	; VDU stat
L007F       = $007f

L0080       = $0080
L0081       = $0081
L0082       = $0082
L0083       = $0083
L0084       = $0084
L0085       = $0085
L0086       = $0086
L0087       = $0087
L0088       = $0088
L0089       = $0089
L008A       = $008a
L008B       = $008b
L008C       = $008c	; Speed
L008D       = $008d
L008E       = $008e
L008F       = $008f

L009D       = $009d

L00A0       = $00a0
L00A1       = $00a1
L00A2       = $00a2
L00A3       = $00a3
L00A4       = $00a4	; YSAV
L00A5       = $00a5
L00A6       = $00a6	; Header on/off
L00A7       = $00a7
L00A8       = $00a8
L00A9       = $00a9
L00AB       = $00ab	; TYPE
L00AC       = $00ac	; adval_x
L00AD       = $00ad	; adval_y
L00AE       = $00ae
L00AF       = $00af	; Docked flag ($ff=docked,$00=not docked)

L00B0       = $00b0
L00B1       = $00b1	; SWAP
L00B3       = $00b3
L00B4       = $00b4
L00B5       = $00b5
L00B6       = $00b6
L00B7       = $00b7
L00B8       = $00b8
L00BA       = $00ba
L00BB       = $00bb
L00BC       = $00bc
L00BD       = $00bd
L00BE       = $00be
L00BF       = $00bf

L00C1       = $00c1
L00C6       = $00c6

L00D1       = $00d1
L00D2       = $00d2
L00D3       = $00d3
L00D4       = $00d4
L00D5       = $00d5
L00D6       = $00d6
L00D7       = $00d7
L00D8       = $00d8
L00D9       = $00d9
L00DA       = $00da
L00DB       = $00db

L00E0       = $00e0
L00E1       = $00e1
L00E6       = $00e6

L00F1       = $00f1
L00F9       = $00f9
L00FC       = $00fc

L0100       = $0100
L0101       = $0101
L0102       = $0102
L0103       = $0103

L0203       = $0203
L0207       = $0207
L0224       = $0224
L0225       = $0225
L0229       = $0229

L02B9       = $02b9
L02FF       = $02ff

L0300       = $0300
L0301       = $0301	; Commander home X
L0302       = $0302	; Commander home Y
L0303       = $0303
L0309       = $0309	; Cash
L030A       = $030a	; Cash
L030B       = $030b	; Cash
L030C       = $030c	; Cash
L030D       = $030d	; Fuel level
L030E       = $030e
L030F       = $030F	; Galaxy nr

L0310       = $0310	; Front Laser present (Pulse=$0f Beam=$8F)
L0311       = $0311	; Rear Laser present  (Pulse=$0f Beam=$8F)
L0312       = $0312	; Left Laser present  (Pulse=$0f Beam=$8F)
L0313       = $0313	; Right Laser present (Pulse=$0f Beam=$8F)
L0314       = $0314	; 
L0315       = $0315	; 

L0316       = $0316	; Large Cargo Bay present ($25)

L0317       = $0317	; Quantity Food
L0318       = $0318	; Quantity Textiles
L0319       = $0319	; Quantity Radioactives
L031A       = $031a	; Quantity Slaves
L031B       = $031b	; Quantity Liquor/Wines
L031C       = $031c	; Quantity Luxuries
L031D       = $031d	; Quantity Narcotics
L031E       = $031e	; Quantity Computers
L031F       = $031f	; Quantity Machinery
L0320       = $0320	; Quantity Alloys
L0321       = $0321	; Quantity Firearms
L0322       = $0322	; Quantity Furs
L0323       = $0323	; Quantity Minerals
L0324       = $0324	; Quantity Gold
L0325       = $0325	; Quantity Platinum
L0326       = $0326	; Quantity Gem-Stones
L0327       = $0327	; Quantity Alien Items

L0328       = $0328	; E.C.M.System present        ($ff)
L0329       = $0329	; Fuel scoops present         ($ff)
L032A       = $032A	; Energy Bomb present         ($7f)
L032B       = $032B	; Energy Unit present         (>0)
L032C       = $032C	; Docking computer present    ($ff)
L032D       = $032D	; Galactic Hyperspace present ($ff)
L032E       = $032E	; Escape Capsule present      ($ff)

L0333       = $0333	; Missile counter
L0334       = $0334
L0335       = $0335
L0345       = $0345
L0346       = $0346
L0347       = $0347
L0348       = $0348
L0349       = $0349
L034C       = $034c	; Stars X (10x)
L0357       = $0357
L0362       = $0362	; Stars Y (10x)

L0C85       = L0C86-1

L0CB9       = $0CB9	; Stars Z (10x)
L0CC4       = $0CC4

L0CF3       = $0CF3
L0D0D       = $0D0D
L0D1D       = $0D1D	; Sound on/off flag
L0D6F       = $0D6F
L0EFE       = $0EFE

LFE05       = $FE05

LFFDD       = L1127	; OSFILE
LFFE0       = L1127	; OSRDCH
LFFF1       = L1127	; Beep
LFFF4       = L1127	; OSBYTE
LFFFD       = $fffd

;------------------------------------------------
; Strings in game (tokens)
;------------------------------------------------

L0400:
            .byte $DC,$00
            .byte $03,$60,$6B,$A9,$77,$00
            .byte $64,$6C,$B5,$71,$6D,$6E,$B1,$77,$00
            .byte $67,$B2,$62,$32,$20,$00
            .byte $AF,$B5,$6D,$77,$BA,$7A,$2E,$00
            .byte $70
            .byte $7A,$70,$BF,$6E,$00,$73,$BD,$A6
            .byte $00,$21,$03,$A8,$71,$68,$66,$77
            .byte $03,$85,$70,$00,$AF,$67,$AB,$77
            .byte $BD,$A3,$00,$62,$64,$BD,$60,$76
            .byte $6F,$77,$76,$B7,$6F,$00,$BD,$60
            .byte $6B,$03,$00,$62,$B5,$B7,$A0,$03
            .byte $00,$73,$6C,$BA,$03,$00,$A8,$AF
            .byte $6F,$7A,$03,$00,$76,$6D,$6A,$77
            .byte $00,$75,$6A,$66,$74,$03,$00,$B9
            .byte $B8,$B4,$77,$7A,$00,$B8,$A9,$60
            .byte $6B,$7A,$00,$65,$66,$76,$67,$A3
            .byte $00,$6E,$76,$6F,$B4,$0E,$81,$00
            .byte $AE,$60,$77,$B2,$BA,$9A,$00,$D8
            .byte $6E,$76,$6D,$BE,$77,$00,$60,$BC
            .byte $65,$BB,$B3,$62,$60,$7A,$00,$67
            .byte $66,$6E,$6C,$60,$B7,$60,$7A,$00
            .byte $60,$BA,$73,$BA,$B2,$66,$03,$E8
            .byte $B2,$66,$00,$70,$6B,$6A,$73,$00
            .byte $73,$71,$6C,$67,$76,$60,$77,$00
            .byte $03,$B6,$70,$B3,$00,$6B,$76,$6E
            .byte $B8,$03,$60,$6C,$6F,$BC,$6A,$A3
            .byte $00,$6B,$7A,$73,$B3,$70,$73,$62
            .byte $A6,$03,$00,$70,$6B,$BA,$77,$03
            .byte $E9,$82,$00,$AE,$E8,$B8,$A6,$00
            .byte $73,$6C,$73,$76,$6F,$B2,$6A,$BC
            .byte $00,$64,$71,$6C,$70,$70,$03,$99
            .byte $6A,$75,$6A,$77,$7A,$00,$66,$60
            .byte $BC,$6C,$6E,$7A,$00,$03,$6F,$6A
L0500:
            .byte $64,$6B,$77,$03,$7A,$66,$A9,$70
            .byte $00,$BF,$60,$6B,$0D,$A2,$B5,$6F
            .byte $00,$60,$62,$70,$6B,$00,$03,$A5
            .byte $55,$6A,$BC,$00,$59,$82,$22,$00
            .byte $77,$A9,$A0,$77,$03,$6F,$6C,$E8
            .byte $00,$49,$03,$69,$62,$6E,$6E,$BB
            .byte $00,$71,$B8,$A0,$00,$70,$77,$00
            .byte $93,$03,$6C,$65,$03,$00,$70,$66
            .byte $55,$00,$03,$60,$A9,$64,$6C,$25
            .byte $00,$66,$B9,$6A,$73,$00,$65,$6C
            .byte $6C,$67,$00,$BF,$7B,$B4,$6F,$AA
            .byte $00,$B7,$AE,$6C,$62,$60,$B4,$B5
            .byte $70,$00,$70,$B6,$B5,$70,$00,$6F
            .byte $6A,$B9,$BA,$0C,$74,$AF,$AA,$00
            .byte $6F,$76,$7B,$76,$BD,$AA,$00,$6D
            .byte $A9,$60,$6C,$B4,$60,$70,$00,$D8
            .byte $73,$76,$77,$B3,$70,$00,$A8,$60
            .byte $6B,$AF,$B3,$7A,$00,$56,$6C,$7A
            .byte $70,$00,$65,$6A,$AD,$A9,$6E,$70
            .byte $00,$65,$76,$71,$70,$00,$6E,$AF
            .byte $B3,$A3,$70,$00,$64,$6C,$6F,$67
            .byte $00,$73,$6F,$B2,$AF,$76,$6E,$00
            .byte $A0,$6E,$0E,$E8,$BC,$AA,$00,$A3
            .byte $6A,$B1,$03,$5C,$70,$00,$0B,$7A
            .byte $0C,$6D,$0A,$1C,$00,$03,$60,$71
            .byte $00,$6F,$A9,$A0,$00,$65,$6A,$B3
            .byte $A6,$00,$70,$A8,$55,$00,$64,$AD
            .byte $B1,$00,$71,$BB,$00,$7A,$66,$55
            .byte $6C,$74,$00,$61,$6F,$76,$66,$00
            .byte $61,$B6,$60,$68,$00,$35,$00,$70
            .byte $6F,$6A,$6E,$7A,$00,$61,$76,$64
            .byte $0E,$66,$7A,$BB,$00,$6B,$BA,$6D
            .byte $BB,$00,$61,$BC,$7A,$00,$65,$B2
L0600:
            .byte $00,$65,$76,$71,$71,$7A,$00,$71
            .byte $6C,$67,$B1,$77,$00,$65,$71,$6C
            .byte $64,$00,$6F,$6A,$A7,$71,$67,$00
            .byte $6F,$6C,$61,$E8,$B3,$00,$A5,$71
            .byte $67,$00,$6B,$76,$6E,$B8,$6C,$6A
            .byte $67,$00,$65,$66,$6F,$AF,$66,$00
            .byte $AF,$70,$66,$60,$77,$00,$88,$B7
            .byte $AE,$AB,$00,$60,$6C,$6E,$00,$D8
            .byte $6E,$B8,$67,$B3,$00,$03,$67,$AA
            .byte $77,$71,$6C,$7A,$BB,$00,$61,$7A
            .byte $03,$67,$0D,$61,$B7,$B0,$6D,$03
            .byte $05,$03,$6A,$0D,$B0,$55,$00,$8D
            .byte $03,$03,$93,$2E,$03,$99,$03,$03
            .byte $03,$8D,$03,$85,$03,$65,$BA,$03
            .byte $70,$62,$A2,$2E,$29,$00,$65,$71
            .byte $BC,$77,$00,$AD,$A9,$00,$A2,$65
            .byte $77,$00,$BD,$64,$6B,$77,$00,$5A
            .byte $6F,$6C,$74,$24,$00,$40,$32,$DF
            .byte $02,$00,$66,$7B,$77,$B7,$03,$00
            .byte $73,$76,$6F,$70,$66,$98,$00,$B0
            .byte $62,$6E,$98,$00,$65,$76,$66,$6F
            .byte $00,$6E,$BE,$70,$6A,$A2,$00,$C0
            .byte $ED,$03,$61,$62,$7A,$00,$66,$0D
            .byte $60,$0D,$6E,$0D,$86,$00,$45,$44
            .byte $70,$00,$45,$4B,$70,$00,$4A,$03
            .byte $70,$60,$6C,$6C,$73,$70,$00,$AA
            .byte $60,$62,$73,$66,$03,$60,$62,$73
            .byte $70,$76,$A2,$00,$5A,$61,$6C,$6E
            .byte $61,$00,$5A,$8D,$00,$5F,$AF,$64
            .byte $03,$F4,$00,$59,$03,$9E,$00,$62
            .byte $55,$00,$6F,$6F,$00,$E6,$19,$23
L0700:
            .byte $00,$AF,$D8,$AF,$64,$03,$49,$00
            .byte $B1,$B3,$64,$7A,$03,$00,$64,$62
            .byte $B6,$60,$B4,$60,$00,$2E,$DF,$04
            .byte $70,$03,$6D,$62,$6E,$66,$1C,$03
            .byte $00,$67,$6C,$60,$68,$00,$26,$A2
            .byte $64,$A3,$03,$E8,$B2,$AB,$19,$00
            .byte $DF,$03,$27,$2E,$2E,$2E,$25,$3C
            .byte $03,$86,$2A,$21,$2E,$9E,$86,$2A
            .byte $20,$2E,$60,$BC,$AE,$B4,$BC,$2A
            .byte $00,$6A,$BF,$6E,$00,$03,$03,$6F
            .byte $6C,$62,$67,$03,$6D,$66,$74,$03
            .byte $DF,$03,$C2,$2E,$2E,$00,$25,$5F
            .byte $BB,$00,$B7,$B4,$6D,$64,$19,$00
            .byte $03,$BC,$03,$00,$2E,$2B,$EC,$6E
            .byte $B1,$77,$19,$25,$00,$60,$A2,$B8
            .byte $00,$6C,$65,$65,$B1,$67,$B3,$00
            .byte $65,$76,$64,$6A,$B4,$B5,$00,$6B
            .byte $A9,$6E,$A2,$70,$70,$00,$6E,$6C
            .byte $E8,$6F,$7A,$03,$35,$00,$8F,$00
            .byte $88,$00,$62,$61,$6C,$B5,$03,$88
            .byte $00,$D8,$73,$66,$77,$B1,$77,$00
            .byte $67,$B8,$A0,$71,$6C,$AB,$00,$67
            .byte $66,$62,$67,$6F,$7A,$00,$0E,$0E
            .byte $0E,$0E,$03,$66,$03,$6F,$03,$6A
            .byte $03,$77,$03,$66,$03,$0E,$0E,$0E
            .byte $0E,$00,$73,$AD,$70,$B1,$77,$00
            .byte $2B,$64,$62,$6E,$66,$03,$6C,$B5
            .byte $71,$00,$73,$71,$AA,$70,$03,$65
            .byte $6A,$AD,$03,$BA,$03,$70,$73,$62
            .byte $A6,$0F,$DF,$0D,$2E,$2E,$00,$0B
            .byte $60,$0A,$03,$62,$60,$BA,$6D,$A4
            .byte $65,$77,$03,$12,$1A,$1B,$17,$00

;------------------------------------------------
; End strings in game
;------------------------------------------------

L0800:
            .byte $00,$00,$00,$00,$11,$11,$00,$00
            .byte $00,$00,$00,$00,$FF,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $64,$FF,$00,$00,$05,$FF,$01,$00
            .byte $00,$3A,$00,$00,$00,$07,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $64,$06,$90,$64,$06,$90,$64,$06
            .byte $90,$64,$06,$00,$00,$00,$00,$90
            .byte $00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$01,$00,$6F,$F8,$04
            .byte $01,$08,$7E,$00,$00,$82,$7E,$7E
            .byte $00,$00,$00,$01,$0E,$EE,$FF,$2C
            .byte $20,$32,$06,$01,$00,$FE,$78,$7E
            .byte $00,$00,$00,$01,$01,$FF,$FD,$11
            .byte $20,$80,$01,$00,$00,$FF,$01,$01
            .byte $00,$00,$00,$01,$04,$F8,$2C,$04
            .byte $06,$08,$16,$00,$00,$81,$7E,$00
            .byte $00,$00,$00

;------------------------------------------------
; Workspace, will be cleared in program
;------------------------------------------------

L0900:      .byte $00
L0901:      .byte $00
L0902:      .byte $00,$00
L0904:      .byte $00
L0905:      .byte $00
L0906:      .byte $00
L0907:      .byte $60
L0908:      .byte $00,$00,$00,$00,$00
L090D:      .byte $00,$60,$00,$00,$00,$60,$00,$00
            .byte $00,$60,$00,$00,$00,$00,$00,$00
            .byte $7F,$7F,$03,$00,$46,$0B,$96
L0924:      .byte $00,$00,$00,$00,$00,$00,$00,$00
L092C:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
L0944:      .byte $00,$00,$00,$00,$00,$00
L094A:      .byte $00
L094B:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00

;------------------------------------------------
; Parameter block for OSFILE
;------------------------------------------------

L0A00:      .byte $00,$00		; Filename ptr

L0A02:      .byte $00			; Load address
L0A03:      .byte $00,$00,$00

L0A06:      .byte $00,$00,$00,$00	; Exec address

L0A0A:      .byte $00			; Start address
L0A0B:      .byte $00,$00,$00		; data to save

L0A0E:      .byte $00			; End address
L0A0F:      .byte $00,$00,$00		; data to save

;------------------------------------------------

L0A12:      .byte $00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00
L0B00:
            .byte $00,$00,$00
L0B03:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00
L0B0E:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $39,$7D,$62,$7D,$5F,$7D,$62,$80
            .byte $67,$7D,$5F,$81,$59,$81,$59,$82
            .byte $58,$80,$67,$80,$67,$81,$65,$80
            .byte $67,$81,$65,$82,$60,$82,$5B,$82
            .byte $60,$82,$5B,$82,$58,$82,$58,$80
            .byte $5E,$80,$5E,$80,$61,$80,$67,$80
            .byte $61,$7D,$5F,$80,$5E,$7D,$62,$80
            .byte $61,$83,$62,$80,$61,$7F

            .byte $60,$80

            .byte $61,$83,$61,$80,$61,$81

            .byte $60,$80

            .byte $60,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00
L0BCC:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00

L0BDF:      .byte $00
L0BE0:      .byte $06
L0BE1:      .byte $00
L0BE2:      .byte $00
L0BE3:      .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00

;-------------------------------------------------

L0BED:      .byte $00		; var

;-------------------------------------------------

L0BEE:      .byte $00
L0BEF:      .byte $00,$00,$00,$00,$01

;-------------------------------------------------

L0BF4:      .byte $00		; var

;-------------------------------------------------

L0BF5:      .byte $00
L0BF6:      .byte $00
L0BF7:      .byte $00
L0BF8:      .byte $00
L0BF9:      .byte $00
L0BFA:      .byte $00
L0BFB:      .byte $00
L0BFC:      .byte $00
L0BFD:      .byte $00
L0BFE:      .byte $00
L0BFF:      .byte $00

;-------------------------------------------------

L0C00:      .byte $02		; Missile locked on target ($ff)
L0C01:      .byte $AD		; Current view
L0C02:      .byte $0D		; var
L0C03:      .byte $0D		; Cabine temp
L0C04:      .byte $8D		; var
L0C05:      .byte $05		; var
L0C06:      .byte $00		; var
L0C07:      .byte $00		; var

;-------------------------------------------------

L0C08:      .byte $0D
L0C09:      .byte $85
L0C0A:      .byte $71

L0C0B:      lda L0008              ; A9 08
            sta L0070              ; 85 70
            ldx #$40               ; A2 40
            ldy #$00               ; A0 00
            rts                    ; 60

            .byte $6C,$03,$0B
            .byte $20,$0E,$0B
            .byte $6C,$89,$00
            .byte $0B,$05,$6C
            .byte $CE,$90,$47
            .byte $C9,$81,$A5
            .byte $D4,$D0,$0B
            .byte $01,$CD,$F7
            .byte $D0,$1B,$C0
            .byte $C8,$0D,$73
            .byte $79,$18

L0C34:      .byte $98
            .byte $E3,$D0,$0B
            .byte $02,$CD,$F5
            .byte $D0,$CA,$71
            .byte $E6,$FA,$D0
            .byte $C8,$70
L0C43:
            adc (L0018),y
            tya                    ; 98
            bvs L0BCC              ; 70 84
            ora $6c08
            cli                    ; 58
            .byte $FF,$FC
            jmp (L090D)            ; 6C 0D 09
            .byte $8D,$06,$F0
            .byte $4E,$D3,$CD
            sbc L0010,X            ; F5 10
            dex                    ; CA
            adc (L00E6),Y          ; 71 E6
            .byte $FA

L0C5D:      .byte $D0

;--------------------------------------------

L0C5E:      .byte $FF		; var

;--------------------------------------------

            bvs L0CD2              ; 70 71
            clc                    ; 18
            tya                    ; 98
            .byte $01,$B9
            .byte $0B,$4B
            .byte $6E,$A9,$D8
            ora #$9F               ; 09 9F
            .byte $42
            adc L0002              ; 65 02
            sta L0203              ; 8D 03 02
            sta L0207              ; 8D 07 02

            lda #$60               ; A9 60

            sta L0088              ; 85 88
            lda #$00               ; A9 00
            sta L0225              ; 8D 25 02
            sta L0229              ; 8D 29 02
            lda #$88               ; A9 88
            sta L0224              ; 8D 24 02

;--------------------------------------------

L0C86:      .byte $FF		; var

;--------------------------------------------

            plp                    ; 28
            .byte $02
            cli                    ; 58
            lda #$20               ; A9 20
            .byte $2C

            .byte $D0,$65
            sta L1E38+1              ; 8D 39 1E
            lsr A                  ; 4A
            ldx #$03               ; A2 03
            stx L0079              ; 86 79
            stx L0084              ; 86 84
            stx L0086              ; 86 86

            ldx #$00               ; A2 00
            ldy #$00               ; A0 00
            jsr LFFF4              ; OSBYTE

            ldx #$FF               ; A2 FF
            lda #$95               ; A9 95
            jsr L1C7D              ; 20 7D 1C
            lda #$90               ; A9 90
            jsr L1C4E+1              ; 20 4F 1C
L0CAE:      .byte $2C
L0CAF:
            bne L0C43
            lda #$F7               ; A9 F7
            ldx #$00               ; A2 00
L0CB5:      jsr L1C4E+1              ; 20 4F 1C

            lda #$8F               ; Check NMI claim by ROM
            ldx #$0C               ; Return ROM nr in Y
            ldy #$FF
            jsr LFFF4

            lda #$0D               ; A9 0D
            ldx #$00               ; A2 00
            jsr L1C4E+1              ; 20 4F 1C

            lda #$E1               ; A9 E1
            ldx #$80               ; A2 80
            jsr L1C4E+1              ; 20 4F 1C

L0CCF:      .byte $80		; X-pos print char
L0CD0:      .byte $FE		; Y-pos print char
L0CD1:      .byte $A2

;--------------------------------------------

L0CD2:      .byte $FF		; Energy FS
L0CD3:      .byte $FF		; Energy AS
L0CD4:      .byte $FF		; Energy 1

;--------------------------------------------

L0CD5:      .byte $20		; Laser X
L0CD6:      .byte $F4		; Laser Y
L0CD7:      .byte $CA
L0CD8:      .byte $C2
L0CD9:      .byte $04
L0CDA:      .byte $84
L0CDB:      .byte $05
L0CDC:      .byte $A9
L0CDD:      .byte $C8
L0CDE:      .byte $A2		; Max equipment items (4-9)

L0CDF:      .byte $46
L0CE0:      .byte $0B,$4F
L0CE2:      .byte $1C

L0CE3:      cpx #$03               ; E0 03
            bne L0CC4              ; D0 DD
            lda #$0D               ; A9 0D

L0CE9:      .byte $A2		; Planet status

L0CEA:      .byte $02		; Government type
L0CEB:      .byte $20		; Tech.level
L0CEC:      .byte $4F		; Population
            .byte $FF
L0CEE:      .byte $A2		; Gross productivity-lb
L0CEF:      .byte $1C		; Gross productivity-hb

L0CF0:      txs                    ; 9A
L0CF1:      inx                    ; E8
L0CF2:      ldy #$00               ; A0 00
            lda L1FF4,Y            ; B9 F4 1F
            eor L0026,X            ; 55 26
            dex                    ; CA
            iny                    ; C8
            cpy #$21               ; C0 21
            bne L0CAF              ; D0 B0
            .byte $A9

L0D00:      .byte $40
L0D01:      .byte $00
L0D02:      .byte $47,$DB

L0D04:      .byte <keyscan,>keyscan

L0D06:      .byte $00,$00

;---------------------------------------------
; Address pointers
;---------------------------------------------

            .word L3FB5		; B5 3F
            .word L1CF8		; F8 1C
            .word L0D25		; 25 0D
            .word L3FB8		; B8 3F

;---------------------------------------------

L0D10:
            php                    ; 08
            bit L0D01              ; 2C 01 0D
            bmi L0D18              ; 30 02
            plp                    ; 28
            rts                    ; 60

L0D18:
            plp                    ; 28
            jmp (L0D04)            ; 6C 04 0D

;---------------------------------------------
; ELITEA
;---------------------------------------------

L0D1C:      .byte $F0,$00
L0D1E:      .byte $00
L0D1F:      .byte $00
L0D20:      .byte $00,$00,$00
L0D23:      .byte $00
L0D24:      .byte $00

L0D25:
            lda L0D06              ; AD 06 0D
            eor #$FF               ; 49 FF
            sta L0D06              ; 8D 06 0D
            ora L0D01              ; 0D 01 0D
            bmi L0D3D              ; 30 0B
            lda LFE05              ; AD 05 FE !!!! Keyboard!!!
            ora #$20               ; 09 20
            sta LFE05              ; 8D 05 FE
            lda L00FC              ; A5 FC
            rti                    ; 40

L0D3D:      jmp (L0D02)            ; 6C 02 0D

L0D40:      lda L0900              ; AD 00 09
            sta $00                ; 85 00
            lda #$00               ; A9 00
            ldx #$01               ; A2 01
L0D49:      dec L0BFD,X            ; DE FD 0B
            bpl L0D54              ; 10 06
            sta L0BFD,X            ; 9D FD 0B
            sta L0BFB,X            ; 9D FB 0B
L0D54:      dex                    ; CA
            bpl L0D49              ; 10 F2
            ldx L00AC              ; A6 AC
            jsr L25E0              ; 20 E0 25
            jsr L25E0              ; 20 E0 25
            txa                    ; 8A
            eor #$80               ; 49 80
            tay                    ; A8
            and #$80               ; 29 80

            jmp L0D70              ; 4C 70 0D

            .byte $A1,$BB
            .byte $80,$00
            .byte $90,$01
            .byte $D6,$F1

L0D70:      sta L0088              ; 85 88
            stx L00AC              ; 86 AC
            eor #$80               ; 49 80
            sta L0089              ; 85 89
            tya                    ; 98
            bpl L0D80              ; 10 05
            eor #$FF               ; 49 FF
            clc                    ; 18
            adc #$01               ; 69 01
L0D80:      lsr A                  ; 4A
            lsr A                  ; 4A
            cmp #$08               ; C9 08
            bcs L0D88              ; B0 02
            lsr A                  ; 4A
            clc                    ; 18
L0D88:      sta L0087              ; 85 87
            ora L0088              ; 05 88
            sta L00AE              ; 85 AE
            ldx L00AD              ; A6 AD
            jsr L25E0              ; 20 E0 25
            txa                    ; 8A
            eor #$80               ; 49 80
            tay                    ; A8
            and #$80               ; 29 80
            stx L00AD              ; 86 AD
            sta L008B              ; 85 8B
            eor #$80               ; 49 80
            sta L008A              ; 85 8A
            tya                    ; 98
            bpl L0DA6              ; 10 02
            eor #$FF               ; 49 FF
L0DA6:      adc #$04               ; 69 04
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp #$03               ; C9 03
            bcs L0DB1              ; B0 01
            lsr A                  ; 4A
L0DB1:      sta L002B              ; 85 2B
            ora L008A              ; 05 8A
            sta L002A              ; 85 2A
            lda L0043              ; A5 43
            beq L0DC3              ; F0 08

            lda L008C              ; Get speed
            cmp #$28               ; C9 28
            bcs L0DC3              ; B0 02
            inc L008C              ; Increment speed
L0DC3:      lda L0042              ; A5 42
            beq L0DCD              ; F0 06
            dec L008C              ; Decrement speed
            bne L0DCD              ; D0 02
            inc L008C              ; Increment speed
L0DCD:      lda L004C              ; A5 4C
            and L0333              ; 2D 33 03
            beq L0DE1              ; F0 0D
            jsr L3902              ; 20 02 39
            lda #$28               ; ???
            jsr L4281              ; Make sound
            lda #$00               ; A9 00
            sta L0C00              ; Missile locked on target
L0DE1:      lda L0052              ; A5 52
            bpl L0DF6              ; 10 11
            lda L004B              ; A5 4B
            beq L0DF6              ; F0 0D
            ldx L0333              ; AE 33 03
            beq L0DF6              ; F0 08
            sta L0C00              ; Missile locked on target

            ldy #$0D               ; Sprite=locked
            jsr L393F              ; Plot missiles in panel

L0DF6:      lda L004D              ; A5 4D
            beq L0E01              ; F0 07
            lda L0052              ; A5 52
            bmi L0E2A              ; 30 2C
            jsr L210E              ; 20 0E 21
L0E01:      lda L0049              ; A5 49
            beq L0E08              ; F0 03
            asl L032A              ; Energy Bomb item
L0E08:      lda L004A              ; A5 4A
            and L032E              ; Escape Capsule item
            beq L0E12              ; F0 03
            jmp L1EA1              ; 4C A1 1E
L0E12:      lda L004F              ; A5 4F
            beq L0E19              ; F0 03
            jsr L267E              ; 20 7E 26
L0E19:      lda L004E              ; A5 4E
            and L0328              ; E.C.M.System item
            beq L0E2A              ; F0 0A
            lda L0030              ; E mark in panel
            bne L0E2A              ; D0 06
            dec L0BFF              ; CE FF 0B
            jsr L3912              ; 20 12 39
L0E2A:      lda L0050              ; A5 50
            and L032C              ; Docking computer item
            and L0BF4              ; 2D F4 0B
            beq L0E3C              ; F0 08
            lda L0944              ; AD 44 09
            bmi L0E3C              ; 30 03
            jmp L0F49              ; 4C 49 0F
L0E3C:      lda #$00               ; A9 00
            sta L0051              ; 85 51
            sta L008D              ; 85 8D
            lda L008C              ; Get speed
            lsr A                  ; 4A
            ror L008D              ; 66 8D
            lsr A                  ; 4A
            ror L008D              ; 66 8D
            sta L008E              ; 85 8E
            lda L0C02              ; AD 02 0C
            bne L0E7E              ; D0 2D
            lda L0048              ; A5 48
            beq L0E7E              ; F0 29

            lda L0C03              ; Cabine temp
            cmp #$F2               ; C9 F2
            bcs L0E7E              ; B0 22

            ldx L0C01              ; Current view
            lda L0310,X            ; Laser item
            beq L0E7E              ; F0 1A

            pha                    ; 48
            and #$7F               ; 29 7F
            sta L0051              ; 85 51
            sta L0BED              ; 8D ED 0B
            lda #$00               ; Laser sound
            jsr L4281              ; Make sound
            jsr L26DC              ; 20 DC 26
            pla                    ; 68
            bpl L0E79              ; 10 02
            lda #$00               ; A9 00
L0E79:      and #$FA               ; 29 FA
            sta L0C02              ; 8D 02 0C
L0E7E:      ldx #$00               ; A2 00
L0E80:      stx L00A3              ; 86 A3
            lda L0BE0,X            ; BD E0 0B
            bne L0E8A              ; D0 03
            jmp L102C              ; 4C 2C 10

L0E8A:      sta L00AB              ; TYPE
            jsr L384A              ; Set galaxy pointer $20/21
            ldy #$23               ; A0 23
L0E91:      lda (L0020),Y          ; B1 20
            sta L0053,Y            ; Galaxy data
            dey                    ; 88
            bpl L0E91              ; 10 F8
            lda L00AB              ; TYPE
            bmi L0EC1              ; 30 24
            asl A                  ; 0A
            tay                    ; A8

            lda L4ED2,Y            ; 3D Object pointer
            sta L001E
            lda L4ED3,Y
            sta L001F

            lda L032A              ; Energy Bomb item
            bpl L0EC1              ; 10 13
            cpy #$0E               ; C0 0E
            beq L0EC1              ; F0 0F
            lda L0072              ; A5 72
            and #$20               ; 29 20
            bne L0EC1              ; D0 09
            lda L0072              ; A5 72
            ora #$80               ; 09 80
            sta L0072              ; 85 72
            jsr L4259              ; 20 59 42
L0EC1:      jsr L1157              ; 20 57 11
            ldy #$23               ; A0 23
L0EC6:      lda L0053,Y            ; Galaxy data
            sta (L0020),Y          ; 91 20
            dey                    ; 88
            bpl L0EC6              ; 10 F8
            lda L0072              ; A5 72
            and #$A0               ; 29 A0
            jsr L3F40              ; 20 40 3F
            bne L0F28              ; D0 51
            lda L0053              ; Galaxy data
            ora L0056              ; 05 56
            ora L0059              ; 05 59
            bmi L0F28              ; 30 49
            ldx L00AB              ; TYPE
            bmi L0F28              ; 30 45
            cpx #$07               ; E0 07
            beq L0F2B              ; F0 44
            and #$C0               ; 29 C0
            bne L0F28              ; D0 3D
            cpx #$08               ; E0 08
            beq L0F28              ; F0 39
            cpx #$0A               ; E0 0A
            bcs L0EF6              ; B0 03
            jmp L0F73              ; 4C 73 0F
L0EF6:      lda L0329              ; Fuel scoops item
            and L0058              ; 25 58
            bpl L0F73              ; 10 76
            lda #$03               ; A9 03
            cpx #$0B               ; E0 0B
            bne L0F05              ; D0 02
            beq L0F0A              ; F0 05
L0F05:      jsr L3D24              ; Randomize $1,$2,$3
            and #$07               ; 29 07
L0F0A:      sta L0CDC              ; 8D DC 0C
            lda #$01               ; A9 01
            jsr L294A              ; 20 4A 29
            ldy #$4E               ; A0 4E
            bcs L0F61              ; B0 4B
            ldy L0CDC              ; AC DC 0C
            adc L0317,Y            ; Inventory
            sta L0317,Y            ; Inventory
            tya                    ; 98
            adc #$D0               ; 69 D0
            jsr L43C2              ; 20 C2 43

            jmp L0F64              ; 4C 64 0F
L0F28:      jmp L0F82              ; 4C 82 0F
L0F2B:      lda L0944              ; AD 44 09
            bmi L0F58              ; 30 28
            lda L0061              ; A5 61
            cmp #$D6               ; C9 D6
            bcc L0F58              ; 90 22
            jsr L3762              ; 20 62 37
            lda L0033              ; A5 33
            bmi L0F58              ; 30 1B
            cmp #$59               ; C9 59
            bcc L0F58              ; 90 17
            lda L0063              ; A5 63
            and #$7F               ; 29 7F
            cmp #$50               ; C9 50
            bcc L0F58              ; 90 0F
L0F49:      lda #$00               ; A9 00
            sta L002F              ; Hyperspace timer
            lda #$08               ; A9 08
            jsr L21F8              ; 20 F8 21
            jsr L3C79              ; 20 79 3C
            jmp L400D              ; Jump to status screen

L0F58:      lda L008C              ; Get speed
            cmp #$05
            bcc L0F6B              ; If speed<5, jump
            jmp L3F47              ; Else death

L0F61:      jsr L4245              ; 20 45 42
L0F64:      asl L0072              ; 06 72
            sec                    ; 38
            ror L0072              ; 66 72
            bne L0F82              ; D0 17

L0F6B:      lda #$01               ; Reset speed
            sta L008C              ; Set speed

            lda #$05
            bne L0F7C              ; Forced jump

L0F73:      asl L0072              ; 06 72
            sec                    ; 38
            ror L0072              ; 66 72
            lda L0076              ; A5 76
            sec                    ; 38
            ror A                  ; 6A

L0F7C:      jsr L37FC              ; 20 FC 37
            jsr L4245              ; 20 45 42

L0F82:      lda L00A6              ; Headerstatus
            bne L0FE0              ; D0 5A

            jsr L2730              ; 20 30 27

            jsr L20A9              ; 20 A9 20
            bcc L0FDD              ; 90 4F
            lda L0C00              ; Missile locked on target
            beq L0F9D              ; F0 0A
            jsr L427F              ; Make beep sound
            ldx L00A3              ; A6 A3
            ldy #$11               ; A0 11
            jsr L3906              ; 20 06 39
L0F9D:      lda L0051              ; A5 51
            beq L0FDD              ; F0 3C
            ldx #$0F               ; A2 0F
            jsr L4268              ; 20 68 42
            lda L0076              ; A5 76
            sec                    ; 38
            sbc L0051              ; E5 51
            bcs L0FD6              ; B0 29
            lda L00AB              ; TYPE
            cmp #$07               ; C9 07
            beq L0FD8              ; F0 25
            lda L0072              ; A5 72
            ora #$80               ; 09 80
            sta L0072              ; 85 72
            bcs L0FDD              ; B0 22
            jsr L3D24              ; Randomize $1,$2,$3
            bpl L0FD3              ; 10 13
            ldy #$00               ; A0 00
            and (L001E),Y          ; 31 1E
            sta L00B4              ; 85 B4
L0FC6:      beq L0FD3              ; F0 0B
            ldx #$0A               ; A2 0A
            lda #$00               ; A9 00
            jsr L2162              ; 20 62 21
            dec L00B4              ; C6 B4
            bpl L0FC6              ; 10 F3
L0FD3:      jsr L4259              ; 20 59 42
L0FD6:      sta L0076              ; 85 76
L0FD8:      lda L00AB              ; TYPE
            jsr L212D              ; 20 2D 21
L0FDD:      jsr L46C8              ; 20 C8 46
L0FE0:      ldy #$23               ; A0 23
            lda L0076              ; A5 76
            sta (L0020),Y          ; 91 20
            lda L0072              ; A5 72
            bpl L1017              ; 10 2D
            and #$20               ; 29 20
            beq L1017              ; F0 29
            lda L00AB              ; TYPE
            cmp #$02               ; C9 02
            bne L0FFC              ; D0 08
            lda L0334              ; AD 34 03
            ora #$40               ; 09 40
            sta L0334              ; 8D 34 03
L0FFC:      lda L0C06              ; AD 06 0C
            bne L1014              ; D0 13
            ldy #$0A               ; A0 0A
            lda (L001E),Y          ; B1 1E
            beq L1014              ; F0 0D
            tax                    ; AA
            iny                    ; C8
            lda (L001E),Y          ; B1 1E
            tay                    ; A8
            jsr L3232              ; Add X,Y to cash

            lda #$00               ; Text 'xxx.x CR'
            jsr L43C2              ; Print at bottomline
L1014:      jmp L3B4A              ; 4C 4A 3B

L1017:      lda L00AB              ; TYPE
            bmi L1020              ; 30 05
            jsr L3F33              ; 20 33 3F
            bcc L1014              ; 90 F4

L1020:      ldy #$1F               ; A0 1F
            lda L0072              ; A5 72
            sta (L0020),Y          ; 91 20
            ldx L00A3              ; A6 A3
            inx                    ; E8
            jmp L0E80              ; 4C 80 0E

L102C:      lda L032A              ; Energy Bomb item
            bpl L1034              ; 10 03
            asl L032A              ; Energy Bomb item

L1034:      lda L00A9              ; A5 A9
            and #$07               ; 29 07
            bne L109F              ; D0 65
            ldx L0CD4              ; Energy 1
            bpl L1051              ; 10 12

            ldx L0CD3              ; Energy AS
            jsr L3728              ; 20 28 37
            stx L0CD3              ; Energy AS

            ldx L0CD2              ; Energy FS
            jsr L3728              ; 20 28 37
            stx L0CD2              ; Energy FS

L1051:      sec                    ; 38
            lda L032B              ; Energy Unit item
            adc L0CD4              ; Energy 1
            bcs L105D              ; B0 03
            sta L0CD4              ; Energy 1
L105D:      lda L00A9              ; A5 A9
            and #$1F               ; 29 1F
            bne L10A3              ; D0 40
            lda L0BF4              ; AD F4 0B
            bne L109C              ; D0 34
            tay                    ; A8
            jsr L112A              ; 20 2A 11
            bne L109C              ; D0 2E
            ldx #$1C               ; A2 1C
L1070:      lda L0900,X            ; BD 00 09
            sta L0053,X            ; Galaxy data
            dex                    ; CA
            bpl L1070              ; 10 F8
            inx                    ; E8
            ldy #$09               ; A0 09
            jsr L1107              ; 20 07 11
            bne L109C              ; D0 1C
            ldx #$03               ; A2 03
            ldy #$0B               ; A0 0B
            jsr L1107              ; 20 07 11
            bne L109C              ; D0 13
            ldx #$06               ; A2 06
            ldy #$0D               ; A0 0D
            jsr L1107              ; 20 07 11
            bne L109C              ; D0 0A
            lda #$C0               ; A9 C0
            jsr L3F35              ; 20 35 3F
            bcc L109C              ; 90 03
            jsr L3858              ; 20 58 38
L109C:      jmp L10D5              ; 4C D5 10
L109F:      lda L00A9              ; A5 A9
            and #$1F               ; 29 1F
L10A3:      cmp #$0A               ; C9 0A
            bne L10D5              ; D0 2E
            lda #$32               ; A9 32
            cmp L0CD4              ; Energy 1
            bcc L10B2              ; 90 04
            asl A                  ; 0A
            jsr L43C2              ; 20 C2 43
L10B2:      ldy #$FF               ; A0 FF
            sty L0CE2              ; 8C E2 0C
            iny                    ; C8
            jsr L1128              ; 20 28 11
            bne L10D5              ; D0 18
            jsr L1136              ; 20 36 11
            bcs L10D5              ; B0 13
            sbc #$24               ; E9 24
            bcc L10D2              ; 90 0C
            sta L00A1              ; 85 A1
            jsr L45F4              ; 20 F4 45
            lda L00A0              ; A5 A0
            sta L0CE2              ; 8D E2 0C
            bne L10D5              ; D0 03
L10D2:      jmp L3F47              ; Death
L10D5:      lda L0BED              ; AD ED 0B
            beq L10E9              ; F0 0F
            lda L0C02              ; AD 02 0C
            cmp #$08               ; C9 08
            bcs L10E9              ; B0 08

            jsr L26FB              ; Draw lines


            lda #$00               ; A9 00
            sta L0BED              ; 8D ED 0B

L10E9:
            lda L0BFF              ; AD FF 0B
            beq L10F3              ; F0 05
            jsr L372B              ; 20 2B 37
            beq L10FD              ; F0 0A
L10F3:      lda L0030              ; E mark in panel
            beq L1100              ; F0 09
            dec L0030              ; E mark in panel
            dec L0030              ; E mark in panel
            bne L1100              ; D0 03
L10FD:      jsr L4237              ; 20 37 42
L1100:      lda L00A6              ; Headerstatus
            bne L1127              ; D0 23
            jmp L194C              ; 4C 4C 19

L1107:      lda L0053,Y            ; Galaxy data
            asl A                  ; 0A
            sta L003E              ; 85 3E
            lda L0054,Y            ; B9 54 00
            rol A                  ; 2A
            sta L003F              ; 85 3F
            lda #$00               ; A9 00
            ror A                  ; 6A
            sta L0040              ; 85 40
            jsr L134F              ; 20 4F 13
            sta L0055,X            ; 95 55
            ldy L003E              ; A4 3E
            sty L0053,X            ; Galaxy data
            ldy L003F              ; A4 3F
            sty L0054,X            ; 94 54
            and #$7F               ; 29 7F
L1127:      rts                    ; 60

L1128:      lda #$00               ; A9 00
L112A:      ora L0902,Y            ; 19 02 09
            ora L0905,Y            ; 19 05 09
            ora L0908,Y            ; 19 08 09
            and #$7F               ; 29 7F
            rts                    ; 60

L1136:      lda L0901,Y            ; B9 01 09
            jsr L23F0              ; 20 F0 23
            sta L00A1              ; 85 A1
            lda L0904,Y            ; B9 04 09
            jsr L23F0              ; 20 F0 23
            adc L00A1              ; 65 A1
            bcs L1154              ; B0 0C
            sta L00A1              ; 85 A1
            lda L0907,Y            ; B9 07 09
            jsr L23F0              ; 20 F0 23
            adc L00A1              ; 65 A1
            bcc L1156              ; 90 02
L1154:      lda #$FF               ; A9 FF
L1156:      rts                    ; 60

L1157:      lda L0072              ; A5 72
            and #$A0               ; 29 A0
            bne L1182              ; D0 25
            lda L00A9              ; A5 A9
            eor L00A3              ; 45 A3
            and #$0F               ; 29 0F
            bne L1168              ; D0 03
            jsr L44B5              ; 20 B5 44
L1168:      ldx L00AB              ; TYPE
            bpl L116F              ; 10 03
            jmp L14D3              ; 4C D3 14

L116F:      lda L0073              ; A5 73
            bpl L1182              ; 10 0F
            cpx #$08               ; E0 08
            beq L117F              ; F0 08
            lda L00A9              ; A5 A9
            eor L00A3              ; 45 A3
            and #$07               ; 29 07
            bne L1182              ; D0 03

L117F:      jsr L1F42              ; 20 42 1F

L1182:      jsr L28A4              ; 20 A4 28
            lda L006E              ; A5 6E
            asl A                  ; 0A
            asl A                  ; 0A
            sta L00A0              ; 85 A0
            lda L005D              ; A5 5D
            and #$7F               ; 29 7F
            jsr L242A              ; 20 2A 24
            sta L00A1              ; 85 A1
            lda L005D              ; A5 5D
            ldx #$00               ; A2 00
            jsr L12F8              ; 20 F8 12
            lda L005F              ; A5 5F
            and #$7F               ; 29 7F
            jsr L242A              ; 20 2A 24
            sta L00A1              ; 85 A1
            lda L005F              ; A5 5F
            ldx #$03               ; A2 03
            jsr L12F8              ; 20 F8 12
            lda L0061              ; A5 61
            and #$7F               ; 29 7F
            jsr L242A              ; 20 2A 24
            sta L00A1              ; 85 A1
            lda L0061              ; A5 61
            ldx #$06               ; A2 06
            jsr L12F8              ; 20 F8 12
            lda L006E              ; A5 6E
            clc                    ; 18
            adc L006F              ; 65 6F
            bpl L11C4              ; 10 02
            lda #$00               ; A9 00
L11C4:      ldy #$0F               ; A0 0F
            cmp (L001E),Y          ; D1 1E
            bcc L11CC              ; 90 02
            lda (L001E),Y          ; B1 1E
L11CC:      sta L006E              ; 85 6E
            lda #$00               ; A9 00
            sta L006F              ; 85 6F
            ldx L0087              ; A6 87
            lda L0053              ; Galaxy data
            eor #$FF               ; 49 FF
            sta L001B              ; 85 1B
            lda L0054              ; A5 54
            jsr L245A              ; 20 5A 24
            sta L001D              ; 85 1D
            lda L0089              ; A5 89
            eor L0055              ; 45 55
            ldx #$03               ; A2 03
            jsr L149E              ; 20 9E 14
            sta L00BF              ; 85 BF
            lda L001C              ; A5 1C
            sta L00BD              ; 85 BD
            eor #$FF               ; 49 FF
            sta L001B              ; 85 1B
            lda L001D              ; A5 1D
            sta L00BE              ; 85 BE
            ldx L002B              ; A6 2B
            jsr L245A              ; 20 5A 24
            sta L001D              ; 85 1D
            lda L00BF              ; A5 BF
            eor L008A              ; 45 8A
            ldx #$06               ; A2 06
            jsr L149E              ; 20 9E 14
            sta L005B              ; 85 5B
            lda L001C              ; A5 1C
            sta L0059              ; 85 59
            eor #$FF               ; 49 FF
            sta L001B              ; 85 1B
            lda L001D              ; A5 1D
            sta L005A              ; 85 5A
            jsr L245C              ; 20 5C 24
            sta L001D              ; 85 1D
            lda L00BF              ; A5 BF
            sta L0058              ; 85 58
            eor L008A              ; 45 8A
            eor L005B              ; 45 5B
            bpl L1234              ; 10 0F
            lda L001C              ; A5 1C
            adc L00BD              ; 65 BD
            sta L0056              ; 85 56
            lda L001D              ; A5 1D
            adc L00BE              ; 65 BE
            sta L0057              ; 85 57
            jmp L1254              ; 4C 54 12
L1234:      lda L00BD              ; A5 BD
            sbc L001C              ; E5 1C
            sta L0056              ; 85 56
            lda L00BE              ; A5 BE
            sbc L001D              ; E5 1D
            sta L0057              ; 85 57
            bcs L1254              ; B0 12
            lda #$01               ; A9 01
            sbc L0056              ; E5 56
            sta L0056              ; 85 56
            lda #$00               ; A9 00
            sbc L0057              ; E5 57
            sta L0057              ; 85 57
            lda L0058              ; A5 58
            eor #$80               ; 49 80
            sta L0058              ; 85 58
L1254:      ldx L0087              ; A6 87
            lda L0056              ; A5 56
            eor #$FF               ; 49 FF
            sta L001B              ; 85 1B
            lda L0057              ; A5 57
            jsr L245A              ; 20 5A 24
            sta L001D              ; 85 1D
            lda L0088              ; A5 88
            eor L0058              ; 45 58
            ldx #$00               ; A2 00
            jsr L149E              ; 20 9E 14
            sta L0055              ; 85 55
            lda L001D              ; A5 1D
            sta L0054              ; 85 54
            lda L001C              ; A5 1C
            sta L0053              ; Galaxy data
L1276:      lda L008C              ; Get speed
            sta L00A1              ; 85 A1
            lda #$80               ; A9 80
            ldx #$06               ; A2 06
            jsr L12FA              ; 20 FA 12

            ldy #$09               ; A0 09
            jsr L13AB              ; 20 AB 13

            ldy #$0F               ; A0 0F
            jsr L13AB              ; 20 AB 13

            ldy #$15               ; A0 15
            jsr L13AB              ; 20 AB 13

            lda L0071              ; A5 71
            and #$80               ; 29 80
            sta L00BB              ; 85 BB
            lda L0071              ; A5 71
            and #$7F               ; 29 7F
            beq L12B9              ; F0 1D
            cmp #$7F               ; C9 7F
            sbc #$00               ; E9 00
            ora L00BB              ; 05 BB
            sta L0071              ; 85 71
            ldx #$0F               ; A2 0F
            ldy #$09               ; A0 09
            jsr L1412              ; 20 12 14
            ldx #$11               ; A2 11
            ldy #$0B               ; A0 0B
            jsr L1412              ; 20 12 14
            ldx #$13               ; A2 13
            ldy #$0D               ; A0 0D
            jsr L1412              ; 20 12 14
L12B9:      lda L0070              ; A5 70
            and #$80               ; 29 80
            sta L00BB              ; 85 BB
            lda L0070              ; A5 70
            and #$7F               ; 29 7F
            beq L12E2              ; F0 1D
            cmp #$7F               ; C9 7F
            sbc #$00               ; E9 00
            ora L00BB              ; 05 BB
            sta L0070              ; 85 70
            ldx #$0F               ; A2 0F
            ldy #$15               ; A0 15
            jsr L1412              ; 20 12 14
            ldx #$11               ; A2 11
            ldy #$17               ; A0 17
            jsr L1412              ; 20 12 14
            ldx #$13               ; A2 13
            ldy #$19               ; A0 19
            jsr L1412              ; 20 12 14
L12E2:      lda L0072              ; A5 72
            and #$A0               ; 29 A0
            bne L12F1              ; D0 09
            lda L0072              ; A5 72
            ora #$10               ; 09 10
            sta L0072              ; 85 72
            jmp L28A4              ; 4C A4 28
L12F1:      lda L0072              ; A5 72
            and #$EF               ; 29 EF
            sta L0072              ; 85 72
            rts                    ; 60
L12F8:      and #$80               ; 29 80
L12FA:      asl A                  ; 0A
            sta L00A2              ; 85 A2
            lda #$00               ; A9 00
            ror A                  ; 6A
            sta L00D1              ; 85 D1
            lsr L00A2              ; 46 A2
            eor L0055,X            ; 55 55
            bmi L131D              ; 30 15
            lda L00A1              ; A5 A1
            adc L0053,X            ; Galaxy data
            sta L0053,X            ; Galaxy data
            lda L00A2              ; A5 A2
            adc L0054,X            ; 75 54
            sta L0054,X            ; 95 54
            lda L0055,X            ; B5 55
            adc #$00               ; 69 00
            ora L00D1              ; 05 D1
            sta L0055,X            ; 95 55
            rts                    ; 60
L131D:      lda L0053,X            ; Galaxy data
            sec                    ; 38
            sbc L00A1              ; E5 A1
            sta L0053,X            ; Galaxy data
            lda L0054,X            ; B5 54
            sbc L00A2              ; E5 A2
            sta L0054,X            ; 95 54
            lda L0055,X            ; B5 55
            and #$7F               ; 29 7F
            sbc #$00               ; E9 00
            ora #$80               ; 09 80
            eor L00D1              ; 45 D1
            sta L0055,X            ; 95 55
            bcs L134E              ; B0 16
            lda #$01               ; A9 01
            sbc L0053,X            ; Galaxy data
            sta L0053,X            ; Galaxy data
            lda #$00               ; A9 00
            sbc L0054,X            ; F5 54
            sta L0054,X            ; 95 54
            lda #$00               ; A9 00
            sbc L0055,X            ; F5 55
            and #$7F               ; 29 7F
            ora L00D1              ; 05 D1
            sta L0055,X            ; 95 55
L134E:      rts                    ; 60
L134F:      lda L0040              ; A5 40
            sta L00A2              ; 85 A2
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            eor L0055,X            ; 55 55
            bmi L1373              ; 30 18
            lda L003E              ; A5 3E
            clc                    ; 18
            adc L0053,X            ; Galaxy data
            sta L003E              ; 85 3E
            lda L003F              ; A5 3F
            adc L0054,X            ; 75 54
            sta L003F              ; 85 3F
            lda L0040              ; A5 40
            adc L0055,X            ; 75 55
            and #$7F               ; 29 7F
            ora L00D1              ; 05 D1
            sta L0040              ; 85 40
            rts                    ; 60
L1373:      lda L00A2              ; A5 A2
            and #$7F               ; 29 7F
            sta L00A2              ; 85 A2
            lda L0053,X            ; Galaxy data
            sec                    ; 38
            sbc L003E              ; E5 3E
            sta L003E              ; 85 3E
            lda L0054,X            ; B5 54
            sbc L003F              ; E5 3F
            sta L003F              ; 85 3F
            lda L0055,X            ; B5 55
            and #$7F               ; 29 7F
            sbc L00A2              ; E5 A2
            ora #$80               ; 09 80
            eor L00D1              ; 45 D1
            sta L0040              ; 85 40
            bcs L13AA              ; B0 16
            lda #$01               ; A9 01
            sbc L003E              ; E5 3E
            sta L003E              ; 85 3E
            lda #$00               ; A9 00
            sbc L003F              ; E5 3F
            sta L003F              ; 85 3F
            lda #$00               ; A9 00
            sbc L0040              ; E5 40
            and #$7F               ; 29 7F
            ora L00D1              ; 05 D1
            sta L0040              ; 85 40
L13AA:      rts                    ; 60
L13AB:      lda L00AE              ; A5 AE
            sta L00A0              ; 85 A0
            ldx L0055,Y            ; B6 55
            stx L00A1              ; 86 A1
            ldx L0056,Y            ; B6 56
            stx L00A2              ; 86 A2
            ldx L0053,Y            ; Galaxy data
            stx L001B              ; 86 1B
            lda L0054,Y            ; B9 54 00
            eor #$80               ; 49 80
            jsr L24DD              ; 20 DD 24
            sta L0056,Y            ; 99 56 00
            stx L0055,Y            ; 96 55
            stx L001B              ; 86 1B
            ldx L0053,Y            ; Galaxy data
            stx L00A1              ; 86 A1
            ldx L0054,Y            ; B6 54
            stx L00A2              ; 86 A2
            lda L0056,Y            ; B9 56 00
            jsr L24DD              ; 20 DD 24
            sta L0054,Y            ; 99 54 00
            stx L0053,Y            ; Galaxy data
            stx L001B              ; 86 1B
            lda L002A              ; A5 2A
            sta L00A0              ; 85 A0
            ldx L0055,Y            ; B6 55
            stx L00A1              ; 86 A1
            ldx L0056,Y            ; B6 56
            stx L00A2              ; 86 A2
            ldx L0057,Y            ; B6 57
            stx L001B              ; 86 1B
            lda L0058,Y            ; B9 58 00
            eor #$80               ; 49 80
            jsr L24DD              ; 20 DD 24
            sta L0056,Y            ; 99 56 00
            stx L0055,Y            ; 96 55
            stx L001B              ; 86 1B
            ldx L0057,Y            ; B6 57
            stx L00A1              ; 86 A1
            ldx L0058,Y            ; B6 58
            stx L00A2              ; 86 A2
            lda L0056,Y            ; B9 56 00
            jsr L24DD              ; 20 DD 24
            sta L0058,Y            ; 99 58 00
            stx L0057,Y            ; 96 57
            rts                    ; 60
L1412:      lda L0054,X            ; B5 54
            and #$7F               ; 29 7F
            lsr A                  ; 4A
            sta L00D1              ; 85 D1
            lda L0053,X            ; Galaxy data
            sec                    ; 38
            sbc L00D1              ; E5 D1
            sta L00A1              ; 85 A1
            lda L0054,X            ; B5 54
            sbc #$00               ; E9 00
            sta L00A2              ; 85 A2
            lda L0053,Y            ; Galaxy data
            sta L001B              ; 85 1B
            lda L0054,Y            ; B9 54 00
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            lda L0054,Y            ; B9 54 00
            and #$7F               ; 29 7F
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            ora L00D1              ; 05 D1
            eor L00BB              ; 45 BB
            stx L00A0              ; 86 A0
            jsr L24E0              ; 20 E0 24
            sta L003E              ; 85 3E
            stx L003D              ; 86 3D
            ldx L00A0              ; A6 A0
            lda L0054,Y            ; B9 54 00
            and #$7F               ; 29 7F
            lsr A                  ; 4A
            sta L00D1              ; 85 D1
            lda L0053,Y            ; Galaxy data
            sec                    ; 38
            sbc L00D1              ; E5 D1
            sta L00A1              ; 85 A1
            lda L0054,Y            ; B9 54 00
            sbc #$00               ; E9 00
            sta L00A2              ; 85 A2
            lda L0053,X            ; Galaxy data
            sta L001B              ; 85 1B
            lda L0054,X            ; B5 54
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            lda L0054,X            ; B5 54
            and #$7F               ; 29 7F
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            ora L00D1              ; 05 D1
            eor #$80               ; 49 80
            eor L00BB              ; 45 BB
            stx L00A0              ; 86 A0
            jsr L24E0              ; 20 E0 24
            sta L0054,Y            ; 99 54 00
            stx L0053,Y            ; Galaxy data
            ldx L00A0              ; A6 A0
            lda L003D              ; A5 3D
            sta L0053,X            ; Galaxy data
            lda L003E              ; A5 3E
            sta L0054,X            ; 95 54
            rts                    ; 60
L149E:      tay                    ; A8
            eor L0055,X            ; 55 55
            bmi L14B2              ; 30 0F
            lda L001C              ; A5 1C
            clc                    ; 18
            adc L0053,X            ; Galaxy data
            sta L001C              ; 85 1C
            lda L001D              ; A5 1D
            adc L0054,X            ; 75 54
            sta L001D              ; 85 1D
            tya                    ; 98
            rts                    ; 60
L14B2:      lda L0053,X            ; Galaxy data
            sec                    ; 38
            sbc L001C              ; E5 1C
            sta L001C              ; 85 1C
            lda L0054,X            ; B5 54
            sbc L001D              ; E5 1D
            sta L001D              ; 85 1D
            bcc L14C5              ; 90 04
            tya                    ; 98
            eor #$80               ; 49 80
            rts                    ; 60
L14C5:      lda #$01               ; A9 01
            sbc L001C              ; E5 1C
            sta L001C              ; 85 1C
            lda #$00               ; A9 00
            sbc L001D              ; E5 1D
            sta L001D              ; 85 1D
            tya                    ; 98
L14D2:      rts                    ; 60
L14D3:      txa                    ; 8A
            lsr A                  ; 4A
            bcs L14D2              ; B0 FB
            lda L00AE              ; A5 AE
            eor #$80               ; 49 80
            sta L00A0              ; 85 A0
            lda L0053              ; Galaxy data
            sta L001B              ; 85 1B
            lda L0054              ; A5 54
            sta L001C              ; 85 1C
            lda L0055              ; A5 55
            jsr L2365              ; 20 65 23
            ldx #$03               ; A2 03
            jsr L134F              ; 20 4F 13
            lda L003E              ; A5 3E
            sta L00BD              ; 85 BD
            sta L001B              ; 85 1B
            lda L003F              ; A5 3F
            sta L00BE              ; 85 BE
            sta L001C              ; 85 1C
            lda L002A              ; A5 2A
            sta L00A0              ; 85 A0
            lda L0040              ; A5 40
            sta L00BF              ; 85 BF
            jsr L2365              ; 20 65 23
            ldx #$06               ; A2 06
            jsr L134F              ; 20 4F 13
            lda L003E              ; A5 3E
            sta L001B              ; 85 1B
            sta L0059              ; 85 59
            lda L003F              ; A5 3F
            sta L001C              ; 85 1C
            sta L005A              ; 85 5A
            lda L0040              ; A5 40
            sta L005B              ; 85 5B
            eor #$80               ; 49 80
            jsr L2365              ; 20 65 23
            lda L0040              ; A5 40
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            eor L00BF              ; 45 BF
            bmi L1541              ; 30 17
            lda L003D              ; A5 3D
            adc L00BC              ; 65 BC
            lda L003E              ; A5 3E
            adc L00BD              ; 65 BD
            sta L0056              ; 85 56
            lda L003F              ; A5 3F
            adc L00BE              ; 65 BE
            sta L0057              ; 85 57
            lda L0040              ; A5 40
            adc L00BF              ; 65 BF
            jmp L1574              ; 4C 74 15
L1541:      lda L003D              ; A5 3D
            sec                    ; 38
            sbc L00BC              ; E5 BC
            lda L003E              ; A5 3E
            sbc L00BD              ; E5 BD
            sta L0056              ; 85 56
            lda L003F              ; A5 3F
            sbc L00BE              ; E5 BE
            sta L0057              ; 85 57
            lda L00BF              ; A5 BF
            and #$7F               ; 29 7F
            sta L001B              ; 85 1B
            lda L0040              ; A5 40
            and #$7F               ; 29 7F
            sbc L001B              ; E5 1B
            sta L001B              ; 85 1B
            bcs L1574              ; B0 12
            lda #$01               ; A9 01
            sbc L0056              ; E5 56
            sta L0056              ; 85 56
            lda #$00               ; A9 00
            sbc L0057              ; E5 57
            sta L0057              ; 85 57
            lda #$00               ; A9 00
            sbc L001B              ; E5 1B
            ora #$80               ; 09 80
L1574:      eor L00D1              ; 45 D1
            sta L0058              ; 85 58
            lda L00AE              ; A5 AE
            sta L00A0              ; 85 A0
            lda L0056              ; A5 56
            sta L001B              ; 85 1B
            lda L0057              ; A5 57
            sta L001C              ; 85 1C
            lda L0058              ; A5 58
            jsr L2365              ; 20 65 23
            ldx #$00               ; A2 00
            jsr L134F              ; 20 4F 13
            lda L003E              ; A5 3E
            sta L0053              ; Galaxy data
            lda L003F              ; A5 3F
            sta L0054              ; 85 54
            lda L0040              ; A5 40
            sta L0055              ; 85 55
            jmp L1276              ; 4C 76 12

;------------------------------------------------
; Commander data
; Start ELITEB.TXT
;------------------------------------------------

L159D:      .byte "JAMESON"
L15A4:      .byte $0D

L15A5:      .byte $00
            .byte $14,$AD,$4A,$5A,$48,$02,$53
            .byte $B7,$00,$00,$03,$E8,$46,$00,$00
            .byte $0F,$00,$00,$00,$00,$00,$16,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$03,$00,$10,$0F,$11
            .byte $00,$03,$1C,$0E,$00,$00,$0A,$00
            .byte $11,$3A,$07,$09,$08,$00,$00,$00
            .byte $00,$80

L15EF:      .byte $AA
L15F0:      .byte $03		; Checksum data

;------------------------------------------------
; Galaxy
;------------------------------------------------

L15F1:
            .word L0900+0*36,L0900+1*36,L0900+2*36,L0900+3*36,L0900+4*36,L0900+5*36
            .word L0900+6*36,L0900+7*36,L0900+8*36,L0900+9*36,L0900+10*36,L0900+11*36
            .word L0900+12*36

;------------------------------------------------
; Pixeldata mask line
;------------------------------------------------

L160B:      .byte $80,$40,$20,$10,$08,$04,$02,$01

;------------------------------------------------

L1613:      .byte $80,$40

;------------------------------------------------
; Pixeldata gyro pointer
;------------------------------------------------

L1615:      .byte $C0,$30,$0C,$03

;------------------------------------------------
; Pixeldata mask circle
;------------------------------------------------

L1619:      .byte $C0,$C0,$60,$30,$18,$0C,$06,$03

;------------------------------------------------
; General line plot routine
;
;  L001B = dx
;  L00A0 = dy
;
;  L0031 = X1
;  L0032 = Y1
;  L0033 = X2
;  L0034 = Y2
;
;  L00A1 = Pixel data
;  L00B1 = Swap
;------------------------------------------------

maskbyte:
	.byte 0
wipebyte:
	.byte 0

L1621:      sty L00A4              ; YSAV

            lda #$80               ; Set vars
            sta L00A2
            sta L0007

            asl A                  ; Swap=0
            sta L00B1

            lda L0033              ; Calculate dx
            sbc L0031              ; x1
            bcs L1636              ; If x2<x1, invert dx

            eor #$FF               ; Negative
            adc #$01
L1636:      sta L001B              ; Store dx

            sec                    ; Calculate dy
            lda L0034
            sbc L0032
            bcs L1643              ; If y2<y1, invert dy

            eor #$FF               ; Negative
            adc #$01
L1643:      sta L00A0              ; Store dy

            cmp L001B              ; Check if dx<dy
            bcc L164C              ; Plot line dx>dy
            jmp L1722              ; Plot line dx<=dy

;--------------------------------------------
; Plot line dx>dy (Horizontal)
;--------------------------------------------

L164C:      ldx L0031              ; Check if x1<x2
            cpx L0033
            bcc L1663              ; Jump if x1<x2

            dec L00B1              ; Swap=-1

            lda L0033              ; Switch x1<>x2, y1<>y2
            sta L0031
            stx L0033
            tax
            lda L0034
            ldy L0032
            sta L0032
            sty L0034

L1663:      lda L0032              ; Convert x,y -> screenaddress
            lsr A
            lsr A
            lsr A
	clc
	adc #>$8000
            sta L0008
	lda L0032
	and #$07
	tay

;            lsr A
;            ror L0007
;            lsr A
;            ror L0007
;            adc L0008
;            adc #$58               ; Add hb-screenaddress
;            sta L0008
;	
;            txa
;            and #$F8
;            adc L0007
;            sta L0007
;            bcc L1681
;            inc L0008

	txa
	lsr a
	lsr a
	lsr a
	sta L0007
L1681:
;            lda L0032              ; Get line ptr
;            and #$07
;            tay

            txa                    ; Get pixel ptr
            and #$07
            tax

            lda L160B,X            ; Get pixelmask
            sta L00A1              ; Pixeldata

            lda L00A0              ; A5 A0
            ldx #$FE               ; A2 FE
            stx L00A0              ; 86 A0
L1695:      asl A                  ; 0A
            bcs L169C              ; B0 04
            cmp L001B              ; C5 1B
            bcc L169F              ; 90 03
L169C:      sbc L001B              ; E5 1B
            sec                    ; 38
L169F:      rol L00A0              ; 26 A0
            bcs L1695              ; B0 F2
            ldx L001B              ; A6 1B
            inx                    ; E8

            lda L0034              ; Get y2
            sbc L0032              ; Check if y2>y1
            bcs L16E6              ; If y2>y1 jump

            lda L00B1              ; Get Swap
            bne L16B7              ; If <>0 jump
            dex
L16B1:

	lda L0008
	cmp maskbyte		; MAKE VAR!!!
	bcs L16B7

	sty tmp_y
	lda rowbyte,y
	tay
            lda L00A1              ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

L16B7:      lsr L00A1              ; Shift pixelmask
            bcc L16C7              ; Check overflow
            ror L00A1              ; Reset pixel mask

;            lda L0007              ; Select 1 byte to the right
;            adc #$08
;            sta L0007
;            bcc L16C7
;            inc L0008

	inc L0007

L16C7:      lda L00A2              ; ??
            adc L00A0
            sta L00A2
            bcc L16E0

            dey                    ; Select 1 line up
            bpl L16E0              ; If no top line cross, skip

;            lda L0007              ; Top line cross
;            sbc #$40
;            sta L0007
;            lda L0008
;            sbc #$01
;            sta L0008
	dec L0008
            ldy #$07

L16E0:      dex                    ; Next pixel
            bne L16B1              ; If not last pixel repeat

            ldy L00A4              ; YSAV
            rts

;----------------------------------------------

L16E6:      lda L00B1              ; Get Swap
            beq L16F1 
            dex
L16EB:
	lda L0008
	cmp maskbyte		; MAKE VAR!!!
	bcs L16F1

	sty tmp_y
	lda rowbyte,y
	tay
            lda L00A1              ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

L16F1:      lsr L00A1              ; Shift pixelmask
            bcc L1701              ; Check overflow
            ror L00A1              ; Reset pixel mask

;            lda L0007              ; Select 1 byte to the right
;            adc #$08
;            sta L0007
;            bcc L1701
;            inc L0008
	inc L0007

L1701:      lda L00A2              ; ??
            adc L00A0
            sta L00A2
            bcc L171C

            iny                    ; Select 1 line below
            cpy #$08               ; Check bottom line cross
            bne L171C              ; If not, skip

;            lda L0007              ; Bottom border cross
;            adc #$3F
;            sta L0007
;            lda L0008
;            adc #$01
;            sta L0008
	inc L0008
            ldy #$00

L171C:      dex                    ; Next pixel
            bne L16EB              ; If not last pixel repeat

            ldy L00A4              ; YSAV
            rts

;--------------------------------------------
; Plot line dx<dy vertical
;--------------------------------------------

L1722:      ldy L0032              ; Check if y1>y2
            tya
            ldx L0031
            cpy L0034
            bcs L173B              ; Jump if y1>y2

            dec L00B1              ; Swap=-1

            lda L0033              ; Switch x1<>x2, y1<>y2
            sta L0031
            stx L0033
            tax
            lda L0034
            sta L0032
            sty L0034
            tay

L173B:      lsr A                  ; Convert x,y -> screenaddress
            lsr A
            lsr A
	clc
	adc #>$8000
            sta L0008
;            lsr A
;            ror L0007
;            lsr A
;            ror L0007
;            adc L0008
;            adc #$58               ; Add hb-screenaddress
;            sta L0008
            txa
;            and #$F8
;            adc L0007
;            sta L0007
;            bcc L1757
;            inc L0008
	lsr a
	lsr a
	lsr a
	sta L0007
L1757:
;            lda L0032              ; Get line ptr
;            and #$07
;            tay

            txa                    ; Get pixel ptr
            and #$07
            tax

            lda L160B,X            ; Get pixelmask
            sta L00A1              ; Pixeldata

	lda L0032
	and #$07
	tay

            lda L001B              ; A5 1B
            ldx #$01               ; A2 01
            stx L001B              ; 86 1B
L176B:      asl A                  ; 0A
            bcs L1772              ; B0 04
            cmp L00A0              ; C5 A0
            bcc L1775              ; 90 03
L1772:      sbc L00A0              ; E5 A0
            sec                    ; 38
L1775:      rol L001B              ; 26 1B
            bcc L176B              ; 90 F2
            ldx L00A0              ; A6 A0
            inx                    ; E8

            lda L0033              ; Get x2
            sbc L0031              ; Check if x2<x1
            bcc L17BE              ; If x2<x1 jump

            clc
            lda L00B1              ; Get Swap
            beq L178E              ; If =0 jump

            dex                    ; Next pixel
L1788:
	lda L0008
	cmp maskbyte		; MAKE VAR!!!
	bcs L178E

	sty tmp_y
	lda rowbyte,y
	tay
            lda L00A1              ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

L178E:      dey                    ; Select 1 line up
            bpl L179F              ; If no top line cross, skip

;            lda L0007              ; Select byte left/up
;            sbc #$3F
;            sta L0007
;            lda L0008
;            sbc #$01
;            sta L0008
	dec L0008
            ldy #$07

L179F:      lda L00A2              ; ??
            adc L001B              ; 65 1B
            sta L00A2              ; 85 A2
            bcc L17B8              ; 90 11

            lsr L00A1              ; Shift pixelmask
            bcc L17B8              ; Check overflow
            ror L00A1              ; Reset pixel mask
 
;            lda L0007              ; Select 1 byte to the right
;            adc #$08
;            sta L0007
;            bcc L17B8
;            inc L0008
	inc L0007

            clc

L17B8:      dex                    ; Next pixel
            bne L1788              ; If not last pixel, repeat

            ldy L00A4              ; YSAV
            rts

;--------------------------------------------

L17BE:      lda L00B1              ; Get Swap
            beq L17C9              ; if =0, jump

            dex                    ; Next pixel
L17C3:
	lda L0008
	cmp maskbyte		; MAKE VAR!!!
	bcs L17C9

	sty tmp_y
	lda rowbyte,y
	tay
            lda L00A1              ; Get pixelmask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

L17C9:      dey                    ; Select 1 line up
            bpl L17DA              ; If no top line cross, skip
	dec L0008
;            lda L0007              ; Select 1 byte left/up
;            sbc #$3F
;            sta L0007
;            lda L0008
;            sbc #$01
;            sta L0008
            ldy #$07

L17DA:      lda L00A2              ; ??
            adc L001B
            sta L00A2
            bcc L17F3

            asl L00A1              ; Shift pixelmask
            bcc L17F3              ; Check overflow
            rol L00A1              ; Reset pixelmask

;            lda L0007              ; Select 1 byte to the left
;            sbc #$07
;            sta L0007
;            bcs L17F2
;            dec L0008
	dec L0007

L17F2:      clc

L17F3:      dex                    ; Next pixel
            bne L17C3              ; If not last pixel, repeat

            ldy L00A4              ; YSAV
            rts

rowbyte:
	.byte $00,$20,$40,$60,$80,$a0,$c0,$e0
tmp_y:
	.byte 0

;--------------------------------------------
; Flush input buffer
;--------------------------------------------

L17F9:
;            lda #$0F               ; *FX 15,15
;            tax
;            jmp LFFF4              ; OSBYTE

;--------------------------------------------
; Plot header as token
; Draw line under header (2,19)-(254,19)
;
; A = Token
;--------------------------------------------

L17FF:
	jsr L34CB		; De-token
L1802:
	lda #$10		; CHAR6x8 #$13
	bne L180A		; Forced jump
L1806:
	lda #$14		; Line pos beneath header CHAR6x8 #$17
;            inc L002D		; Cursor Y CHAR6x8

L180A:
	sta L0032		; Set y1

	ldx #$02
	stx L0031		; Set x1

	ldx #$FE
	stx L0033		; Set x2
L1814:
	ldx L0032		; Get y1
	stx L0034		; Set y2
	jmp L1621		; Plot line

;--------------------------------------------
;
;--------------------------------------------

L181B:      jsr L24E0              ; 20 E0 24

            sta L0027              ; 85 27
            txa                    ; 8A
            sta L0CAE,Y            ; 99 AE 0C

;--------------------------------------------
; Pixel 2
;--------------------------------------------

L1824:
	lda L0031		; Get x1
	bpl L182D		; If x1<128, jump
	eor #$7F		; Else negative
	clc
	adc #$01
L182D:
	eor #$80		; 128<=x1<=255
	tax			; AA

	lda L0032		; Get y1
	and #$7F		; 0<=y1<=127

;	cmp #$60
	cmp #$43		; CHAR8x6
	bcs L1892		; If y1>=96, jump

	lda L0032		; Get y1
;	cmp #$73		; CHAR8x6
	bpl L1840		; If y1<128, jump
	eor #$7F		; Else negative
	adc #$01
L1840:
	sta L00D1              ; 85 D1
;	lda #$61               ; A9 61
	lda #$44               ; A9 61
	sbc L00D1              ; E5 D1

;--------------------------------------------
; Pixel
;
; X=x, A=y
;--------------------------------------------

L1846:
            sty L0006              ; Store Y

	pha			; Save Y-coord

	lsr a			; Calculate hb-screen
	lsr a			; hb=$80+Y/8
	lsr a
	clc
	adc #>$8000
	sta L0008

	pla			; Y=line pointer
	and #$07
	tay

	txa			; Calculate lb-screen
	lsr a			; lb=X/8
	lsr a
	lsr a
	sta L0007
L1869:
	txa                    ; Set pixel mask ptr
	and #$07
	tax

	lda L00A7
	cmp #$90
	bcs L1889

	sty tmp_y
	lda rowbyte,y
	tay
	lda L1619,X		; Get pixel mask
	eor (L0007),Y		; Plot pixel on screen
	sta (L0007),Y
	ldy tmp_y

	lda L00A7
	cmp #$50
	bcs L1890

	dey			; Point to 1 line up
	bpl L1889		; If no page boundry, skip

	ldy #$01		; Reset line ptr
L1889:
	sty tmp_y
	lda rowbyte,y
	tay
	lda L1619,X		; Get pixel mask
	eor (L0007),Y		; Plot pixel on screen
	sta (L0007),Y
	ldy tmp_y
L1890:
	ldy L0006		; A4 06
L1892:
	rts	

;--------------------------------------------
; BLINE
;--------------------------------------------

L1893:      txa                    ; 8A
            adc L00E0              ; 65 E0
            sta L0084              ; 85 84
            lda L00E1              ; A5 E1
            adc L00D1              ; 65 D1
            sta L0085              ; 85 85

            lda L00B3              ; Flag
            beq L18B4              ; F0 12
            inc L00B3              ; E6 B3

L18A4:      ldy L0077              ; LSP
            lda #$FF               ; A9 FF
            cmp L0C85,Y            ; D9 85 0C
            beq L1915              ; F0 68
            sta L0C86,Y            ; 99 86 0C
            inc L0077              ; E6 77
            bne L1915              ; D0 61

L18B4:      lda L007E              ; VDU stat
            sta L0031              ; Set x1
            lda L007F              ; A5 7F
            sta L0032              ; Set y1
            lda L0080              ; A5 80
            sta L0033              ; 85 33
            lda L0081              ; A5 81
            sta L0034              ; 85 34
            lda L0082              ; A5 82
            sta L0035              ; 85 35
            lda L0083              ; A5 83
            sta L0036              ; 85 36
            lda L0084              ; A5 84
            sta L0037              ; 85 37
            lda L0085              ; A5 85
            sta L0038              ; 85 38
            jsr L4DAC              ; 20 AC 4D
            bcs L18A4              ; B0 CB
            lda L00B1              ; A5 B1
            beq L18ED              ; F0 10
            lda L0031              ; Get x1
            ldy L0033              ; A4 33
            sta L0033              ; 85 33
            sty L0031              ; Set x1
            lda L0032              ; Get y1
            ldy L0034              ; A4 34
            sta L0034              ; 85 34
            sty L0032              ; Set y1
L18ED:      ldy L0077              ; A4 77
            lda L0C85,Y            ; B9 85 0C
            cmp #$FF               ; C9 FF
            bne L1901              ; D0 0B
            lda L0031              ; Get x1
            sta L0C5E,Y            ; 99 5E 0C
            lda L0032              ; Get y1
            sta L0C86,Y            ; 99 86 0C
            iny                    ; C8

L1901:      lda L0033              ; A5 33
            sta L0C5E,Y            ; 99 5E 0C
            lda L0034              ; A5 34
            sta L0C86,Y            ; 99 86 0C
            iny                    ; C8
            sty L0077              ; 84 77
            jsr L1621              ; Plot line

            lda L00A8              ; A5 A8
            bne L18A4              ; D0 8F
L1915:      lda L0082              ; A5 82
            sta L007E              ; VDU stat
            lda L0083              ; A5 83
            sta L007F              ; 85 7F
            lda L0084              ; A5 84
            sta L0080              ; 85 80
            lda L0085              ; A5 85
            sta L0081              ; 85 81
            lda L00B4              ; A5 B4
            clc                    ; 18
            adc L00B6              ; 65 B6
            sta L00B4              ; 85 B4
            rts                    ; 60

;-----------------------------------------
; Flip
;-----------------------------------------

L192D:      ldy #$0A               ; A0 0A
L192F:      ldx L0362,Y            ; Get stars Y
            lda L034C,Y            ; Get stars X
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y
            txa                    ; 8A
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            lda L0CB9,Y            ; Get stars Z
            sta L00A7              ; 85 A7
            jsr L1824              ; Plot pixels
            dey                    ; 88
            bne L192F              ; D0 E4
            rts                    ; 60

;-----------------------------------------

L194C:      ldx L0C01              ; Current view
            beq L195A              ; F0 09
            dex                    ; CA
            bne L1957              ; D0 03
            jmp L1A46              ; 4C 46 1A
L1957:      jmp L223D              ; 4C 3D 22
L195A:      ldy #$0A               ; A0 0A

L195C:      jsr L253F              ; 20 3F 25
            lda L00A1              ; A5 A1
            lsr L001B              ; 46 1B
            ror A                  ; 6A
            lsr L001B              ; 46 1B
            ror A                  ; 6A
            ora #$01               ; 09 01
            sta L00A0              ; 85 A0
            lda L0CC4,Y            ; B9 C4 0C
            sbc L008D              ; E5 8D
            sta L0CC4,Y            ; 99 C4 0C
            lda L0CB9,Y            ; Get stars Z
            sta L00A7              ; 85 A7
            sbc L008E              ; E5 8E
            sta L0CB9,Y            ; Set stars Z
            jsr L23FA              ; 20 FA 23
            sta L0027              ; 85 27

            lda L001B              ; A5 1B
            adc L0CAE,Y            ; 79 AE 0C
            sta L0026              ; 85 26
            sta L00A1              ; 85 A1
            lda L0032              ; Get y1
            adc L0027              ; 65 27
            sta L0027              ; 85 27
            sta L00A2              ; 85 A2
            lda L034C,Y            ; Set stars X
            sta L0031              ; Set x1
            jsr L23FF              ; 20 FF 23

            sta L0025              ; 85 25
            lda L001B              ; A5 1B
            adc L0357,Y            ; 79 57 03
            sta L0024              ; 85 24
            lda L0031              ; Get x1
            adc L0025              ; 65 25
            sta L0025              ; 85 25
            eor L0089              ; 45 89
            jsr L23A9              ; 20 A9 23
            jsr L24E0              ; 20 E0 24
            sta L0027              ; 85 27
            stx L0026              ; 86 26
            eor L0088              ; 45 88
            jsr L23A1              ; 20 A1 23
            jsr L24E0              ; 20 E0 24
            sta L0025              ; 85 25
            stx L0024              ; 86 24
            ldx L002B              ; A6 2B
            lda L0027              ; A5 27
            eor L008B              ; 45 8B
            jsr L23AB              ; 20 AB 23
            sta L00A0              ; 85 A0
            jsr L2481              ; 20 81 24
            asl L001B              ; 06 1B
            rol A                  ; 2A
            sta L00D1              ; 85 D1
            lda #$00               ; A9 00
            ror A                  ; 6A
            ora L00D1              ; 05 D1
            jsr L24E0              ; 20 E0 24
            sta L0025              ; 85 25
            txa                    ; 8A
            sta L0357,Y            ; 99 57 03
            lda L0026              ; A5 26
            sta L00A1              ; 85 A1
            lda L0027              ; A5 27
            sta L00A2              ; 85 A2
            lda #$00               ; A9 00
            sta L001B              ; 85 1B
            lda L002A              ; A5 2A
            eor #$80               ; 49 80
            jsr L181B              ; 20 1B 18
            lda L0025              ; A5 25
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            and #$7F               ; 29 7F
            cmp #$78               ; C9 78
            bcs L1A23              ; B0 20
            lda L0027              ; A5 27
            sta L0362,Y            ; Set stars Y
            sta L0032              ; Set y1
            and #$7F               ; 29 7F
            cmp #$78               ; C9 78
            bcs L1A23              ; B0 13
            lda L0CB9,Y            ; Get stars Z
            cmp #$10               ; C9 10
            bcc L1A23              ; 90 0C
            sta L00A7              ; 85 A7

L1A19:      jsr L1824              ; Plot pixels
            dey
            beq L1A22
            jmp L195C              ; 4C 5C 19

L1A22:      rts

;--------------------------------------------
; Kill
;--------------------------------------------

L1A23:
            jsr L3D24              ; Randomize $1,$2,$3
            ora #$04
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y

            jsr L3D24              ; Randomize $1,$2,$3
            ora #$08
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X

            jsr L3D24              ; Randomize $1,$2,$3
            ora #$90
            sta L0CB9,Y            ; Set stars Z
            sta L00A7
            lda L0032              ; Get y1
            jmp L1A19              ; Plot pixels

;--------------------------------------------
; Plot 10 stars
;--------------------------------------------

L1A46:      ldy #$0A               ; Set counter

L1A48:      jsr L253F              ; 20 3F 25

            lda L00A1              ; A5 A1
            lsr L001B              ; 46 1B
            ror A                  ; 6A
            lsr L001B              ; 46 1B
            ror A                  ; 6A
            ora #$01               ; 09 01
            sta L00A0              ; 85 A0
            lda L034C,Y            ; Set stars X
            sta L0031              ; Set x1

            jsr L23FF              ; 20 FF 23
            sta L0025              ; 85 25
            lda L0357,Y            ; B9 57 03
            sbc L001B              ; E5 1B
            sta L0024              ; 85 24

            lda L0031              ; Get x1
            sbc L0025              ; E5 25
            sta L0025              ; 85 25
            jsr L23FA              ; 20 FA 23
            sta L0027              ; 85 27

            lda L0CAE,Y            ; B9 AE 0C
            sbc L001B              ; E5 1B
            sta L0026              ; 85 26
            sta L00A1              ; 85 A1

            lda L0032              ; Get y1
            sbc L0027              ; E5 27
            sta L0027              ; 85 27
            sta L00A2              ; 85 A2

            lda L0CC4,Y            ; B9 C4 0C
            adc L008D              ; 65 8D
            sta L0CC4,Y            ; 99 C4 0C

            lda L0CB9,Y            ; Get stars Z
            sta L00A7              ; 85 A7
            adc L008E              ; 65 8E
            sta L0CB9,Y            ; Set stars Z

            lda L0025              ; A5 25
            eor L0088              ; 45 88
            jsr L23A9              ; 20 A9 23
            jsr L24E0              ; 20 E0 24
            sta L0027              ; 85 27
            stx L0026              ; 86 26
            eor L0089              ; 45 89
            jsr L23A1              ; 20 A1 23
            jsr L24E0              ; 20 E0 24
            sta L0025              ; 85 25
            stx L0024              ; 86 24
            lda L0027              ; A5 27
            eor L008B              ; 45 8B
            ldx L002B              ; A6 2B
            jsr L23AB              ; 20 AB 23
            sta L00A0              ; 85 A0
            lda L0025              ; A5 25
            sta L00A2              ; 85 A2
            eor #$80               ; 49 80
            jsr L2485              ; 20 85 24
            asl L001B              ; 06 1B
            rol A                  ; 2A
            sta L00D1              ; 85 D1
            lda #$00               ; A9 00
            ror A                  ; 6A
            ora L00D1              ; 05 D1
            jsr L24E0              ; 20 E0 24
            sta L0025              ; 85 25
            txa                    ; 8A
            sta L0357,Y            ; 99 57 03
            lda L0026              ; A5 26
            sta L00A1              ; 85 A1
            lda L0027              ; A5 27
            sta L00A2              ; 85 A2
            lda #$00               ; A9 00
            sta L001B              ; 85 1B
            lda L002A              ; A5 2A
            jsr L181B              ; 20 1B 18
            lda L0025              ; A5 25
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            lda L0027              ; A5 27
            sta L0362,Y            ; Set stars Y
            sta L0032              ; Set y1
            and #$7F               ; 29 7F
            cmp #$6E               ; C9 6E
            bcs L1B0F              ; B0 13

            lda L0CB9,Y            ; Get stars Z
            cmp #$A0               ; C9 A0
            bcs L1B0F              ; B0 0C
            sta L00A7              ; 85 A7
L1B05:      jsr L1824              ; Plot pixels
            dey                    ; 88
            beq L1B0E              ; F0 03
            jmp L1A48              ; 4C 48 1A
L1B0E:      rts                    ; 60

L1B0F:      jsr L3D24              ; Randomize $1,$2,$3
            and #$7F               ; 29 7F
            adc #$0A               ; 69 0A
            sta L0CB9,Y            ; Set stars Z
            sta L00A7              ; 85 A7
            lsr A                  ; 4A
            bcs L1B32              ; B0 14
            lsr A                  ; 4A
            lda #$FC               ; A9 FC
            ror A                  ; 6A
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            jsr L3D24              ; Randomize $1,$2,$3
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y
            jmp L1B05              ; 4C 05 1B

L1B32:      jsr L3D24              ; Randomize $1,$2,$3
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            lsr A                  ; 4A
            lda #$E6               ; A9 E6
            ror A                  ; 6A
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y
            bne L1B05              ; Forced jump
L1B45:
	.word 1
	.word 300
	.word 4000
	.word 6000
	.word 4000
	.word 10000
	.word 5250
	.word 10000
	.word 9000
	.word 15000
	.word 10000
	.word 50000

L1B5D:      ldx #$09               ; A2 09
            cmp #$19               ; C9 19
            bcs L1BC2              ; B0 5F
            dex                    ; CA
L1B64:      cmp #$0A               ; C9 0A
            bcs L1BC2              ; B0 5A
            dex                    ; CA
            cmp #$02               ; C9 02
            bcs L1BC2              ; B0 55
            dex                    ; CA
            bne L1BC2              ; D0 52

;--------------------------------------------
; F8=Display status screen
;--------------------------------------------

L1B70:
	jsr restore_panel

            lda #$08
            jsr L27FC              ; Clear screen, plot frame

            jsr L2F0D              ; Plot line

L1B78:      lda #$07
            sta L002C              ; Cursor X
L1B7C:
            lda #$7E               ; Text 'COMMANDER [name]'
            jsr L17FF              ; Plot header + line

            lda #$0F
            ldy L00AF              ; Docked flag
            bne L1B98              ; Forced jump
 
            lda #$E6               ; Text 'GREEN'
            ldy L0BF6              ; AC F6 0B
            ldx L0BE2,Y            ; BE E2 0B
            beq L1B98              ; F0 07
            ldy L0CD4              ; Energy 1
            cpy #$80               ; If energy<#80  text 'RED'
            adc #$01               ; If energy>=#80 text 'YELLOW'
L1B98:
            jsr L34C0              ; De-token

            lda #$7D               ; Text 'SYSTEM'
            jsr L29C6              ; De-token+space

            lda #$13               ; A9 13
            ldy L0334              ; AC 34 03
            beq L1BAB              ; F0 04
            cpy #$32               ; C0 32
            adc #$01               ; 69 01
L1BAB:      jsr L34C0              ; De-token

            lda #$10               ; A9 10
            jsr L29C6              ; De-token+space

            lda L0348              ; AD 48 03
            bne L1B5D              ; D0 A5
            tax                    ; AA
            lda L0347              ; AD 47 03
            lsr A                  ; 4A
            lsr A                  ; 4A
L1BBE:      inx                    ; E8
            lsr A                  ; 4A
            bne L1BBE              ; D0 FC
L1BC2:      txa                    ; 8A
            clc                    ; 18
            adc #$15               ; 69 15
            jsr L34C0              ; De-token

            lda #$12               ; A9 12
            jsr L1C27              ; De-token

            lda L032E              ; Escape Capsule item
            beq L1BD8              ; Skip if not present
            lda #$70               ; Text 'EXCAPE CAPSULE'
            jsr L1C27              ; De-token

L1BD8:      lda L0329              ; Fuel scoops item
            beq L1BE2              ; Skip of not present
            lda #$6F               ; Text 'FUEL SCOOPS'
            jsr L1C27              ; De-token

L1BE2:      lda L0328              ; E.C.M.System item
            beq L1BEC              ; Skip if not present
            lda #$6C               ; Text 'E.C.M.SYSTEM'
            jsr L1C27              ; De-token

L1BEC:      lda #$71               ; Text 'ENERGY BOMB'
            sta L00B7              ; 85 B7
L1BF0:      tay                    ; A8
            ldx L02B9,Y            ; BE B9 02
            beq L1BF9              ; Skip if not present
            jsr L1C27              ; De-token

L1BF9:      inc L00B7              ; E6 B7
            lda L00B7              ; A5 B7
            cmp #$75               ; C9 75
            bcc L1BF0              ; 90 EF

            ldx #$00               ; Reset ptr
L1C03:      stx L00B4
            ldy L0310,X            ; Laser item
            beq L1C1F              ; Skip if not present
            txa                    ; Convert to string
            clc
            adc #$60               ; Text FRONT,REAR,LEFT,RIGHT
            jsr L29C6              ; De-token+space
            lda #$67               ; Text 'PULSE LASERS'

            ldx L00B4              ; Get ptr
            ldy L0310,X            ; Laser item
            bpl L1C1C              ; Check bit 7 set
            lda #$68               ; Text 'BEAM LASERS'
L1C1C:      jsr L1C27              ; De-token

L1C1F:      ldx L00B4              ; Get ptr
            inx                    ; Next
            cpx #$04               ; All laser items checked?
            bcc L1C03              ; No, repeat
            rts

L1C27:      jsr L34C0              ; De-token
            ldx #$06               ; A2 06
            stx L002C              ; Cursor X
            rts                    ; 60

L1C2F:      .byte $48,$76,$E8,$00

L1C33:      lda #$03               ; A9 03
L1C35:      ldy #$00               ; A0 00

L1C37:      sta L008F              ; 85 8F
            lda #$00               ; A9 00
            sta L003D              ; 85 3D
            sta L003E              ; 85 3E
            sty L003F              ; 84 3F
            stx L0040              ; 86 40

L1C43:      ldx #$0B               ; A2 0B
            stx L00D1              ; 86 D1
            php                    ; 08
            bcc L1C4E              ; 90 04
            dec L00D1              ; C6 D1
            dec L008F              ; C6 8F

;--------------------------------------------
; L1C4F:
;        and #$38
;L1C51:
;--------------------------------------------

L1C4E:      lda #$0b
            sec
L1C51:
            sta L00A5              ; 85 A5
            sbc L008F              ; E5 8F
            sta L008F              ; 85 8F
            inc L008F              ; E6 8F
            ldy #$00               ; A0 00
            sty L00A2              ; 84 A2
            jmp L1C9F              ; 4C 9F 1C

;--------------------------------------------

L1C60:      asl L0040              ; 06 40
            rol L003F              ; 26 3F
            rol L003E              ; 26 3E
            rol L003D              ; 26 3D
            rol L00A2              ; 26 A2
            ldx #$03               ; A2 03
L1C6C:      lda L003D,X            ; B5 3D
            sta L0031,X            ; 95 31
            dex                    ; CA
            bpl L1C6C              ; 10 F9
            lda L00A2              ; A5 A2
            sta L0035              ; 85 35
            asl L0040              ; 06 40
            rol L003F              ; 26 3F
            rol L003E              ; 26 3E
L1C7D:      rol L003D              ; 26 3D
            rol L00A2              ; 26 A2
            asl L0040              ; 06 40
            rol L003F              ; 26 3F
            rol L003E              ; 26 3E
            rol L003D              ; 26 3D
            rol L00A2              ; 26 A2
            clc                    ; 18
            ldx #$03               ; A2 03
L1C8E:      lda L003D,X            ; B5 3D
            adc L0031,X            ; 75 31
            sta L003D,X            ; 95 3D
            dex                    ; CA
            bpl L1C8E              ; 10 F7
            lda L0035              ; A5 35
            adc L00A2              ; 65 A2
            sta L00A2              ; 85 A2
            ldy #$00               ; A0 00

L1C9F:      ldx #$03               ; A2 03
            sec                    ; 38
L1CA2:      lda L003D,X            ; B5 3D
            sbc L1C2F,X            ; FD 2F 1C
            sta L0031,X            ; 95 31
            dex                    ; CA
            bpl L1CA2              ; 10 F6
            lda L00A2              ; A5 A2
            sbc #$17               ; E9 17
            sta L0035              ; 85 35
            bcc L1CC5              ; 90 11
            ldx #$03               ; A2 03
L1CB6:      lda L0031,X            ; B5 31
            sta L003D,X            ; 95 3D
            dex                    ; CA
            bpl L1CB6              ; 10 F9
            lda L0035              ; A5 35
            sta L00A2              ; 85 A2
            iny                    ; C8
            jmp L1C9F              ; 4C 9F 1C

L1CC5:      tya                    ; 98
            bne L1CD4              ; D0 0C
            lda L00D1              ; A5 D1
            beq L1CD4              ; F0 08
            dec L008F              ; C6 8F
            bpl L1CDE              ; 10 0E

            lda #$20               ; Character space
            bne L1CDB              ; Print space

L1CD4:      ldy #$00               ; A0 00
            sty L00D1              ; 84 D1
            clc                    ; 18

            adc #$30               ; Convert nr to ASCII
L1CDB:      jsr L1CF8              ; Print character

L1CDE:      dec L00D1              ; C6 D1
            bpl L1CE4              ; 10 02
            inc L00D1              ; E6 D1
L1CE4:      dec L00A5              ; C6 A5
            bmi L1CF5              ; 30 0D
            bne L1CF2              ; D0 08
            plp                    ; 28
            bcc L1CF2              ; 90 05

            lda #$2E               ; Character '.'
            jsr L1CF8              ; Print character
L1CF2:      jmp L1C60              ; 4C 60 1C

L1CF5:      rts                    ; 60

L1CF6:      lda #$07               ; Bell

;--------------------------------------------
; Print character in A at L002C,L002D
;--------------------------------------------

L1CF8:      sta L00D2              ; Save char
            sty L0CD0              ; Save Y
            stx L0CCF              ; Save X

            ldy L007E              ; VDU stat
            cpy #$FF
            bne L1D14
	jmp L1D73
L1D14:
            cmp #$07               ; Check beep
            bne L1D15
	jmp L1D7D
L1D15:
            cmp #$20               ; Check ASCII char
            bcs L1D1A

            cmp #$0A               ; Check newline
            beq L1D16

            ldx #$01
            stx L002C              ; Cursor X

L1D16:      inc L002D              ; Cursor Y
            bne L1D73              ; D0 59
L1D1A:
;            tay                    ; A8
;            ldx #$BF               ; A2 BF
;            asl A                  ; 0A
;            asl A                  ; 0A
;            bcc L1D23              ; 90 02
;
;            ldx #$C1               ; A2 C1
L1D23:
;            asl A                  ; 0A
;            bcc L1D27              ; 90 01
;            inx                    ; E8
L1D27:
	sec			; Set FONT address $1C/$1D
	sbc #$20
	sta L001C
	lda #0
	sta L001D
	asl L001C
	rol L001D
	asl L001C
	rol L001D
	asl L001C
	rol L001D
	clc
	lda #<FONT
	adc L001C
	sta L001C
	lda L001D
	adc #>FONT
	sta L001D
;            sta L001C              ; 85 1C
;            stx L001D              ; 86 1D
;            lda #$80               ; A9 80
;            sta L0007              ; 85 07
            lda L002D              ; Cursor Y

            cmp #$20              ; Check cursor y
;            cmp #$16               ; Check cursor y
            bcc L1D3A              ; If <24, jump

            jsr L27FE              ; 20 FE 27
            jmp L1D73              ; 4C 73 1D

L1D3A:
	bit L00A6		; Correction to 8-line at chart
;	bvc L1D3B
	bpl L1D3B
	clc
	lda L002D
	adc #$80
	sta L0008
	lda L002C
	sta L0007
	jmp L1D54
L1D3B:
;            lsr A                  ; 
;            ror L0007              ; 66 07
;            lsr A                  ; 4A
;            ror L0007              ; 66 07
;            adc L002D              ; 65 2D
;            adc #$58               ; Add hb-screenaddress

	ldx L002D		; Convert X,Y -> screenaddress
	lda line_hb,x
            sta L0008              ; hb-screenaddress
	lda line_lb,x
	clc
	adc L002C		; Cursor X
	sta L0007


;            lda L002C              ; Get X
;            asl A                  ; 0A
;            asl A                  ; 0A
;            asl A                  ; 0A
;            adc L0007              ; 65 07
;            sta L0007              ; 85 07
;            bcc L1D54              ; 90 02
;            inc L0008              ; E6 08

L1D54:
            cpy #$7f               ; Check Y-pos bottom
            bne L1D63

            dec L002C              ; Cursor X
            dec L0008              ; C6 08

            ldy #$F8               ; A0 F8
            jsr L40E6              ; 20 E6 40
            beq L1D73              ; F0 10

L1D63:      inc L002C              ; Cursor X
            .byte $2C

;---------------------------------------------
; Character on screen
;---------------------------------------------

L1D66:
            sta L0008              ; 85 08

;            ldy #$07               ; Set line ptr
            ldy #$05               ; Set line ptr !!!! NEWFONT !!!
L1D6A:
            lda (L001C),Y          ; Get pixel mask
	pha

	sty tmp_y
	lda rowbyte,y
	tay
	pla

            eor (L0007),Y          ; Plot byte on screen
            sta (L0007),Y

	ldy tmp_y
            dey                    ; Next line
            bpl L1D6A

L1D73:      ldy L0CD0              ; Restore y
            ldx L0CCF              ; Restore x
            lda L00D2              ; Restore a
            clc
L1D7C:      rts

;---------------------------------------------
; Beep
;---------------------------------------------

L1D7D:
            jsr L427F              ; Make beep sound

            jmp L1D73              ; Return to printroutine

L1D7E:
	rts
;---------------------------------------------
; Update bars + gyro pointers
; Right side of panel
;---------------------------------------------

L1D83:
	bit L00A6		; Correction Charts
	bvs L1D7E
	bmi L1D7E

	lda #<$911a		; Set screenadddress $76f0
            sta L0007
	lda #>$911a
            sta L0008

            lda L008C              ; Get speed
            jsr L1E28              ; Speed bar (SP)

            lda #$00               ; A9 00
            sta L00A1              ; 85 A1
            sta L001B              ; 85 1B

            lda #$08               ; A9 08
            sta L00A2              ; 85 A2

            lda L0087              ; A5 87
            lsr A                  ; 4A
            lsr A                  ; 4A
            ora L0088              ; 05 88
            eor #$80               ; 49 80
            jsr L24E0              ; 20 E0 24
            jsr L1E70              ; RL Gyro pointer

            lda L002A              ; A5 2A
            ldx L002B              ; A6 2B
            beq L1DB0              ; F0 02

            sbc #$01               ; E9 01

L1DB0:      jsr L24E0              ; 20 E0 24
            jsr L1E70              ; DC gyro pointer

            lda L00A9              ; A5 A9
            and #$03               ; 29 03
            bne L1D7C              ; D0 C0

            ldy #$00               ; A0 00
            ldx #$03               ; A2 03
L1DC0:      sty L0037,X            ; 94 37
            dex                    ; CA
            bpl L1DC0              ; 10 FB

            ldx #$03               ; A2 03
            lda L0CD4              ; Energy 1
            lsr A                  ; 4A
            sta L00A0              ; 85 A0
L1DCD:      sec                    ; 38
            sbc #$20               ; E9 20
            bcc L1DDF              ; 90 0D
            sta L00A0              ; 85 A0

            lda #$20               ; A9 20
            sta L0037,X            ; 95 37
            lda L00A0              ; A5 A0
            dex                    ; CA
            bpl L1DCD              ; 10 F0

            bmi L1DE3              ; 30 04

L1DDF:      lda L00A0              ; A5 A0
            sta L0037,X            ; 95 37

L1DE3:      lda L0037,Y            ; Get shieldpower
            sty L001B              ; Save counter
            jsr L1E28              ; Plot energy 1,2,3,4 bars
            ldy L001B              ; Restore counter
            iny                    ; Next bar
            cpy #$04               ; All 4 bars plot?
            bne L1DE3              ; Repeat if not last one

;---------------------------------------------
; Left side of panel
;---------------------------------------------

            lda #>$9102            ; Set screenaddress
            sta L0008
            lda #<$9102
            sta L0007

            lda L0CD2              ; Energy FS
            jsr L1E25              ; Plot front shield bar (FS)

            lda L0CD3              ; Energy AS
            jsr L1E25              ; Plot aft shield bar (AS)

            lda L030D              ; Fuel level
            jsr L1E27              ; Plot fuel bar (FU)

	inc L0008

            lda L0C03              ; Cabine temp CT
            jsr L1E25              ; Plot cabin temperature bar (CT)

            lda #$F0               ; A9 F0
            sta L0006              ; 85 06
            sta L003E              ; 85 3E

            lda L0CE2
            jsr L1E25              ; Plot laser temperature bar (LT)

            jmp L3736              ; Update compas

;--------------------------------------------
; Plot bar in panel
;
; A=value bar
; Entry L1E25 - 32 steps ???
; Entry L1E27 - 16 steps ???
;--------------------------------------------

L1E25:
	lsr A			; Divide by 4
	lsr A
L1E27:
	lsr A			; Divide by 2
L1E28:
	sta L00A0		; Save bar value
	ldx #$FF		; Set pixel mask
	stx L00A1

	ldy #$03		; Set column counter
L1E32:
	lda L00A0		; Get bar value
	cmp #$08		; Check lower limit
	bcc L1E54		; If lower limit, skip
L1E38:
	sbc #$08		; Substract 1 step
	sta L00A0		; Store value

	lda L00A1		; Get pixel mask
L1E3E:
	ldx #$02		; Line pointer

	sty tmp_y		; Save y

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixels line1 on screen
	inx

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixels line2 on screen
	inx

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixels line3 on screen

	ldy tmp_y		; Restore y

	inc L0007		; Next column
L1E4E:
	dey			; Decrement column counter
	bmi L1E6C		; Jump if last column
	bpl L1E32		; Next column
L1E54:
	eor #$07		; Invert lower nibble
	sta L00A0		; Set value

	lda L00A1		; Get pixel mask
L1E5A:
	asl A			; Shift pixel mask
	dec L00A0		; Decrement value
	bpl L1E5A		; Check if zero

	pha			; Save pixel mask
	lda #$00		; Reset pixel mask
	sta L00A1		; Set pixel mask

	lda #$63
	sta L00A0		; Reset value

	pla			; Restore pixel mask
	jmp L1E3E		; Repeat for next line
L1E6C:
	jmp L293D		; Point to 8 lines below

;--------------------------------------------
; Plot gyro pointer in panel
;
; A=gyro value
;--------------------------------------------

L1E70:
	sta L00A0		; Save gyro value
L1E74:
	sec			; Convert value to pos
	lda L00A0
	sbc #$04
	bcs L1E86

	lda #$FF
	ldx L00A0
	sta L00A0
	lda L1615,X
	bne L1E8A
L1E86:
	sta L00A0		; Set gyro pos
	lda #$00		; Reset pixel mask
L1E8A:
	ldx #$01		; Set linepointer
	sty tmp_y		; Save y

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixel on screen
	inx

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixel on screen
	inx

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixel on screen
	inx

	ldy rowbyte,x
	sta (L0007),Y		; Plot pixel on screen

	ldy tmp_y		; Restore y

	inc L0007		; Point to next column
	lda L0007		; Get lb-screen
	cmp #$1e		; Check limit
	bcc L1E74		; If not, jump
	jmp L293D		; Point to 8 lines below

;--------------------------------------------

L1EA1:      jsr L3C83              ; Reset vars
            jsr L3C6D              ; Reset

            lda #$00               ; A9 00
            ldx #$10               ; A2 10
L1EAB:      sta L0317,X            ; Inventory
            dex                    ; CA
            bpl L1EAB              ; 10 FA

            sta L0334              ; 8D 34 03
            sta L032E              ; Escape Capsule item

            lda #$46               ; A9 46
            sta L030D              ; Fuel level

            jmp L400D              ; Jump to status screen

tmp_a:
	.byte 0

;--------------------------------------------
; Start ELITEC.TXT
;--------------------------------------------

L1EBF:      lda #$00               ; A9 00
            jsr L3F40              ; 20 40 3F
            beq L1EC9              ; F0 03

            jmp L1F86              ; 4C 86 1F

L1EC9:      jsr L1F2B              ; 20 2B 1F

            jsr L4245              ; 20 45 42

            lda #$FA               ; A9 FA
            jmp L37FC              ; 4C FC 37

L1ED4:      lda L0030              ; E mark in panel
            bne L1F1B              ; D0 43

            lda L0073              ; A5 73
            asl A                  ; 0A
            bmi L1EBF              ; 30 E2

            lsr A                  ; 4A
            tax                    ; AA
            lda L15F1,X            ; Get galaxy pointer
            sta L0022              ; Set lb
            lda L15F1+1,X          ; Get galaxy pointer
            sta L0023              ; Set hb

            ldy #$02               ; A0 02
            jsr L2085              ; 20 85 20

            ldy #$05               ; A0 05
            jsr L2085              ; 20 85 20

            ldy #$08               ; A0 08
            jsr L2085              ; 20 85 20

            lda L00D4              ; A5 D4
            ora L00D7              ; 05 D7
            ora L00DA              ; 05 DA
            and #$7F               ; 29 7F
            ora L00D3              ; 05 D3
            ora L00D6              ; 05 D6
            ora L00D9              ; 05 D9
            bne L1F31              ; D0 29

            lda L0073              ; A5 73
            cmp #$82               ; C9 82
            beq L1F1B              ; F0 0D

            ldy #$1F               ; A0 1F
            lda (L0022),Y          ; B1 22
            .byte $2C

            .byte $39,$1F
            bne L1F1B              ; D0 04

            ora #$80               ; 09 80
            sta (L0022),Y          ; 91 22
L1F1B:      lda L0053              ; Galaxy data
            ora L0056              ; 05 56
            ora L0059              ; 05 59
            bne L1F28              ; D0 05

            lda #$50               ; A9 50
            jsr L37FC              ; 20 FC 37

L1F28:      jsr L4259              ; 20 59 42

L1F2B:      asl L0072              ; 06 72
            sec                    ; 38
            ror L0072              ; 66 72

L1F30:      rts                    ; 60

L1F31:      jsr L3D24              ; Randomize $1,$2,$3

            cmp #$10               ; C9 10
            bcs L1F8F              ; B0 57

            ldy #$20               ; A0 20
            lda (L0022),Y          ; B1 22
            lsr A                  ; 4A
            bcc L1F8F              ; 90 50

            jmp L3912              ; 4C 12 39

L1F42:      cpx #$08               ; E0 08
            beq L1ED4              ; F0 8E

            cpx #$0B               ; E0 0B
            bne L1F50              ; D0 06

            jsr L418C              ; 20 8C 41

            jmp L2044              ; 4C 44 20

L1F50:      cpx #$07               ; E0 07
            bne L1F69              ; D0 15

            jsr L3D24              ; Randomize $1,$2,$3
            cmp #$8C               ; C9 8C
            bcc L1F30              ; 90 D5

            lda L0BEF              ; AD EF 0B
            cmp #$03               ; C9 03
            bcs L1F30              ; B0 CE

            ldx #$02               ; A2 02
            lda #$E1               ; A9 E1
            jmp L2162              ; 4C 62 21

L1F69:      cpx #$06               ; E0 06
            bcs L1F7C              ; B0 0F
            cpx #$02               ; E0 02
            beq L1F7C              ; F0 0B
            lda L0BF4              ; AD F4 0B
            beq L1F7C              ; F0 06
            lda L0073              ; A5 73
            and #$81               ; 29 81
            sta L0073              ; 85 73
L1F7C:      ldy #$0E               ; A0 0E
            lda L0076              ; A5 76
            cmp (L001E),Y          ; D1 1E
            bcs L1F86              ; B0 02
            inc L0076              ; E6 76
L1F86:      ldx #$08               ; A2 08
L1F88:      lda L0053,X            ; Galaxy data
            sta L00D2,X            ; 95 D2
            dex                    ; CA
            bpl L1F88              ; 10 F9
L1F8F:      jsr L419B              ; 20 9B 41
            ldy #$0A               ; A0 0A
            jsr L24C1              ; 20 C1 24
            sta L00B4              ; 85 B4
            lda L00AB              ; TYPE
            cmp #$08               ; C9 08
            bne L1FA2              ; D0 03
            jmp L202C              ; 4C 2C 20
L1FA2:      jsr L3D24              ; Randomize $1,$2,$3
            cmp #$FA               ; C9 FA
            bcc L1FB0              ; 90 07
            jsr L3D24              ; Randomize $1,$2,$3
            ora #$68               ; 09 68
            sta L0070              ; 85 70
L1FB0:      ldy #$0E               ; A0 0E
            lda (L001E),Y          ; B1 1E
            lsr A                  ; 4A
            cmp L0076              ; C5 76
            bcc L1FE9              ; 90 30
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp L0076              ; C5 76
            bcc L1FCD              ; 90 0E
            jsr L3D24              ; Randomize $1,$2,$3
            cmp #$E6               ; C9 E6
            bcc L1FCD              ; 90 07
            lda #$00               ; A9 00
            sta L0073              ; 85 73
            jmp L215E              ; 4C 5E 21
L1FCD:      lda L0072              ; A5 72
            and #$07               ; 29 07
            beq L1FE9              ; F0 16
            sta L00D1              ; 85 D1
            jsr L3D24              ; Randomize $1,$2,$3
            and #$1F               ; 29 1F
            cmp L00D1              ; C5 D1
            bcs L1FE9              ; B0 0B
            lda L0030              ; E mark in panel
            bne L1FE9              ; D0 07
            dec L0072              ; C6 72
            lda L00AB              ; TYPE
            jmp L4249              ; 4C 49 42
L1FE9:      lda #$00               ; A9 00
            jsr L3F40              ; 20 40 3F
            and #$E0               ; 29 E0
            bne L2015              ; D0 23
            ldx L00B4              ; A6 B4
L1FF4:      cpx #$A0               ; E0 A0
            bcc L2015              ; 90 1D
            lda L0072              ; A5 72
            ora #$40               ; 09 40
            sta L0072              ; 85 72
            cpx #$A3               ; E0 A3
            bcc L2015              ; 90 13
            ldy #$13               ; A0 13
            lda (L001E),Y          ; B1 1E
            lsr A                  ; 4A
            jsr L37FC              ; 20 FC 37
            dec L006F              ; C6 6F
            lda L0030              ; E mark in panel
            bne L2084              ; D0 74
            lda #$08               ; Enemy fire laser sound
            jmp L4281              ; Make sound
L2015:      lda L005A              ; A5 5A
            cmp #$03               ; C9 03
            bcs L2023              ; B0 08
            lda L0054              ; A5 54
            ora L0057              ; 05 57
            and #$FE               ; 29 FE
            beq L2044              ; F0 21
L2023:      jsr L3D24              ; Randomize $1,$2,$3
            ora #$80               ; 09 80
            cmp L0073              ; C5 73
            bcs L2044              ; B0 18
L202C:      lda L0031              ; Get x1
            eor #$80               ; 49 80
            sta L0031              ; Set x1
            lda L0032              ; Get y1
            eor #$80               ; 49 80
            sta L0032              ; Set y1
            lda L0033              ; A5 33
            eor #$80               ; 49 80
            sta L0033              ; 85 33
            lda L00B4              ; A5 B4
            eor #$80               ; 49 80
            sta L00B4              ; 85 B4
L2044:      ldy #$10               ; A0 10
            jsr L24C1              ; 20 C1 24
            eor #$80               ; 49 80
            and #$80               ; 29 80
            ora #$03               ; 09 03
            sta L0071              ; 85 71
            lda L0070              ; A5 70
            and #$7F               ; 29 7F
            cmp #$10               ; C9 10
            bcs L2066              ; B0 0D
            ldy #$16               ; A0 16
            jsr L24C1              ; 20 C1 24

            eor L0071              ; 45 71
            and #$80               ; 29 80
            eor #$85               ; 49 85
            sta L0070              ; 85 70
L2066:      lda L00B4              ; A5 B4
            bmi L2073              ; 30 09
            cmp #$16               ; C9 16
            bcc L2073              ; 90 05
            lda #$03               ; A9 03
            sta L006F              ; 85 6F
            rts                    ; 60
L2073:      and #$7F               ; 29 7F
            cmp #$12               ; C9 12
            bcc L2084              ; 90 0B
            lda #$FF               ; A9 FF
            ldx L00AB              ; TYPE
            cpx #$08               ; E0 08
            bne L2082              ; D0 01
            asl A                  ; 0A
L2082:      sta L006F              ; 85 6F
L2084:      rts                    ; 60
L2085:      lda (L0022),Y          ; B1 22
            eor #$80               ; 49 80
            sta L0040              ; 85 40
            dey                    ; 88
            lda (L0022),Y          ; B1 22
            sta L003F              ; 85 3F
            dey                    ; 88
            lda (L0022),Y          ; B1 22
            sta L003E              ; 85 3E
            sty L008F              ; 84 8F
            ldx L008F              ; A6 8F
            jsr L134F              ; 20 4F 13
            ldy L008F              ; A4 8F
            sta L00D4,X            ; 95 D4
            lda L003F              ; A5 3F
            sta L00D3,X            ; 95 D3
            lda L003E              ; A5 3E
            sta L00D2,X            ; 95 D2
            rts                    ; 60

L20A9:      clc                    ; 18
            lda L005B              ; A5 5B
            bne L20E7              ; D0 39
            lda L00AB              ; TYPE
            bmi L20E7              ; 30 35
            lda L0072              ; A5 72
            and #$20               ; 29 20
            ora L0054              ; 05 54
            ora L0057              ; 05 57
            bne L20E7              ; D0 2B
            lda L0053              ; Galaxy data
            jsr L23F0              ; 20 F0 23
            sta L00A2              ; 85 A2
            lda L001B              ; A5 1B
            sta L00A1              ; 85 A1
            lda L0056              ; A5 56
            jsr L23F0              ; 20 F0 23
            tax                    ; AA
            lda L001B              ; A5 1B
            adc L00A1              ; 65 A1
            sta L00A1              ; 85 A1
            txa                    ; 8A
            adc L00A2              ; 65 A2
            bcs L2157              ; B0 7F
            sta L00A2              ; 85 A2
            ldy #$02               ; A0 02
            lda (L001E),Y          ; B1 1E
            cmp L00A2              ; C5 A2
            bne L20E7              ; D0 05
            dey                    ; 88
            lda (L001E),Y          ; B1 1E
            cmp L00A1              ; C5 A1
L20E7:      rts                    ; 60

L20E8:      jsr L3CC6              ; 20 C6 3C
            lda #$1C               ; A9 1C
            sta L0056              ; 85 56
            lsr A                  ; 4A
            sta L0059              ; 85 59
            lda #$80               ; A9 80
            sta L0058              ; 85 58
            lda L0052              ; A5 52
            asl A                  ; 0A
            ora #$80               ; 09 80
            sta L0073              ; 85 73
L20FD:
            lda #$60               ; A9 60

            sta L0061              ; 85 61
            ora #$80               ; 09 80
            sta L0069              ; 85 69
            lda L008C              ; Get speed
            rol A                  ; 2A
            sta L006E              ; 85 6E
            txa                    ; 8A
            jmp L387D              ; New ship

;--------------------------------------------
;
;--------------------------------------------

L210E:      ldx #$08               ; A2 08
            jsr L20E8              ; 20 E8 20
            bcc L2159              ; 90 44

            ldx L0052              ; A6 52
            jsr L384A              ; Set galaxy pointer $20/21
            lda L0BE0,X            ; BD E0 0B
            jsr L212D              ; 20 2D 21

            ldy #$04               ; Sprite=clear
            jsr L3904              ; Plot missile
            dec L0333              ; Decrement missile counter
            lda #$30               ; Launch sound
            jmp L4281              ; Make sound
L212D:      cmp #$07               ; C9 07
            beq L2150              ; F0 1F
            bcs L20E7              ; B0 B4
            cmp #$06               ; C9 06
            bne L213A              ; D0 03
            jsr L2150              ; 20 50 21
L213A:      ldy #$20               ; A0 20
            lda (L0020),Y          ; B1 20
            beq L20E7              ; F0 A7
            ora #$80               ; 09 80
            sta (L0020),Y          ; 91 20
            ldy #$1C               ; A0 1C
            lda #$02               ; A9 02
            sta (L0020),Y          ; 91 20
            asl A                  ; 0A
            ldy #$1E               ; A0 1E
            sta (L0020),Y          ; 91 20
            rts                    ; 60
L2150:      asl L0944              ; 0E 44 09
            sec                    ; 38
            ror L0944              ; 6E 44 09
L2157:      clc                    ; 18
            rts                    ; 60

L2159:      lda #$C9               ; Text 'MISSILE JAMMED'
            jmp L43C2              ; Print at bottomline

L215E:      ldx #$0B               ; A2 0B
L2160:      lda #$FE               ; A9 FE
L2162:      sta L0006              ; 85 06
            lda L001E              ; A5 1E
            pha                    ; 48
            lda L001F              ; A5 1F
            pha                    ; 48
            lda L0020              ; A5 20
            pha                    ; 48
            lda L0021              ; A5 21
            pha                    ; 48
            ldy #$23               ; A0 23
L2172:      lda L0053,Y            ; Galaxy data
            sta L0100,Y            ; 99 00 01
            lda (L0020),Y          ; B1 20
            sta L0053,Y            ; Galaxy data
            dey                    ; 88
            bpl L2172              ; 10 F2
            lda L00AB              ; TYPE
            cmp #$07               ; C9 07
            bne L21A3              ; D0 1D
            txa                    ; 8A
            pha                    ; 48
            lda #$20               ; A9 20
            sta L006E              ; 85 6E
            ldx #$00               ; A2 00
            lda L005D              ; A5 5D
            jsr L21DC              ; 20 DC 21
            ldx #$03               ; A2 03
            lda L005F              ; A5 5F
            jsr L21DC              ; 20 DC 21
            ldx #$06               ; A2 06
            lda L0061              ; A5 61
            jsr L21DC              ; 20 DC 21
            pla                    ; 68
            tax                    ; AA
L21A3:      lda L0006              ; A5 06
            sta L0073              ; 85 73
            lsr L0070              ; 46 70
            asl L0070              ; 06 70
            txa                    ; 8A
            cmp #$0A               ; C9 0A
            bne L21C2              ; D0 12
            jsr L3D24              ; Randomize $1,$2,$3
            asl A                  ; 0A
            sta L0071              ; 85 71
            txa                    ; 8A
            and #$0F               ; 29 0F
            sta L006E              ; 85 6E
            lda #$FF               ; A9 FF
            ror A                  ; 6A
            sta L0070              ; 85 70
            lda #$0A               ; A9 0A
L21C2:      jsr L387D              ; New ship
            pla                    ; 68
            sta L0021              ; 85 21
            pla                    ; 68
            sta L0020              ; 85 20
            ldx #$23               ; A2 23
L21CD:      lda L0100,X            ; BD 00 01
            sta L0053,X            ; Galaxy data
            dex                    ; CA
            bpl L21CD              ; 10 F8
            pla                    ; 68
            sta L001F              ; 85 1F
            pla                    ; 68
            sta L001E              ; 85 1E
            rts                    ; 60
L21DC:      asl A                  ; 0A
            sta L00A1              ; 85 A1
            lda #$00               ; A9 00
            ror A                  ; 6A
            jmp L12FA              ; 4C FA 12
L21E5:      lda #$38               ; ???
            jsr L4281              ; Make sound
            lda #$01               ; A9 01
            sta L0C04              ; 8D 04 0C
            lda #$04               ; A9 04
            jsr L21FF              ; 20 FF 21
            dec L0C04              ; CE 04 0C
            rts                    ; 60

;--------------------------------------------
; Draw launch tunnel + stars
;--------------------------------------------

L21F8:      lda #$30               ; Launch sound
            jsr L4281              ; Make sound

            lda #$08               ; A9 08
L21FF:      sta L00B6              ; 85 B6

            jsr L27FE              ; Clear screen and skip VIEW text
            jsr L2207              ; Draw circles of tunnel

L2207:                             ; Wipe circles of tunnel
            lda #$80
            sta L00D2              ; Circle X-pos

;            ldx #$60               ; Y=96 Centre screen
            ldx #$43               ; Y=96 Centre screen
            stx L00E0              ; Circle Y-pos

            asl A                  ; 0A
            sta L00B7              ; 85 B7
            sta L00D3              ; 85 D3
            sta L00E1              ; 85 E1
L2216:      jsr L2222              ; Draw circle + next dist

            inc L00B7              ; Increment counter
            ldx L00B7              ; Load counter
            cpx #$08               ; Check if 8x done
            bne L2216              ; If not repeat
            rts                    ; 60

;--------------------------------------------
; Draw a circle and calculate offset
;--------------------------------------------

L2222:      lda L00B7              ; Get counter
            and #$07               ; Filter to 0-7
            clc
            adc #$08               ; Add 8
            sta L003D              ; Set radius

L222B:      lda #$01               ; A9 01
            sta L0077              ; 85 77
            jsr L39F1              ; Draw circle

            asl L003D              ; Radius*2
            bcs L223C              ; 
            lda L003D              ; A5 3D
            cmp #$A0               ; C9 A0
            bcc L222B              ; 90 EF
L223C:      rts

;--------------------------------------------
;--------------------------------------------

L223D:      lda #$00               ; A9 00
            cpx #$02               ; E0 02
            ror A                  ; 6A
            sta L00BA              ; 85 BA
            eor #$80               ; 49 80
            sta L00BB              ; 85 BB
            jsr L22F0              ; 20 F0 22

            ldy #$0A               ; Set starcounter to 10
L224D:      lda L0CB9,Y            ; Get stars Z
            sta L00A7              ; 85 A7

            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            jsr L2542              ; 20 42 25

            lda L001B              ; A5 1B
            eor L00BB              ; 45 BB
            sta L00A2              ; 85 A2
            lda L0357,Y            ; B9 57 03
            sta L001B              ; 85 1B
            lda L034C,Y            ; Set stars X
            sta L0031              ; Set x1
            jsr L24E0              ; 20 E0 24

            sta L00A2              ; 85 A2
            stx L00A1              ; 86 A1
            lda L0362,Y            ; Get stars Y
            sta L0032              ; Set y1
            eor L008A              ; 45 8A
            ldx L002B              ; A6 2B
            jsr L23AB              ; 20 AB 23
            jsr L24E0              ; 20 E0 24

            stx L0024              ; 86 24
            sta L0025              ; 85 25
            ldx L0CAE,Y            ; BE AE 0C
            stx L00A1              ; 86 A1
            ldx L0032              ; Get y1
            stx L00A2              ; 86 A2
            ldx L002B              ; A6 2B
            eor L008B              ; 45 8B
            jsr L23AB              ; 20 AB 23
            jsr L24E0              ; 20 E0 24

            stx L0026              ; 86 26
            sta L0027              ; 85 27
            ldx L0087              ; A6 87
            eor L0088              ; 45 88
            jsr L23AB              ; 20 AB 23
            sta L00A0              ; 85 A0
            lda L0024              ; A5 24
            sta L00A1              ; 85 A1
            lda L0025              ; A5 25
            sta L00A2              ; 85 A2
            eor #$80               ; 49 80
            jsr L24DD              ; 20 DD 24

            sta L0025              ; 85 25
            txa                    ; 8A
            sta L0357,Y            ; 99 57 03
            lda L0026              ; A5 26
            sta L00A1              ; 85 A1
            lda L0027              ; A5 27
            sta L00A2              ; 85 A2
            jsr L24DD              ; 20 DD 24

            sta L00A2              ; 85 A2
            stx L00A1              ; 86 A1
            lda #$00               ; A9 00
            sta L001B              ; 85 1B
            lda L00AE              ; A5 AE
            jsr L181B              ; 20 1B 18

            lda L0025              ; A5 25
            sta L034C,Y            ; Set stars X
            sta L0031              ; Set x1
            and #$7F               ; 29 7F
            cmp #$74               ; C9 74
            bcs L230B              ; B0 31
            lda L0027              ; A5 27
            sta L0362,Y            ; Set stars Y
            sta L0032              ; Set y1
            and #$7F               ; 29 7F
            cmp #$74               ; C9 74
            bcs L231E              ; B0 37
L22E7:      jsr L1824              ; Plot pixels

            dey                    ; 88
            beq L22F0              ; F0 03
            jmp L224D              ; 4C 4D 22

L22F0:      lda L00AE              ; A5 AE
            eor L00BA              ; 45 BA
            sta L00AE              ; 85 AE
            lda L0088              ; A5 88
            eor L00BA              ; 45 BA
            sta L0088              ; 85 88
            eor #$80               ; 49 80
            sta L0089              ; 85 89
            lda L008A              ; A5 8A
            eor L00BA              ; 45 BA
            sta L008A              ; 85 8A
            eor #$80               ; 49 80
            sta L008B              ; 85 8B
            rts                    ; 60

L230B:      jsr L3D24              ; Randomize $1,$2,$3
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y
            lda #$73               ; A9 73
            ora L00BA              ; 05 BA
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            bne L232F              ; D0 11

L231E:      jsr L3D24              ; Randomize $1,$2,$3
            sta L0031              ; Set x1
            sta L034C,Y            ; Set stars X
            lda #$6E               ; A9 6E
            ora L0089              ; 05 89
            sta L0032              ; Set y1
            sta L0362,Y            ; Set stars Y

L232F:      jsr L3D24              ; Randomize $1,$2,$3
            ora #$08               ; 09 08
            sta L00A7              ; 85 A7
            sta L0CB9,Y            ; Set stars Z
            bne L22E7              ; D0 AC

;------------------------------------------------
; Sine table
;------------------------------------------------

L233B:      .byte $00,$19,$32,$4A,$62,$79,$8E,$A2
            .byte $B5,$C6,$D5,$E2,$ED,$F5,$FB,$FF
            .byte $FF,$FF,$FB,$F5,$ED,$E2,$D5,$C6
            .byte $B5,$A2,$8E,$79,$62,$4A,$32,$19

;------------------------------------------------

L235B:      sta L003D              ; 85 3D
            sta L003E              ; 85 3E
            sta L003F              ; 85 3F
            sta L0040              ; 85 40
            clc                    ; 18
            rts                    ; 60
L2365:      sta L00A1              ; 85 A1
            and #$7F               ; 29 7F
            sta L003F              ; 85 3F
            lda L00A0              ; A5 A0
            and #$7F               ; 29 7F
            beq L235B              ; F0 EA
            sec                    ; 38
            sbc #$01               ; E9 01
            sta L00D1              ; 85 D1
            lda L001C              ; A5 1C
            lsr L003F              ; 46 3F
            ror A                  ; 6A
            sta L003E              ; 85 3E
            lda L001B              ; A5 1B
            ror A                  ; 6A
            sta L003D              ; 85 3D
            lda #$00               ; A9 00
            ldx #$18               ; A2 18
L2386:      bcc L238A              ; 90 02
            adc L00D1              ; 65 D1
L238A:      ror A                  ; 6A
            ror L003F              ; 66 3F
            ror L003E              ; 66 3E
            ror L003D              ; 66 3D
            dex                    ; CA
            bne L2386              ; D0 F2
            sta L00D1              ; 85 D1
            lda L00A1              ; A5 A1
            eor L00A0              ; 45 A0
            and #$80               ; 29 80
            ora L00D1              ; 05 D1
            sta L0040              ; 85 40
            rts                    ; 60
L23A1:      ldx L0024              ; A6 24
            stx L00A1              ; 86 A1
            ldx L0025              ; A6 25
            stx L00A2              ; 86 A2
L23A9:      ldx L0087              ; A6 87
L23AB:      stx L001B              ; 86 1B
            tax                    ; AA
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            txa                    ; 8A
            and #$7F               ; 29 7F
            beq L241B              ; F0 64
            tax                    ; AA
            dex                    ; CA
            stx L0006              ; 86 06
            lda #$00               ; A9 00
            lsr L001B              ; 46 1B
            bcc L23C3              ; 90 02
            adc L0006              ; 65 06
L23C3:      ror A                  ; 6A
            ror L001B              ; 66 1B
            bcc L23CA              ; 90 02
            adc L0006              ; 65 06
L23CA:      ror A                  ; 6A
            ror L001B              ; 66 1B
            bcc L23D1              ; 90 02
            adc L0006              ; 65 06
L23D1:      ror A                  ; 6A
            ror L001B              ; 66 1B
            bcc L23D8              ; 90 02
            adc L0006              ; 65 06
L23D8:      ror A                  ; 6A
            ror L001B              ; 66 1B
            bcc L23DF              ; 90 02
            adc L0006              ; 65 06
L23DF:      ror A                  ; 6A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            ora L00D1              ; 05 D1
            rts                    ; 60
L23EE:      and #$7F               ; 29 7F
L23F0:      sta L001B              ; 85 1B
            tax                    ; AA
            bne L2407              ; D0 12
L23F5:      clc                    ; 18
            stx L001B              ; 86 1B
            txa                    ; 8A
            rts                    ; 60

L23FA:      lda L0362,Y            ; Get stars Y
            sta L0032              ; Set y1

L23FF:      and #$7F               ; 29 7F
            sta L001B              ; 85 1B

L2403:      ldx L00A0              ; A6 A0
            beq L23F5              ; F0 EE

L2407:      dex                    ; CA
            stx L00D1              ; 86 D1

            lda #$00               ; A9 00
            ldx #$08               ; A2 08
            lsr L001B              ; 46 1B
L2410:      bcc L2414              ; 90 02
            adc L00D1              ; 65 D1
L2414:      ror A                  ; 6A
            ror L001B              ; 66 1B
            dex                    ; CA
            bne L2410              ; D0 F6
            rts                    ; 60

L241B:      sta L001C              ; 85 1C
            sta L001B              ; 85 1B
            rts                    ; 60

L2420:      and #$1F               ; 29 1F
            tax                    ; AA
            lda L233B,X            ; Get sine value
            sta L00A0              ; 85 A0
            lda L003D              ; A5 3D
L242A:      eor #$FF               ; 49 FF
            sec                    ; 38
            ror A                  ; 6A
            sta L001B              ; 85 1B
            lda #$00               ; A9 00
L2432:      bcs L243C              ; B0 08
            adc L00A0              ; 65 A0
            ror A                  ; 6A
            lsr L001B              ; 46 1B
            bne L2432              ; D0 F7
            rts                    ; 60

L243C:      lsr A                  ; 4A
            lsr L001B              ; 46 1B
            bne L2432              ; D0 F1
            rts                    ; 60

            ldx L00A0              ; A6 A0
            beq L23F5              ; F0 AF
            dex                    ; CA
            stx L00D1              ; 86 D1
            lda #$00               ; A9 00
            ldx #$08               ; A2 08
            lsr L001B              ; 46 1B
L244F:      bcc L2453              ; 90 02
            adc L00D1              ; 65 D1
L2453:      ror A                  ; 6A
            ror L001B              ; 66 1B
            dex                    ; CA
            bne L244F              ; D0 F6
            rts                    ; 60
L245A:      stx L00A0              ; 86 A0
L245C:      eor #$FF               ; 49 FF
            lsr A                  ; 4A
            sta L001C              ; 85 1C
            lda #$00               ; A9 00
            ldx #$10               ; A2 10
            ror L001B              ; 66 1B
L2467:      bcs L2474              ; B0 0B
            adc L00A0              ; 65 A0
            ror A                  ; 6A
            ror L001C              ; 66 1C
            ror L001B              ; 66 1B
            dex                    ; CA
            bne L2467              ; D0 F4
            rts                    ; 60
L2474:      lsr A                  ; 4A
            ror L001C              ; 66 1C
            ror L001B              ; 66 1B
            dex                    ; CA
            bne L2467              ; D0 EB
            rts                    ; 60
            ldx L0087              ; A6 87
            stx L001B              ; 86 1B
L2481:      ldx L0025              ; A6 25
            stx L00A2              ; 86 A2
L2485:      ldx L0024              ; A6 24
            stx L00A1              ; 86 A1
L2489:      tax                    ; AA
            and #$7F               ; 29 7F
            lsr A                  ; 4A
            sta L001B              ; 85 1B
            txa                    ; 8A
            eor L00A0              ; 45 A0
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            lda L00A0              ; A5 A0
            and #$7F               ; 29 7F
            beq L24B4              ; F0 18
            tax                    ; AA
            dex                    ; CA
            stx L0006              ; 86 06
            lda #$00               ; A9 00
            ldx #$07               ; A2 07
L24A4:      bcc L24A8              ; 90 02
            adc L0006              ; 65 06
L24A8:      ror A                  ; 6A
            ror L001B              ; 66 1B
            dex                    ; CA
            bne L24A4              ; D0 F6
            lsr A                  ; 4A
            ror L001B              ; 66 1B
            ora L00D1              ; 05 D1
            rts                    ; 60
L24B4:      sta L001B              ; 85 1B
            rts                    ; 60
L24B7:      jsr L2489              ; 20 89 24
            sta L00A2              ; 85 A2
            lda L001B              ; A5 1B
            sta L00A1              ; 85 A1
            rts                    ; 60
L24C1:      ldx L0053,Y            ; Galaxy data
            stx L00A0              ; 86 A0
            lda L0031              ; Get x1
            jsr L24B7              ; 20 B7 24
            ldx L0055,Y            ; B6 55
            stx L00A0              ; 86 A0
            lda L0032              ; Get y1
            jsr L24DD              ; 20 DD 24
            sta L00A2              ; 85 A2
            stx L00A1              ; 86 A1
            ldx L0057,Y            ; B6 57
            stx L00A0              ; 86 A0
            lda L0033              ; A5 33
L24DD:      jsr L2489              ; 20 89 24

L24E0:      sta L0006              ; 85 06
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            eor L00A2              ; 45 A2
            bmi L24F7              ; 30 0D
            lda L00A1              ; A5 A1
            clc                    ; 18
            adc L001B              ; 65 1B
            tax                    ; AA
            lda L00A2              ; A5 A2
            adc L0006              ; 65 06
            ora L00D1              ; 05 D1
            rts                    ; 60

L24F7:      lda L00A2              ; A5 A2
            and #$7F               ; 29 7F
            sta L008F              ; 85 8F
            lda L001B              ; A5 1B
            sec                    ; 38
            sbc L00A1              ; E5 A1
            tax                    ; AA
            lda L0006              ; A5 06
            and #$7F               ; 29 7F
            sbc L008F              ; E5 8F
            bcs L2519              ; B0 0E
            sta L008F              ; 85 8F
            txa                    ; 8A
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
            tax                    ; AA
            lda #$00               ; A9 00
            sbc L008F              ; E5 8F
            ora #$80               ; 09 80
L2519:      eor L00D1              ; 45 D1
            rts                    ; 60

L251C:      stx L00A0              ; 86 A0
            eor #$80               ; 49 80
            jsr L24DD              ; 20 DD 24
            tax                    ; AA
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            txa                    ; 8A
            and #$7F               ; 29 7F
            ldx #$FE               ; A2 FE
            stx L0006              ; 86 06
L252F:      asl A                  ; 0A

            cmp #$60               ; C9 60

            bcc L2536              ; 90 02
            sbc #$60               ; E9 60
L2536:      rol L0006              ; 26 06
            bcs L252F              ; B0 F5
            lda L0006              ; A5 06
            ora L00D1              ; 05 D1
            rts                    ; 60

L253F:      lda L0CB9,Y            ; Get stars Z
L2542:      sta L00A0              ; 85 A0
            lda L008C              ; Get speed
L2546:      ldx #$08               ; A2 08
            asl A                  ; 0A
            sta L001B              ; 85 1B
            lda #$00               ; A9 00
L254D:      rol A                  ; 2A
            bcs L2554              ; B0 04
            cmp L00A0              ; C5 A0
            bcc L2557              ; 90 03
L2554:      sbc L00A0              ; E5 A0
            sec                    ; 38
L2557:      rol L001B              ; 26 1B
            dex                    ; CA
            bne L254D              ; D0 F1
            jmp L462F              ; 4C 2F 46
L255F:      sta L001D              ; 85 1D
            lda L0059              ; A5 59
            sta L00A0              ; 85 A0
            lda L005A              ; A5 5A
            sta L00A1              ; 85 A1
            lda L005B              ; A5 5B
            sta L00A2              ; 85 A2
            lda L001B              ; A5 1B
            ora #$01               ; 09 01
            sta L001B              ; 85 1B
            lda L001D              ; A5 1D
            eor L00A2              ; 45 A2
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            ldy #$00               ; A0 00
            lda L001D              ; A5 1D
            and #$7F               ; 29 7F
L2581:      cmp #$40               ; C9 40
            bcs L258D              ; B0 08
            asl L001B              ; 06 1B
            rol L001C              ; 26 1C
            rol A                  ; 2A
            iny                    ; C8
            bne L2581              ; D0 F4
L258D:      sta L001D              ; 85 1D
            lda L00A2              ; A5 A2
            and #$7F               ; 29 7F
            bmi L259D              ; 30 08
L2595:      dey                    ; 88
            asl L00A0              ; 06 A0
            rol L00A1              ; 26 A1
            rol A                  ; 2A
            bpl L2595              ; 10 F8
L259D:      sta L00A0              ; 85 A0
            lda #$FE               ; A9 FE
            sta L00A1              ; 85 A1
            lda L001D              ; A5 1D
            jsr L4633              ; 20 33 46
            lda #$00               ; A9 00
            sta L003E              ; 85 3E
            sta L003F              ; 85 3F
            sta L0040              ; 85 40
            tya                    ; 98
            bpl L25D1              ; 10 1E
            lda L00A1              ; A5 A1
L25B5:      asl A                  ; 0A
            rol L003E              ; 26 3E
            rol L003F              ; 26 3F
            rol L0040              ; 26 40
            iny                    ; C8
            bne L25B5              ; D0 F6
            sta L003D              ; 85 3D
            lda L0040              ; A5 40
            ora L00D1              ; 05 D1
            sta L0040              ; 85 40
            rts                    ; 60
L25C8:      lda L00A1              ; A5 A1
            sta L003D              ; 85 3D
            lda L00D1              ; A5 D1
            sta L0040              ; 85 40
            rts                    ; 60
L25D1:      beq L25C8              ; F0 F5
            lda L00A1              ; A5 A1
L25D5:      lsr A                  ; 4A
            dey                    ; 88
            bne L25D5              ; D0 FC
            sta L003D              ; 85 3D
            lda L00D1              ; A5 D1
            sta L0040              ; 85 40
            rts                    ; 60
L25E0:      lda L0D1E              ; AD 1E 0D
            bne L25F1              ; D0 0C
            txa                    ; 8A
            bpl L25EB              ; 10 03
            dex                    ; CA
            bmi L25F1              ; 30 06
L25EB:      inx                    ; E8
            bne L25F1              ; D0 03
            dex                    ; CA
            beq L25EB              ; F0 FA
L25F1:      rts                    ; 60

L25F2:      sta L00D1              ; 85 D1
            txa                    ; 8A
            clc                    ; 18
            adc L00D1              ; 65 D1
            tax                    ; AA
            bcc L25FD              ; 90 02
            ldx #$FF               ; A2 FF
L25FD:      bpl L260F              ; 10 10
L25FF:      lda L00D1              ; A5 D1
            rts                    ; 60

L2602:      sta L00D1              ; 85 D1
            txa                    ; 8A
            sec                    ; 38
            sbc L00D1              ; E5 D1
            tax                    ; AA
            bcs L260D              ; B0 02
            ldx #$01               ; A2 01
L260D:      bpl L25FF              ; 10 F0

L260F:      lda L0D1F              ; AD 1F 0D
            bne L25FF              ; D0 EB
            ldx #$80               ; A2 80
            bmi L25FF              ; 30 E7

;---------------------------------------------
; ARCTAN, A=TAN-1(1B/A0)
;---------------------------------------------

            lda L001B              ; A5 1B
            eor L00A0              ; 45 A0
            sta L0006              ; 85 06
            lda L00A0              ; A5 A0
            beq L2647              ; F0 25
            asl A                  ; 0A
            sta L00A0              ; 85 A0
            lda L001B              ; A5 1B
            asl A                  ; 0A
            cmp L00A0              ; C5 A0
            bcs L2635              ; B0 09
            jsr L2651              ; 20 51 26
            sec                    ; 38
L2630:      ldx L0006              ; A6 06
            bmi L264A              ; 30 16
            rts                    ; 60

L2635:      ldx L00A0              ; A6 A0
            sta L00A0              ; 85 A0
            stx L001B              ; 86 1B
            txa                    ; 8A
            jsr L2651              ; 20 51 26
            sta L00D1              ; 85 D1
            lda #$40               ; A9 40
            sbc L00D1              ; E5 D1
            bcs L2630              ; B0 E9
L2647:      lda #$3F               ; A9 3F
            rts                    ; 60

L264A:      sta L00D1              ; 85 D1
            lda #$80               ; A9 80
            sbc L00D1              ; E5 D1
            rts                    ; 60

L2651:      jsr L462B              ; 20 2B 46
            lda L00A1              ; A5 A1
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda L265E,X            ; BD 5E 26
            rts                    ; 60

;--------------------------------------------
; ATN table
;--------------------------------------------

L265E:      .byte $00,$01,$03,$04,$05,$06,$08,$09
            .byte $0A,$0B,$0C,$0D,$0F,$10,$11,$12
            .byte $13,$14,$15,$16,$17,$18,$19,$19
            .byte $1A,$1B,$1C,$1D,$1D,$1E,$1F,$1F

;--------------------------------------------
; WARP
;--------------------------------------------

L267E:      lda L0BF6              ; AD F6 0B
            clc                    ; 18
            adc L0BF8              ; 6D F8 0B
            clc                    ; 18
            adc L0BF7              ; 6D F7 0B
            tax                    ; AA
            lda L0BE2,X            ; BD E2 0B
            ora L0BF4              ; 0D F4 0B
            bne L26D7              ; D0 45
            ldy L0908              ; AC 08 09
            bmi L269F              ; 30 08
            tay                    ; A8
            jsr L112A              ; 20 2A 11
            cmp #$02               ; C9 02
            bcc L26D7              ; 90 38
L269F:      ldy L092C              ; AC 2C 09
            bmi L26AD              ; 30 09
            ldy #$24               ; A0 24
            jsr L1128              ; 20 28 11
            cmp #$02               ; C9 02
            bcc L26D7              ; 90 2A
L26AD:      lda #$81               ; A9 81
            sta L00A2              ; 85 A2
            sta L00A1              ; 85 A1
            sta L001B              ; 85 1B
            lda L0908              ; AD 08 09
            jsr L24E0              ; 20 E0 24
            sta L0908              ; 8D 08 09
            lda L092C              ; AD 2C 09
            jsr L24E0              ; 20 E0 24
            sta L092C              ; 8D 2C 09

            lda #$01               ; A9 01
            sta L00A6              ; Headerstatus
            sta L00A9              ; 85 A9
            lsr A                  ; 4A
            sta L0C05              ; 8D 05 0C
            ldx L0C01              ; Current view
            jmp L27C5              ; 4C C5 27

L26D7:      lda #$28               ; ???
            jmp L4281              ; Make sound

;--------------------------------------------
; Plot laserbeams
;--------------------------------------------

L26DC:
            jsr L3D24              ; Randomize $1,$2,$3
            and #$07               ; Mask 0-7
            adc #$43-4             ; Y+96-4 Centre of screen
            sta L0CD6              ; Laser Y

            jsr L3D24              ; Randomize $1,$2,$3
            and #$07               ; Mask 0-7
            adc #$80-4             ; X=128-4 Centre of screen
            sta L0CD5              ; Laser X

            lda L0C03              ; AD 03 0C
            adc #$08               ; 69 08
            sta L0C03              ; 8D 03 0C
            jsr L372B              ; 20 2B 37
L26FB:
            lda L00A6              ; Headerstatus
            bne L2735              ; D0 36

            lda #$20               ; X-Laser1 left
            ldy #$E0               ; X-Laser1 right
            jsr L270A              ; Plot 2 laserbeams

            lda #$30               ; X-Laser2 left
            ldy #$D0               ; X-Laser2 right

L270A:                             ; Plot 2 laserbeams
            sta L0033              ; Set x2
            lda L0CD5              ; Laser X
            sta L0031              ; Set x1
            lda L0CD6              ; Laser Y
            sta L0032              ; Set y1
            lda #134               ; y2 just above panel
            sta L0034              ; Set y2
            jsr L1621              ; Plot line

            lda L0CD5              ; Laser X
            sta L0031              ; Set x1
            lda L0CD6              ; Laser Y
            sta L0032              ; Set y1
            sty L0033              ; Set x2
            lda #134               ; y2 just above panel
            sta L0034              ; Set y2
            jmp L1621              ; Plot line

;--------------------------------------------

L2730:      ldx L0C01              ; Current view
            bne L2736              ; D0 01
L2735:      rts                    ; 60

;--------------------------------------------

L2736:      dex                    ; CA
            bne L276A              ; D0 31
            lda L0055              ; A5 55
            eor #$80               ; 49 80
            sta L0055              ; 85 55
            lda L005B              ; A5 5B
            eor #$80               ; 49 80
            sta L005B              ; 85 5B
            lda L005D              ; A5 5D
            eor #$80               ; 49 80
            sta L005D              ; 85 5D
            lda L0061              ; A5 61
            eor #$80               ; 49 80
            sta L0061              ; 85 61
            lda L0063              ; A5 63
            eor #$80               ; 49 80
            sta L0063              ; 85 63
            lda L0067              ; A5 67
            eor #$80               ; 49 80
            sta L0067              ; 85 67
            lda L0069              ; A5 69
            eor #$80               ; 49 80
            sta L0069              ; 85 69
            lda L006D              ; A5 6D
            eor #$80               ; 49 80
            sta L006D              ; 85 6D
            rts                    ; 60

L276A:      lda #$00               ; A9 00
            cpx #$02               ; E0 02
            ror A                  ; 6A
            sta L00BB              ; 85 BB
            eor #$80               ; 49 80
            sta L00BA              ; 85 BA
            lda L0053              ; Galaxy data
            ldx L0059              ; A6 59
            sta L0059              ; 85 59
            stx L0053              ; Galaxy data
            lda L0054              ; A5 54
            ldx L005A              ; A6 5A
            sta L005A              ; 85 5A
            stx L0054              ; 86 54
            lda L0055              ; A5 55
            eor L00BA              ; 45 BA
            tax                    ; AA
            lda L005B              ; A5 5B
            eor L00BB              ; 45 BB
            sta L0055              ; 85 55
            stx L005B              ; 86 5B

            ldy #$09               ; A0 09
            jsr L279E              ; 20 9E 27

            ldy #$0F               ; A0 0F
            jsr L279E              ; 20 9E 27

            ldy #$15               ; A0 15
L279E:      lda L0053,Y            ; Galaxy data
            ldx L0057,Y            ; B6 57
            sta L0057,Y            ; 99 57 00
            stx L0053,Y            ; Galaxy data
            lda L0054,Y            ; B9 54 00
            eor L00BA              ; 45 BA
            tax                    ; AA
            lda L0058,Y            ; B9 58 00
            eor L00BB              ; 45 BB
            sta L0054,Y            ; 99 54 00
            stx L0058,Y            ; 96 58
L27B8:      rts                    ; 60

;--------------------------------------------
;
;--------------------------------------------

L27B9:      stx L0C01              ; Current view
            jsr L27FC              ; Clear screen, plot screen

            jsr L27DC              ; Sight

            jmp L36CE              ; New stars

;--------------------------------------------
; Plot view screen
;--------------------------------------------

L27C5:
	jsr restore_panel	; Chart patch

            lda #$00               ; A9 00
            ldy L00A6              ; Headerstatus
            bne L27B9              ; D0 EE
            cpx L0C01              ; Current view
            beq L27B8              ; F0 E8

            stx L0C01              ; Current view
            jsr L27FC              ; Clear screen, plot screen

            jsr L192D              ; Flip

            jsr L36F4              ; WPSHPS

L27DC:      ldy L0C01              ; Current view
            lda L0310,Y            ; Laser item
            beq L27B8              ; F0 D4
            lda #$80               ; A9 80
            sta L007F              ; 85 7F

;            lda #$48               ; Y=$60-24
            lda #$2B               ; Y=$43-24 CHAR8x6
            sta L0080
              
            lda #$14               ; Length=20
            sta L0081
            jsr L2B8D              ; Plot crosshair lines

            lda #$0A               ; Length=10
            sta L0081
            jmp L2B8D              ; Erase middle of crosshair

L27FA:      lda #$01               ; A9 01

;--------------------------------------------
; Clear screen, plot frame 
;--------------------------------------------

L27FC:      sta L00A6              ; Headerstatus

L27FE:      lda #$80
            sta L007E              ; Set var VDU stat

            asl A
            sta L0BED              ; Plot dir
            sta L0C06              ; Set var
            sta L0C07              ; Set var

;            ldx #$58               ; Start at $5800
	ldx #$80
            jsr L289B              ; Clear screen

            ldx L002F              ; Hyperspace timer
            beq L2818

            jsr L3048              ; Print Hyperspace timer

L2818:      ldy #$01               ; A0 01
            sty L002D              ; Cursor Y
            lda L00A6              ; Headerstatus
            bne L2834              ; D0 14

            ldy #$0B               ; A0 0B
            sty L002C              ; Cursor X
            lda L0C01              ; Current view
            ora #$60               ; Text FRONT,REAR,LEFT,RIGHT
            jsr L34CB              ; De-token

            jsr L30D8              ; Print space

            lda #$AF               ; Text 'VIEW'
            jsr L34CB              ; De-token

L2834:      ldx #$00
            stx L007E              ; VDU stat

;--------------------------------------------
; Draw sidelines + topline
;--------------------------------------------

L2838:      ldx #$00               ; x1=0
            stx L0031
            stx L0032              ; y1=0
            dex
            stx L0033              ; x2=255
            jsr L1814              ; y2=y1 + plot line

            lda #$02               ; x1=2
            sta L0031
            sta L0033              ; x2=2
            jsr L284D              ; Plot line

L284D:      jsr L2850              ; Plot line

L2850:      lda #$00               ; y1=0
            sta L0032
            lda #$BF               ; y2=191
;	lda #135		; CHAR6x8
            sta L0034
            dec L0031              ; x1=x1-1
            dec L0033              ; x2=x2-1
            jmp L1621              ; Plot line

;--------------------------------------------

L285F:      ldy #$01
            .byte $2C

L2862:      ldy #$1E

;--------------------------------------------
; Pause X,Y
;--------------------------------------------

L2864:      txa                    ; 8A
            ldx #$00               ; A2 00
            .byte $2C

            .byte $D0,$FD
            .byte $2C
L286B:
            .byte $D0,$FB
            dex                    ; CA
            bne L286B              ; D0 FB
            tax                    ; AA
            dey                    ; 88
            bne L2864              ; D0 F0
            rts                    ; 60

L2875:      jsr L2E13              ; 20 13 2E
            jsr L2F0D              ; 20 0D 2F
            jsr L2E13              ; 20 13 2E
            lda L00A6              ; Headerstatus
            beq L289A              ; F0 18

;--------------------------------------------
; Wipe last two text lines 
;--------------------------------------------

L2882:      jsr L2838              ; Wipe text + draw frame

;            ldx #$71               ; Start $7100

	ldx wipebyte		; Wipe bottom 2 lines

            jsr L289B              ; Clear area

            jsr L2838              ; Draw sidelines+topline

;            lda #$14               ; Y-pos text4
            lda #$12               ; Y-pos text CHAR6x8
            sta L002D              ; Cursor Y
            jsr L29B9              ; New line

            ldy #$01
            sty L002C              ; Cursor X
            dey
            tya                    ; A=0
L289A:      rts

;--------------------------------------------
; Clear screen from top to panel
;
; X=hb startaddress
;--------------------------------------------

L289B:
	jsr L40E0		; Clear page in X

	inx			; Next page
	cpx maskbyte			; Check lower limit
	bne L289B		; Repeat if not reached
L289D:
	rts

;--------------------------------------------
; Update flight grid scanner
;--------------------------------------------

L28A4:
	bit L00A6		; Correction Charts
	bvs L289D
	bmi L289D

            lda L0072              ; INWK+31
            and #$10               ; 29 10
            beq L289A              ; F0 F0

            lda L00AB              ; TYPE
            bmi L289A              ; 30 EC

            lda L0054              ; INWK+1
            ora L0057              ; INWK+4
            ora L005A              ; INWK+7
            and #$C0               ; 29 C0
            bne L289A              ; D0 E2

            lda L0054              ; INWK+1
            clc                    ; 18
            ldx L0055              ; INWK+2
            bpl L28C3              ; Skip ip positive
            eor #$FF               ; Else invert
            adc #$01
L28C3:
            adc #$7B               ; 69 7B
            sta L0031              ; Set x1

            lda L005A              ; INWK+7
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            ldx L005B              ; INWK+8
            bpl L28D3              ; 10 03
            eor #$FF               ; 49 FF
            sec                    ; 38
L28D3:
;            adc #$23               ; 69 23

            adc #$5b               ; 69 23

            eor #$FF               ; 49 FF
            sta L0007              ; 85 07

	sta $7001

            lda L0057              ; INWK+4
            lsr A                  ; 4A
            clc                    ; 18
            ldx L0058              ; INWK+5
            bmi L28E4              ; 30 03
            eor #$FF               ; 49 FF
            sec                    ; 38
L28E4:      adc L0007              ; 65 07
            bpl L28F2              ; 10 0A
            cmp #$C2-56               ; C9 C2
            bcs L28EE              ; B0 02
            lda #$C2-56               ; A9 C2
L28EE:      cmp #$F7-56               ; C9 F7
            bcc L28F4              ; 90 02

L28F2:      lda #$F6-56

L28F4:
;	sec
;	sbc #56              ; Screen correction
            sta L0032              ; Set y1

            sec                    ; 38
            sbc L0007              ; E5 07

            php                    ; 08
            pha                    ; 48
            jsr L37A7              ; Plot small line

            lda L160B,X            ; Get pixel mask
            sta L0031

            pla                    ; 68
            plp                    ; 28

            tax                    ; AA
            beq L2925              ; F0 1D
            bcc L2926              ; 90 1C

L290A:      dey                    ; 88
            bpl L291C              ; 10 0F

            ldy #$07               ; Top border line cross
;            lda L0007
;            sec
;            sbc #$40
;            sta L0007
;            lda L0008
;            sbc #$01
;            sta L0008

	dec L0008
L291C:
	sty tmp_y
	lda rowbyte,y
	tay
            lda L0031              ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

            dex                    ; Next pixel
            bne L290A              ; If not last, repeat
L2925:      rts

;----------------------------------------------------

L2926:      jsr L2936              ; Move 1 line down

L2929:      jsr L2936              ; Move 1 line down

	sty tmp_y
	lda rowbyte,y
	tay
            lda L0031              ; Plot pixel on screen
            eor (L0007),Y
            sta (L0007),Y
	ldy tmp_y

            inx                    ; Next pixel
            bne L2929              ; If not last, repeat
            rts

L2936:
            iny                    ; Move 1 line down
            cpy #$08               ; Check bottom border line cross
            bne L2925

	inc L0007
	inc L0007
	inc L0007
	inc L0007
            ldy #$00               ; Bottom border line cross

;----------------------------------------------------
; Point to 8 lines below
;----------------------------------------------------

L293D:
	dec L0007		; Screen-lb 4 columns to left
	dec L0007
	dec L0007
	dec L0007
L293E:
	inc L0008		; Screen-hb 8 lines below
	rts

;--------------------------------------------
; Start ELITED.TXT
;--------------------------------------------

L294A:      pha                    ; 48

            ldx #$0C               ; A2 0C
            cpx L0CDC              ; EC DC 0C
            bcc L295D              ; 90 0B
L2952:      adc L0317,X            ; Inventory
            dex                    ; CA
            bpl L2952              ; 10 FA
            cmp L0316              ; CD 16 03
            pla                    ; 68
            rts                    ; 60

L295D:      ldy L0CDC              ; AC DC 0C
            adc L0317,Y            ; Inventory
            cmp #$C8               ; C9 C8
            pla                    ; 68
            rts                    ; 60

;--------------------------------------------
;
;--------------------------------------------

L2967:      jsr L296A              ; 20 6A 29

L296A:      jsr L296D              ; 20 6D 29

L296D:      lda L0078              ; A5 78
            clc                    ; 18
            adc L007A              ; 65 7A
            tax                    ; AA
            lda L0079              ; A5 79
            adc L007B              ; 65 7B
            tay                    ; A8
            lda L007A              ; A5 7A
            sta L0078              ; 85 78
            lda L007B              ; A5 7B
            sta L0079              ; 85 79
            lda L007D              ; A5 7D
            sta L007B              ; 85 7B
            lda L007C              ; A5 7C
            sta L007A              ; 85 7A
            clc                    ; 18
            txa                    ; 8A
            adc L007A              ; 65 7A
            sta L007C              ; 85 7C
            tya                    ; 98
            adc L007B              ; 65 7B
            sta L007D              ; 85 7D
            rts                    ; 60

;--------------------------------------------
; Check planet nr>0
;--------------------------------------------

L2994:      lda L0CF0              ; Check planet nr
            ora L0CF1
            bne L299F              ; If >0, jump
            inc L002D              ; Cursor Y
            rts

;--------------------------------------------
; Print distance
;--------------------------------------------

L299F:      lda #$BF               ; Text 'DISTANCE'
            jsr L34C6              ; De-token + ':'

            ldx L0CF0              ; Get distance
            ldy L0CF1
            sec
            jsr L3050              ; Print quantity

            lda #$C3               ; Text ' LIGHT YEARS'

L29B0:      jsr L34CB              ; De-token
L29B3:      inc L002D              ; Cursor Y
L29B5:      lda #$80               ; Set screen = chart
            sta L007E              ; VDU stat

L29B9:      lda #$0D               ; New line
            jmp L34CB              ; De-token

;--------------------------------------------

L29BE:      lda #$AD               ; Text 'MAINLY'
            jsr L34CB              ; De-token
            jmp L2A00              ; 4C 00 2A

;--------------------------------------------
L29C6:      jsr L34CB              ; De-token
            jmp L30D8              ; Print space

;--------------------------------------------
; F6=Display Data on planet screen
;--------------------------------------------

L29CC:
	jsr restore_panel

            jsr L27FA              ; Clear screen+plot frame

            lda #$09
            sta L002C              ; Cursor X

            lda #$A3               ; Text 'DATA ON [planet name]'
            jsr L34CB              ; De-token

            jsr L1806              ; Plot header line

            jsr L29B3              ; New line

            inc L002D              ; Cursor Y
            jsr L2994              ; Check planetnr>0

; Economy

            lda #$C2               ; Text 'ECONOMY'
            jsr L34C6              ; De-token + ':'

            lda L0CE9              ; Planet status
            clc                    ; Convert to 0,1 or 2
            adc #$01
            lsr A
            cmp #$02
            beq L29BE
            lda L0CE9              ; Planet status
            bcc L29FB
            sbc #$05
            clc
L29FB:      adc #$AA               ; Text RICH,POOR,AVERAGE
            jsr L34CB              ; De-token

L2A00:      lda L0CE9              ; Get planet status
            lsr A                  ; Convert to 0,1
            lsr A
            clc
            adc #$A8               ; Text INDUSTRIAL/AGRICULTURAL
            jsr L29B0              ; De-token + new line

; Government

            lda #$A2               ; Text 'GOVERNMENT'
            jsr L34C6              ; De-token + ':'

            lda L0CEA              ; Government type (0-7)
            clc
            adc #$B1               ; Text ANARCHY,FEUDAL,MULTI-GOVERNMENT,DICTATORSHIP
                                   ;      COMMUNIST,CONFEDERACY,DEMOCRACY,CORPORATE STATE
            jsr L29B0              ; De-token + new line

; Tech level

            lda #$C4               ; Text 'TECH.LEVEL'
            jsr L34C6              ; De-token + ':'

            ldx L0CEB              ; Tech.level
            inx                    ; Convert to 1-12
            clc
            jsr L1C33              ; Print nr
            jsr L29B3              ; New line

; Population

            lda #$C0               ; Text 'POPULATION'
            jsr L34C6              ; De-token + ':'

            sec
            ldx L0CEC              ; Population
            jsr L1C33              ; Print nr

            lda #$C6               ; Text ' BILLION'
            jsr L29B0              ; De-token + new line

            lda #$28               ; Text '('
            jsr L34CB              ; De-token

            lda L007C              ; Check for human colonials
            bmi L2A4B

            lda #$BC               ; Text 'HUMAN COLONIAL'
            jsr L34CB              ; De-token
            jmp L2A87              ; Forced jump

L2A4B:      lda L007D              ; A5 7D
            lsr A                  ; 4A
            lsr A                  ; 4A
            pha                    ; 48
            and #$07               ; 29 07
            cmp #$03               ; C9 03
            bcs L2A5B              ; B0 05
            adc #$E3               ; Text LARGE,FIERCE,SMALL
            jsr L29C6              ; De-token+space

L2A5B:      pla                    ; 68
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp #$06               ; C9 06
            bcs L2A68              ; B0 05
            adc #$E6               ; Text GREEN,RED,YELLOW,BLUE,BLACK,CONFEDERACY
            jsr L29C6              ; De-token+space

L2A68:      lda L007B              ; A5 7B
            eor L0079              ; 45 79
            and #$07               ; 29 07
            sta L007F              ; 85 7F
            cmp #$06               ; C9 06
            bcs L2A79              ; B0 05
            adc #$EC               ; Text SLIMY,BUG-EYED,HORNED,BONY,FAT,FURRY
            jsr L29C6              ; De-token+space

L2A79:      lda L007D              ; A5 7D
            and #$03               ; 29 03
            clc                    ; 18
            adc L007F              ; 65 7F
            and #$07               ; 29 07
            adc #$F2               ; Text RODENT,FROG,LIZARD,LOBSTER,BIRD
;                                         HUMANOID,FELINE,INSECT
            jsr L34CB              ; De-token

L2A87:      lda #$53               ; Text 'S'
            jsr L34CB              ; De-token

            lda #$29               ; Text ')'
            jsr L29B0              ; De-token + new line

; Gross Productivity

            lda #$C1               ; Text 'GROSS PRODUCTIVITY'
            jsr L34C6              ; De-token + ':'

            ldx L0CEE              ; Gross productivity-lb
            ldy L0CEF              ; Gross productivity-hb
            jsr L304F              ; Print nr

            jsr L30D8              ; Print space

            lda #$00               ; A9 00
            sta L007E              ; VDU stat
            lda #$4D               ; Text 'M'
            jsr L34CB              ; De-token

            lda #$E2               ; Text ' CR '
            jsr L29B0              ; De-token + new line

; Average radius

            lda #$FA               ; Text 'AVERAGE RADIUS'
            jsr L34C6              ; De-token + ':'

            lda L007D              ; A5 7D
            ldx L007B              ; A6 7B
            and #$0F               ; 29 0F
            clc                    ; 18
            adc #$0B               ; 69 0B
            tay                    ; A8
            jsr L3050              ; Print 5 digit nr

            jsr L30D8              ; Print space

;--------------------------------------------
; Print 'km'
;--------------------------------------------

            lda #$6B               ; Character 'k'
            jsr L1CF8              ; Print character
            lda #$6D               ; Character 'm'
            jmp L1CF8              ; Print character

;--------------------------------------------

L2ACF:      lda L0079              ; A5 79
            and #$07               ; 29 07
            sta L0CE9              ; Planet status
            lda L007A              ; A5 7A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            and #$07               ; 29 07
            sta L0CEA              ; Government type
            lsr A                  ; 4A
            bne L2AEB              ; D0 08
            lda L0CE9              ; Planet status
            ora #$02               ; 09 02
            sta L0CE9              ; Planet status
L2AEB:      lda L0CE9              ; Planet status
            eor #$07               ; 49 07
            clc                    ; 18
            sta L0CEB              ; Tech.level
            lda L007B              ; A5 7B
            and #$03               ; 29 03
            adc L0CEB              ; Tech.level
            sta L0CEB              ; Tech.level
            lda L0CEA              ; Government type
            lsr A                  ; 4A
            adc L0CEB              ; Tech.level
            sta L0CEB              ; Tech.level
            asl A                  ; 0A
            asl A                  ; 0A
            adc L0CE9              ; Planet status
            adc L0CEA              ; Government type
            adc #$01               ; 69 01
            sta L0CEC              ; Population
            lda L0CE9              ; Planet status
            eor #$07               ; 49 07
            adc #$03               ; 69 03
            sta L001B              ; 85 1B
            lda L0CEA              ; Government type
            adc #$04               ; 69 04
            sta L00A0              ; 85 A0
            jsr L2403              ; 20 03 24
            lda L0CEC              ; Population
            sta L00A0              ; 85 A0
            jsr L2403              ; 20 03 24
            asl L001B              ; 06 1B
            rol A                  ; 2A
            asl L001B              ; 06 1B
            rol A                  ; 2A
            asl L001B              ; 06 1B
            rol A                  ; 2A
            sta L0CEF              ; Gross productivity-hb
            lda L001B              ; A5 1B
            sta L0CEE              ; Gross productivity-lb
            rts                    ; 60

;--------------------------------------------
; F4=Display Galactic chart galaxy screen
;--------------------------------------------

L2B42:
	jsr backup_panel

            lda #$40
            jsr L27FC              ; Clear screen, plot screen

            lda #$07
            sta L002C              ; Cursor X

            jsr L2F02              ; 20 02 2F

            lda #$C7               ; Text 'GALACTIC CHART [galaxy]'
            jsr L34CB              ; De-token

            jsr L1806              ; 20 06 18
            lda #$98               ; A9 98
            jsr L180A              ; 20 0A 18
            jsr L2BF8              ; 20 F8 2B
            ldx #$00               ; A2 00
L2B60:      stx L00A3              ; 86 A3
            ldx L007B              ; A6 7B
            ldy L007C              ; A4 7C
            tya                    ; 98
            ora #$50               ; 09 50
            sta L00A7              ; 85 A7
            lda L0079              ; A5 79
            lsr A                  ; 4A
            clc                    ; 18
            adc #$18               ; 69 18
            sta L0032              ; Set y1
            jsr L1846              ; 20 46 18
            jsr L2967              ; 20 67 29
            ldx L00A3              ; A6 A3
            inx                    ; E8
            bne L2B60              ; D0 E2
            lda L0CF2              ; AD F2 0C
            sta L007F              ; 85 7F
            lda L0CF3              ; AD F3 0C
            lsr A                  ; 4A
            sta L0080              ; 85 80
            lda #$04               ; A9 04
            sta L0081              ; 85 81

;------------------------------------------
; Plot hor + ver crosshair line
;------------------------------------------

L2B8D:      lda #$18               ; A9 18
            ldx L00A6              ; Headerstatus
            bpl L2B95              ; 10 02
            lda #$00               ; A9 00
L2B95:      sta L0084              ; 85 84
            lda L007F              ; A5 7F
            sec                    ; 38
            sbc L0081              ; E5 81
            bcs L2BA0              ; B0 02
            lda #$00               ; A9 00
L2BA0:      sta L0031              ; Set x1
            lda L007F              ; A5 7F
            clc                    ; 18
            adc L0081              ; 65 81
            bcc L2BAB              ; 90 02
            lda #$FF               ; A9 FF
L2BAB:      sta L0033              ; 85 33
            lda L0080              ; A5 80
            clc                    ; 18
            adc L0084              ; 65 84
            sta L0032              ; Set y1
            jsr L1814              ; 20 14 18
            lda L0080              ; A5 80
            sec                    ; 38
            sbc L0081              ; E5 81
            bcs L2BC0              ; B0 02
            lda #$00               ; A9 00
L2BC0:      clc                    ; 18
            adc L0084              ; 65 84
            sta L0032              ; Set y1
            lda L0080              ; A5 80
            clc                    ; 18
            adc L0081              ; 65 81
            adc L0084              ; 65 84
            cmp #$98               ; C9 98
            bcc L2BD6              ; 90 06
            ldx L00A6              ; Headerstatus
            bmi L2BD6              ; 30 02
            lda #$97               ; A9 97
L2BD6:      sta L0034              ; 85 34
            lda L007F              ; A5 7F
            sta L0031              ; Set x1
            sta L0033              ; 85 33
            jmp L1621              ; Plot line

;--------------------------------------------
;--------------------------------------------

L2BE1:      lda #$68               ; A9 68
            sta L007F              ; 85 7F
            lda #$5A               ; A9 5A
            sta L0080              ; 85 80
            lda #$10               ; A9 10
            sta L0081              ; 85 81
            jsr L2B8D              ; Plot crosshair lines
            lda L030D              ; Fuel level
            sta L003D              ; 85 3D
            jmp L2C1C              ; 4C 1C 2C

;--------------------------------------------
;
;--------------------------------------------

L2BF8:      lda L00A6              ; Headerstatus
            bmi L2BE1              ; 30 E5
            lda L030D              ; Fuel level
            lsr A                  ; 4A
            lsr A                  ; 4A
            sta L003D              ; 85 3D
            lda L0301              ; Get commander home X
            sta L007F              ; 85 7F
            lda L0302              ; Get Commander home Y
            lsr A                  ; 4A
            sta L0080              ; 85 80
            lda #$07               ; A9 07
            sta L0081              ; 85 81
            jsr L2B8D              ; Plot crosshair lines

            lda L0080              ; A5 80
            clc                    ; 18
            adc #$18               ; 69 18
            sta L0080              ; 85 80
L2C1C:      lda L007F              ; A5 7F
            sta L00D2              ; 85 D2
            lda L0080              ; A5 80
            sta L00E0              ; 85 E0
            ldx #$00               ; A2 00
            stx L00E1              ; 86 E1
            stx L00D3              ; 86 D3
            inx                    ; E8
            stx L0077              ; 86 77
            ldx #$02               ; A2 02
            stx L00B6              ; 86 B6
            jsr L39F1              ; Draw circle
            rts                    ; 60

;--------------------------------------------
; F1=Display buy materials screen
;--------------------------------------------

L2C35:
	jsr restore_panel

            jsr L27FA              ; Clear screen, no header

            jsr L30EE              ; Print 'UNIT PRICE FOR SALE'

	dec L002D		; CHAR8x6

            lda #$80
            sta L007E              ; VDU stat

            lda #$00
            sta L0CDC              ; Product counter

L2C44:      jsr L305F              ; Print line

            lda L0CDA              ; AD DA 0C
            bne L2C5B              ; D0 0F
            jmp L2CBD              ; 4C BD 2C

L2C4F:      ldy #$B0               ; Text 'QUANTITY'
L2C51:      jsr L30D8              ; Print space
            tya
            jsr L3057              ; De-token + '?'
            jsr L33D1              ; Sound

L2C5B:      jsr L2882              ; Wipe text and draw frame

	inc L002D		; CHAR8x6
            lda #$CC               ; Print 'QUANTITY OF'
            jsr L34CB              ; De-token

            lda L0CDC              ; Print string $30-$41
            clc
            adc #$D0
            jsr L34CB              ; De-token

            lda #$2F               ; Text '/'
            jsr L34CB              ; De-token

            jsr L30CB              ; Print unit-type

            lda #$3F               ; Text '?'
            jsr L34CB              ; De-token

            jsr L29B9              ; New line

            ldx #$00               ; A2 00
            stx L00A1              ; 86 A1
            ldx #$0C               ; A2 0C
            stx L0006              ; 86 06

            jsr L2CDB              ; Scan numeric key
            bcs L2C4F              ; B0 C6

            sta L001B              ; 85 1B
            jsr L294A              ; 20 4A 29

            ldy #$CE               ; Text 'CARGOPRICE'
            bcs L2C51              ; B0 BF

            lda L0CD9              ; AD D9 0C
            sta L00A0              ; 85 A0
            jsr L3253              ; 20 53 32

            jsr L320B              ; 20 0B 32

            ldy #$C5               ; A0 C5
            bcc L2C51              ; 90 B0
            ldy L0CDC              ; Product counter
            lda L00A1              ; A5 A1
            pha                    ; 48
            clc                    ; 18
            adc L0317,Y            ; Inventory
            sta L0317,Y            ; Inventory
            lda L0335,Y            ; B9 35 03
            sec                    ; 38
            sbc L00A1              ; E5 A1
            sta L0335,Y            ; 99 35 03
            pla                    ; 68
            beq L2CBD              ; F0 03
            jsr L33C9              ; 20 C9 33

L2CBD:      lda L0CDC              ; Product counter
            clc                    ; 18
;            adc #$05               ; 69 05
            adc #$04               ; CHAR8x6
            sta L002D              ; Cursor Y

            lda #$00               ; A9 00
            sta L002C              ; Cursor X

            inc L0CDC              ; Next product
            lda L0CDC              ; Get product counter
            cmp #$11               ; All products printed?
            bcs L2CD6              ; No, repeat

            jmp L2C44              ; 4C 44 2C

;--------------------------------------------

L2CD6:      lda #$A7               ; A9 A7
            jmp L3E52              ; 4C 52 3E

;--------------------------------------------
; Scan numeric key
;--------------------------------------------

L2CDB:      ldx #$00               ; Reset keyflag
            stx L00A1
            ldx #$0C               ; ??
            stx L0006

L2CE3:
;            jsr L43A4              ; Read key in X/A
	jsr OSRDCH
            sta L00A0              ; Save key

            sec                    ; If '0'<key<'9'
            sbc #$30
            bcc L2D14
            cmp #$0A               ; If key>'9', jump
            bcs L2CD6
            sta L00A2              ; Save num key

            lda L00A1              ; Get key
            cmp #$1A               ; Check key>=26
            bcs L2D14              ; Yes, jump
            asl A                  ; 0A
            sta L00D1              ; 85 D1
            asl A                  ; 0A
            asl A                  ; 0A
            adc L00D1              ; 65 D1
            adc L00A2              ; 65 A2
            sta L00A1              ; 85 A1
            cmp L0CDA              ; CD DA 0C
            beq L2D0B              ; F0 02
            bcs L2D14              ; B0 09

L2D0B:      lda L00A0              ; A5 A0
            jsr L1CF8              ; Print character

            dec L0006              ; C6 06
            bne L2CE3              ; D0 CF

L2D14:      lda L00A1              ; A5 A1
            rts                    ; 60

;--------------------------------------------
; F2=Display Sell cargo screen
;--------------------------------------------

L2D17:
	jsr restore_panel

            lda #$04               ; Sell cargo screen
            jsr L27FC              ; Clear screen, plot screen

            lda #$04
            sta L002D              ; Cursor Y
            sta L002C              ; Cursor X

            lda #$CD               ; Print 'SELL'
            jsr L34CB              ; De-token

            lda #$CE               ; Text ' CARGO'
            jsr L34C6              ; De-token + ':'

L2D2C:      ldy #$00
L2D2E:      sty L0CDC              ; Product line counter
            ldx L0317,Y            ; Inventory
            beq L2D8E              ; If quantity=0, skip

            tya                    ; Ptr=line counter * 4
            asl A
            asl A
            tay
            lda L4456,Y            ; Get cargo data
            sta L0080              ; Store data

            txa
            pha                    ; Save cargo quantity

            jsr L29B5              ; New line

            clc                    ; Print product name
            lda L0CDC
            adc #$D0
            jsr L34CB              ; De-token

            lda #$0E
            sta L002C              ; Cursor X

            pla                    ; Get cargo quantity
            tax
            clc
            jsr L1C33              ; Print quantity

            jsr L30CB              ; Print unit-type

            lda L00A6              ; Headerstatus
            cmp #$04               ; C9 04
            bne L2D8E              ; D0 2E

            lda #$CD               ; Text ' SELL (Y/N)?'
            jsr L2DC9              ; De-token + input
            bcc L2D8E              ; 90 27

            lda L0CDC              ; Product line counter
            ldx #$FF
            stx L007E              ; VDU stat
            jsr L305F              ; Print product, unit, unit-price and quantity

            ldy L0CDC              ; Set inventory ptr
            lda L0317,Y            ; Load inventory data
            sta L001B              ; Save data

            lda L0CD9              ; AD D9 0C
            sta L00A0              ; 85 A0
            jsr L3253              ; 20 53 32

            jsr L3232              ; Add X,Y to cash

            lda #$00
            ldy L0CDC              ; Set inventory ptr
            sta L0317,Y            ; Reset inventory
            sta L007E              ; VDU stat

L2D8E:      ldy L0CDC              ; Get product counter
            iny                    ; Next product
            cpy #$11               ; Last product?
            bcs L2D99              ; Yes, jump

            jmp L2D2E              ; No, repeat

L2D99:      lda L00A6              ; Headerstatus
            cmp #$04               ; C9 04
            bne L2DA5              ; D0 06

            jsr L33D1              ; Sound
            jmp L2CD6              ; Display Inventory screen

L2DA5:      rts

;--------------------------------------------
; F9=Display Inventory screen
;--------------------------------------------

L2DA6:
	jsr restore_panel

            lda #$08
            jsr L27FC              ; Clear screen, plot screen

            lda #$0B
            sta L002C              ; Cursor X

            lda #$A4               ; Text 'INVENTORY'
            jsr L29B0              ; De-token + new line

            jsr L1802              ; Draw header line

            jsr L3497              ; Print FUEL: quantity LIGHT YEARS

            lda L0316              ; Check Large Cargo Bay
            cmp #$1A
            bcc L2DC6

            lda #$6B               ; Text 'LARGE CARGO BAY'
            jsr L34CB              ; De-token

L2DC6:      jmp L2D2C              ; 4C 2C 2D

;--------------------------------------------
; Input (Y/N)?
; If return pressed, choice is 'n'
;--------------------------------------------

L2DC9:      pha                    ; Save A
            jsr L30D8              ; Print space
            pla                    ; Restore A
            jsr L34CB              ; De-token
            lda #$E1               ; Text '(Y/N)?'
            jsr L34CB              ; De-token

;            jsr L43A4              ; Read key in X
	jsr OSRDCH
            ora #$20
            cmp #$79
            beq L2DE4              ; Jump if Y/y

            lda #$6E               ; Character 'n'
            jmp L1CF8              ; Print character

L2DE4:      jsr L1CF8              ; Print character
            sec                    ; 38
            rts                    ; 60

;--------------------------------------------


L2DE9:      txa                    ; 8A
            pha                    ; 48
            dey                    ; 88
            tya                    ; 98
            eor #$FF               ; 49 FF
            pha                    ; 48
            jsr L2E13              ; 20 13 2E
            pla                    ; 68
            sta L0082              ; 85 82
            lda L0CF3              ; AD F3 0C
            jsr L2E2B              ; 20 2B 2E
            lda L0083              ; A5 83
            sta L0CF3              ; 8D F3 0C
            sta L0080              ; 85 80
            pla                    ; 68
            sta L0082              ; 85 82
            lda L0CF2              ; AD F2 0C
            jsr L2E2B              ; 20 2B 2E
            lda L0083              ; A5 83
            sta L0CF2              ; 8D F2 0C
            sta L007F              ; 85 7F
L2E13:      lda L00A6              ; Headerstatus
            beq L2E3B              ; F0 24
            bmi L2E3C              ; 30 23
            lda L0CF2              ; AD F2 0C
            sta L007F              ; 85 7F
            lda L0CF3              ; AD F3 0C
            lsr A                  ; 4A
            sta L0080              ; 85 80
            lda #$04               ; A9 04
            sta L0081              ; 85 81
            jmp L2B8D              ; Plot crosshair lines
L2E2B:      sta L0083              ; 85 83
            clc                    ; 18
            adc L0082              ; 65 82
            ldx L0082              ; A6 82
            bmi L2E37              ; 30 03
            bcc L2E39              ; 90 03
            rts                    ; 60
L2E37:      bcc L2E3B              ; 90 02
L2E39:      sta L0083              ; 85 83
L2E3B:      rts                    ; 60

;-------------------------------------------
;-------------------------------------------

L2E3C:      lda L0CF2              ; AD F2 0C
            sec                    ; 38
            sbc L0301              ; Commander home X
            cmp #$26               ; Check left border > 38
            bcc L2E4B              ; 90 04
            cmp #$E6               ; Check right border < 230
            bcc L2E3B              ; 90 F0

L2E4B:      asl A                  ; 0A
            asl A                  ; 0A
            clc                    ; 18
            adc #$68               ; 69 68
            sta L007F              ; 85 7F
            lda L0CF3              ; AD F3 0C
            sec                    ; 38
            sbc L0302              ; Commander home Y
            cmp #$26               ; Check top border > 38
            bcc L2E61              ; 90 04
            cmp #$DC               ; Check bottom border > 220
            bcc L2E3B              ; 90 DA

L2E61:      asl A                  ; 0A
            clc                    ; 18
            adc #$5A               ; 69 5A
            sta L0080              ; 85 80
            lda #$08               ; A9 08
            sta L0081              ; 85 81
            jmp L2B8D              ; Plot crosshair lines

;--------------------------------------------
; F5=Display Short Range Chart screen
;--------------------------------------------

L2E6E:
	jsr backup_panel

            lda #$80
            jsr L27FC              ; Clear screen, plot frame

            lda #$07
            sta L002C              ; Cursor X

            lda #$BE               ; Text 'SHORT RANGE CHART'
            jsr L17FF              ; Print header + line

            jsr L2BF8              ; Draw hyperspace circle
            jsr L2E13              ; Plot crosshairs
            jsr L2F02              ; Copy vars

            lda #$00               ; Reset ptr

            sta L00B8
            ldx #$18
L2E8B:      sta L0053,X            ;Galaxy data
            dex
            bpl L2E8B

L2E90:      lda L007B              ; A5 7B
            sec                    ; 38
            sbc L0301              ; Commander home X
            bcs L2E9C              ; B0 04
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
L2E9C:      cmp #$14               ; C9 14
            bcs L2EF8              ; B0 58
            lda L0079              ; A5 79
            sec                    ; 38
            sbc L0302              ; Commander home Y
            bcs L2EAC              ; B0 04
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
L2EAC:      cmp #$26               ; C9 26
            bcs L2EF8              ; B0 48
            lda L007B              ; A5 7B
            sec                    ; 38
            sbc L0301              ; Commander home X
            asl A                  ; 0A
            asl A                  ; 0A
            adc #$68               ; 69 68
            sta L0037              ; 85 37
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            sta L002C              ; Cursor X
            inc L002C              ; Cursor X
            lda L0079              ; A5 79
            sec                    ; 38
            sbc L0302              ; Commander home Y
            asl A                  ; 0A
            adc #$5A               ; 69 5A
            sta L0032              ; Set y1
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tay                    ; A8
            ldx L0053,Y            ; Galaxy data
            beq L2EE1              ; F0 0B
            iny                    ; C8
            ldx L0053,Y            ; Galaxy data
            beq L2EE1              ; F0 06
            dey                    ; 88
            dey                    ; 88
            ldx L0053,Y            ; Galaxy data
            bne L2EF1              ; D0 10
L2EE1:      sty L002D              ; Cursor Y
            cpy #$03               ; C0 03
            bcc L2EF8              ; 90 11
            dex                    ; CA
            stx L0053,Y            ; Galaxy data
            lda #$80               ; A9 80
            sta L007E              ; VDU stat
            jsr L343B              ; Print planet name

L2EF1:      lda L0037              ; A5 37
            sta L0031              ; Set x1
            jsr L37A7              ; Plot small line
L2EF8:      jsr L2967              ; 20 67 29
            inc L00B8              ; E6 B8
            beq L2F0C              ; If end, jump
            jmp L2E90              ; Repeat

;--------------------------------------------
; Copy $0303-$308 -> $0078-$007D
;--------------------------------------------

L2F02:      ldx #$05               ; A2 05
L2F04:      lda L0303,X            ; BD 03 03
            sta L0078,X            ; 95 78
            dex                    ; CA
            bpl L2F04              ; 10 F8
L2F0C:      rts                    ; 60

;--------------------------------------------
; Plot line
;--------------------------------------------

L2F0D:      jsr L2F02              ; Copy coordinates

            ldy #$7F               ; A0 7F
            sty L00D1              ; 84 D1
            lda #$00               ; A9 00
            sta L008F              ; 85 8F

L2F18:      lda L007B              ; A5 7B
            sec                    ; 38
            sbc L0CF2              ; ED F2 0C
            bcs L2F24              ; B0 04

            eor #$FF               ; Invert
            adc #$01

L2F24:      lsr A                  ; 4A
            sta L00A2              ; 85 A2

            lda L0079              ; A5 79
            sec                    ; 38
            sbc L0CF3              ; ED F3 0C
            bcs L2F33              ; B0 04

            eor #$FF               ; Invert
            adc #$01

L2F33:      lsr A                  ; 4A
            clc                    ; 18
            adc L00A2              ; 65 A2
            cmp L00D1              ; C5 D1
            bcs L2F46              ; B0 0B

            sta L00D1              ; 85 D1

            ldx #$05               ; Switch p1<>p2
L2F3F:      lda L0078,X
            sta L007F,X
            dex
            bpl L2F3F

L2F46:      jsr L2967              ; 20 67 29

            inc L008F              ; E6 8F
            bne L2F18              ; D0 CB

            ldx #$05               ; Switch p2<>p1
L2F4F:      lda L007F,X
            sta L0078,X
            dex
            bpl L2F4F

            lda L0079              ; A5 79
            sta L0CF3              ; 8D F3 0C

            lda L007B              ; A5 7B
            sta L0CF2              ; 8D F2 0C

            sec                    ; 38
            sbc L0301              ; Commander home X
            bcs L2F6A              ; B0 04

            eor #$FF               ; Invert
            adc #$01

L2F6A:      jsr L23F0              ; 20 F0 23

            sta L003E              ; 85 3E

            lda L001B              ; A5 1B
            sta L003D              ; 85 3D

            lda L0CF3              ; AD F3 0C
            sec                    ; 38
            sbc L0302              ; Commander home Y
            bcs L2F80              ; B0 04

            eor #$FF               ; Invert
            adc #$01

L2F80:      lsr A                  ; 4A
            jsr L23F0              ; 20 F0 23

            pha                    ; 48
            lda L001B              ; A5 1B
            clc                    ; 18
            adc L003D              ; 65 3D
            sta L00A0              ; 85 A0
            pla                    ; 68
            adc L003E              ; 65 3E
            sta L00A1              ; 85 A1
            jsr L45F4              ; 20 F4 45
            lda L00A0              ; A5 A0
            asl A                  ; 0A
            ldx #$00               ; A2 00
            stx L0CF1              ; 8E F1 0C
            rol L0CF1              ; 2E F1 0C
            asl A                  ; 0A
            rol L0CF1              ; 2E F1 0C
            sta L0CF0              ; 8D F0 0C
            jmp L2ACF              ; 4C CF 2A

L2FA9:      jsr L2882              ; Wipe text + draw frame
            lda #$0F
            sta L002C              ; Cursor X
	bit L00A6
	bvc L2FB4
	ldx #$1b
	stx L002D
	jmp L2FB5
L2FB4:
	inc L002D
L2FB5:
            jmp L34CB              ; De-token

;---------------------------------------------
; Hyperspace handling H-key
;---------------------------------------------

L2FB3:      lda L00AF              ; Docked flag
            bne L2FA9              ; Docked, jump

            lda L002F              ; Hyperspace timer
            bne L2FFB              ; If countdown running, do nothing

	bit $b001		; Check CTRL-toets
	bvc L2FFC		; Pressed, go to Galatcic Hyperspace
	
            jsr L2875              ; 20 75 28
            lda L0CF0              ; AD F0 0C
            ora L0CF1              ; 0D F1 0C
            beq L2FFB              ; F0 30

            lda #$07
            sta L002C              ; Cursor X

;            lda #$17               ; 8x8CHAR
            lda #$15               ; 8x6CHAR
            sta L002D              ; Cursor Y

            lda #$00               ; A9 00
            sta L007E              ; VDU stat

	bit L00A6
	bvc L2FB9
	ldx #$1b
	stx L002D
L2FB9:
            lda #$BD               ; Print "Hyperspace"
            jsr L34CB              ; De-token

            lda L0CF1              ; AD F1 0C
            bne L3055              ; D0 74
            lda L030D              ; Fuel level
            cmp L0CF0              ; CD F0 0C
            bcc L3055              ; 90 6C

            lda #$2D               ; Text '-'
            jsr L34CB              ; De-token
            jsr L343B              ; Print planet name

            lda #$0F
            sta L002F              ; Hyperspace timer
            sta L002E              ; Hyperspace sub timer
            tax                    ; AA
            jsr L3048              ; Print Hyperspace timer
L2FFB:      rts                    ; 60

;---------------------------------------------
; Galactic Hyperspace handling CTRL H-key
;---------------------------------------------

L2FFC:      ldx L032D              ; Galactic Hyperspace item
            beq L2FFB              ; If not available, return

            inx                    ; E8
            stx L0CF0              ; 8E F0 0C
            stx L0CF1              ; 8E F1 0C
            stx L032D              ; Galactic Hyperspace item
            stx L0334              ; 8E 34 03

            ldx #$05
            stx L002F              ; Hyperspace timer

            inc L030F              ; Galaxy nr
            lda L030F              ; Galaxy nr
            and #$07               ; Max 8 galaxies
            sta L030F              ; Galaxy nr

L301D:      lda L0303,X            ; BD 03 03
            asl A                  ; 0A
            rol L0303,X            ; 3E 03 03
            dex                    ; CA
            bpl L301D              ; 10 F6

            jsr L3D24              ; Randomize $1,$2,$3
            sta L0CF2              ; 8D F2 0C
            stx L0CF3              ; 8E F3 0C
            jsr L31D4              ; Launch
            jsr L2F0D              ; 20 0D 2F

            lda #$74               ; Text 'GALACTIC HYPERSPACE'
            jsr L43C2              ; Print at bottomline

L303B:      lda L0CF2              ; AD F2 0C
            sta L0301              ; Set Commander home X
            lda L0CF3              ; AD F3 0C
            sta L0302              ; Set Commander home Y
            rts                    ; 60

;--------------------------------------------
; Set location for Hyperspace timer + print
;--------------------------------------------

L3048:      ldy #$01               ; Set var
            sty L002D		; Cursor Y
            dey
            sty L002C              ; Reset cursor X

L304F:      clc
L3050:      lda #$05
            jmp L1C37              ; ??

;--------------------------------------------
; Print 'RANGE?' 
;--------------------------------------------

L3055:      lda #$CA               ; Text 'RANGE'
L3057:      jsr L34CB              ; De-token

            lda #$3F               ; Text '?'
            jmp L34CB              ; De-token

;--------------------------------------------
; Print line with:
; product, unit, unit-price and quantity
;--------------------------------------------

L305F:      pha                    ; Save product counter
            sta L0083              ; Save counter
            asl A
            asl A
            sta L007F              ; Datablock 4 bytes

            lda #$01               ; X-product
            sta L002C              ; Cursor X

            pla                    ; Get product ptr
            adc #$D0               ; Text = product
            jsr L34CB              ; De-token

            lda #$0E               ; X-Unit
            sta L002C              ; Cursor X

            ldx L007F              ; Set data ptr
            lda L4456,X            ; Get unit
            sta L0080              ; Save unit

            lda L0346              ; AD 46 03
            and L4458,X            ; 3D 58 44
            clc                    ; 18
            adc L4455,X            ; 7D 55 44
            sta L0CD9              ; 8D D9 0C
            jsr L30CB              ; Print unit-type

            jsr L3124              ; 20 24 31

            lda L0080              ; A5 80
            bmi L309A              ; 30 08
            lda L0CD9              ; AD D9 0C
            adc L0082              ; 65 82
            jmp L30A0              ; 4C A0 30

L309A:      lda L0CD9              ; AD D9 0C
            sec                    ; 38
            sbc L0082              ; E5 82

L30A0:      sta L0CD9              ; 8D D9 0C
            sta L001B              ; 85 1B

            lda #$00               ; A9 00
            jsr L3256              ; 20 56 32

            sec                    ; 38
            jsr L3050              ; 20 50 30

            ldy L0083              ; A4 83
            lda #$05               ; A9 05
            ldx L0335,Y            ; BE 35 03
            stx L0CDA              ; 8E DA 0C
            clc                    ; 18
            beq L30C1              ; F0 06

            jsr L1C35              ; 20 35 1C
            jmp L30CB              ; Print unit-type

L30C1:      lda L002C              ; Add 4 to Cursor X
            adc #$04
            sta L002C
            lda #$2D               ; Text '-'
            bne L30DA              ; Forced jump

L30CB:      lda L0080              ; Get unit
            and #$60               ; Filter bit 5/6
            beq L30DD              ; If $00, unit='t'

            cmp #$20               ; Check bit 5
            beq L30E4              ; If set, unit='kg'

            jsr L30E9              ; Else unit='g'

;---------------------------------------------
; Print ' '
;---------------------------------------------

L30D8:      lda #$20               ; Char ' '
L30DA:      jmp L34CB              ; De-token

;---------------------------------------------
; Print 't '
;---------------------------------------------

L30DD:      lda #$74               ; Character 't'
            jsr L1CF8              ; Print character
            bcc L30D8              ; Forced jump

;---------------------------------------------
; Print 'kg'
;---------------------------------------------

L30E4:      lda #$6B               ; Character 'k'
            jsr L1CF8              ; Print character

L30E9:      lda #$67               ; Character 'g'
            jmp L1CF8              ; Print character

;---------------------------------------------
; Print '     UNIT  QUANTITY'
;       'UNIT PRICE FOR SALE'
;---------------------------------------------

L30EE:      lda #$11
            sta L002C              ; Cursor X
            lda #$FF
            bne L30DA              ; Forced jump

;--------------------------------------------
; F7=Display planet market prices screen
;--------------------------------------------

L30F6:
	jsr restore_panel

            lda #$10               ; A9 10
            jsr L27FC              ; Clear screen, plot screen
            lda #$05
            sta L002C              ; Cursor X

            lda #$A7               ; Text 'LAVE MARKET PRICES'
            jsr L17FF              ; Plot header + line
            lda #$03
            sta L002D              ; Cursor Y
            jsr L30EE              ; Print 'UNIT PRICE FOR SALE'

	dec L002D		; CHAR8x6

            lda #$00               ; A9 00
            sta L0CDC              ; 8D DC 0C
L3110:      ldx #$80               ; A2 80
            stx L007E              ; VDU stat
            jsr L305F              ; 20 5F 30

            inc L002D              ; Cursor Y CHAR6x8

            inc L0CDC              ; EE DC 0C
            lda L0CDC              ; AD DC 0C
            cmp #$11               ; C9 11
            bcc L3110              ; 90 ED
            rts                    ; 60

L3124:      lda L0080              ; A5 80
            and #$1F               ; 29 1F
            ldy L0CDB              ; AC DB 0C
            sta L0081              ; 85 81
            clc                    ; 18
            lda #$00               ; A9 00
            sta L0345              ; 8D 45 03
L3133:      dey                    ; 88
            bmi L313B              ; 30 05
            adc L0081              ; 65 81
            jmp L3133              ; 4C 33 31

L313B:      sta L0082              ; 85 82
            rts                    ; 60

;--------------------------------------------
; Set vars $0CE3-$0CE8
;--------------------------------------------

L313E:      jsr L2F0D              ; 20 0D 2F
            jsr L303B              ; 20 3B 30

            ldx #$05               ; Copy $0078-$007D
L3146:      lda L0078,X            ; to $0CE3-$0CE8
            sta L0CE3,X
            dex
            bpl L3146

            inx                    ; Set vars
            stx L0C05
            lda L0CE9              ; Planet status
            sta L0CDB
            lda L0CEB              ; Tech.level
            sta L0CDE
            lda L0CEA              ; Government type
            sta L0CDD
            rts

;--------------------------------------------

L3165:      jsr L3D24              ; Randomize $1,$2,$3
            sta L0346              ; 8D 46 03
            ldx #$00               ; A2 00
            stx L00B7              ; 86 B7
L316F:      lda L4456,X            ; BD 56 44
            sta L0080              ; 85 80
            jsr L3124              ; 20 24 31
            lda L4458,X            ; BD 58 44
            and L0346              ; 2D 46 03
            clc                    ; 18
            adc L4457,X            ; 7D 57 44
            ldy L0080              ; A4 80
            bmi L318B              ; 30 06
            sec                    ; 38
            sbc L0082              ; E5 82
            jmp L318E              ; 4C 8E 31

L318B:      clc                    ; 18
            adc L0082              ; 65 82
L318E:      bpl L3192              ; 10 02
            lda #$00               ; A9 00
L3192:      ldy L00B7              ; A4 B7

            and #$3F               ; 29 3F

            sta L0335,Y            ; 99 35 03
            iny                    ; C8
            tya                    ; 98
            sta L00B7              ; 85 B7
            asl A                  ; 0A
            asl A                  ; 0A
            tax                    ; AA
            cmp #$3F               ; C9 3F
            bcc L316F              ; 90 CB
L31A4:      rts                    ; 60

L31A5:      lda L030D              ; Fuel level
            sec                    ; 38
            sbc L0CF0              ; ED F0 0C
            sta L030D              ; Fuel level
            lda L00A6              ; Headerstatus
            bne L31B9              ; D0 06
            jsr L27FC              ; Clear screen, plot screen
            jsr L21E5              ; 20 E5 21
L31B9:      jsr L313E              ; 20 3E 31
            jsr L3165              ; 20 65 31
            jsr L3C83              ; Reset vars
            jsr L36B2              ; 20 B2 36
            lda L00A6              ; Headerstatus
            and #$3F               ; 29 3F
            bne L31A4              ; D0 D9
            jsr L27FE              ; 20 FE 27
            lda L00A6              ; Headerstatus
            bne L3203              ; D0 31
            inc L00A6              ; Headerstatus

;--------------------------------------------
; F0=Launch
;--------------------------------------------

L31D4:
	jsr restore_panel

           ldx L00AF              ; Docked flag
            beq L31FC              ; F0 24
            jsr L21F8              ; Draw launch tunnel + stars

            jsr L3C83              ; Reset vars

            jsr L2F0D              ; 20 0D 2F

            inc L005B              ; E6 5B
            jsr L369F              ; 20 9F 36
            lda #$80               ; A9 80
            sta L005B              ; 85 5B
            inc L005A              ; E6 5A
            jsr L3858              ; 20 58 38

            lda #$0C               ; A9 0C
            sta L008C              ; Set speed
            jsr L3F27              ; 20 27 3F

            ora L0334              ; 0D 34 03
            sta L0334              ; 8D 34 03
L31FC:      ldx #$00               ; A2 00
            stx L00AF              ; Docked flag

	stx freeze		; Chart hack

            jmp L27C5              ; 4C C5 27

L3203:      bmi L3208              ; 30 03
            jmp L2B42              ; 4C 42 2B

L3208:      jmp L2E6E              ; 4C 6E 2E

L320B:      stx L0006              ; 86 06
            lda L030C              ; Cash
            sec                    ; 38
            sbc L0006              ; E5 06
            sta L030C              ; Cash
            sty L0006              ; 84 06
            lda L030B              ; Cash
            sbc L0006              ; E5 06
            sta L030B              ; Cash
            lda L030A              ; Cash
            sbc #$00               ; E9 00
            sta L030A              ; Cash
            lda L0309              ; Cash
            sbc #$00               ; E9 00
            sta L0309              ; Cash
            bcs L3252              ; B0 20

;---------------------------------------------
; Add price to cash
;---------------------------------------------

L3232:      txa                    ; lb-price
            clc
            adc L030C              ; Cash
            sta L030C              ; Cash

            tya                    ; hb-price
            adc L030B              ; Cash
            sta L030B              ; Cash
            lda L030A              ; Cash
            adc #$00
            sta L030A              ; Cash
            lda L0309              ; Cash
            adc #$00
            sta L0309              ; Cash
            clc
L3252:      rts

;---------------------------------------------

L3253:      jsr L2403              ; 20 03 24
L3256:      asl L001B              ; 06 1B
            rol A                  ; 2A
            asl L001B              ; 06 1B
            rol A                  ; 2A
            tay                    ; A8
            ldx L001B              ; A6 1B
            rts                    ; 60

L3260:      jmp L400D              ; Jump to status screen

;--------------------------------------------
; F3=Display Equip schip screen
;--------------------------------------------

L3263:
	jsr restore_panel

            jsr L1D83              ; Update bars + gyro pointers

            lda #$20
            jsr L27FC              ; Clear screen, plot screen

            lda #$0C
            sta L002C              ; Cursor X

            lda #$CF               ; Text 'EQUIP '
            jsr L29C6              ; De-token+space

            lda #$B9               ; Text 'SHIP'
            jsr L17FF              ; Plot header + line

            lda #$80
            sta L007E              ; VDU stat

            inc L002D              ; Cursor Y

            lda L0CDE              ; Get max equipment items
            clc
            adc #$03               ; Always first 3 items
            cmp #$0C               ; Check with max item
            bcc L328B              ; If <12, jump
            lda #$0C               ; Max items=12

L328B:      sta L00A0              ; Save max items
            sta L0CDA              ; 8D DA 0C
            inc L00A0              ; E6 A0
            lda #$46               ; A9 46
            sec                    ; 38
            sbc L030D              ; Fuel level
            asl A                  ; 0A
            sta L1B45              ; 8D 45 1B

            ldx #$01
L329E:      stx L00A8              ; Equipment pointer
            jsr L29B9              ; New line

            ldx L00A8              ; Equipment pointer
            clc
            jsr L1C33              ; Print quantity
            jsr L30D8              ; Print space

            lda L00A8              ; Equipment pointer
            clc
            adc #$68               ; Text equipment name
            jsr L34CB              ; De-token

            lda L00A8              ; Equipment pointer
            jsr L33E9              ; Get equipment price 

            sec
            lda #$19
            sta L002C              ; Cursor X
            lda #$06
            jsr L1C37              ; 20 37 1C

            ldx L00A8              ; Equipment pointer
            inx                    ; Point to next
            cpx L00A0              ; All equipment shown?
            bcc L329E              ; No, repeat

            jsr L2882              ; Wipe text + draw frame
            lda #$7F               ; Text 'ITEM'
	inc L002D
            jsr L3057              ; De-token + '?'

            jsr L2CDB              ; Scan numeric key
            beq L3260              ; If 0, jump
            bcs L3260              ; If >9 jump

            sbc #$00               ; E9 00

            ldx #$02
            stx L002C              ; Cursor X
            inc L002D              ; Cursor Y
            pha                    ; Save number
            jsr L33D9              ; 20 D9 33

            pla                    ; Restore number
            bne L32EF              ; Jump if 0

            sta L00A9              ; 85 A9
            ldx #$46               ; A2 46
            stx L030D              ; Fuel level

; Missiles choosen

L32EF:      cmp #$01               ; Missiles choosen?
            bne L3303              ; No, jump

            ldx L0333              ; Get missile counter
            inx                    ; Add missile
            ldy #$75               ; Text 'ALL'
            cpx #$05               ; Check if more than 4 missiles
            bcs L3365              ; If so, jump
            stx L0333              ; Store missile counter
            jsr L3CDB              ; Plot missiles in panel

; Large Cargo Bay choosen

L3303:      ldy #$6B               ; Text 'LARGE CARGO BAY'
            cmp #$02               ; Large Cargo Bay choosen?
            bne L3313              ; No, jump

            ldx #$25
            cpx L0316              ; Get large cargo bay?
            beq L3365              ; If already set, jump
            stx L0316              ; Set large cargo bay=$25

; E.C.M.System choosen

L3313:      cmp #$03               ; E.C.M.System choosen?
            bne L3320              ; No, jump

            iny                    ; Text 'E.C.M.SYSTEM'
            ldx L0328              ; Get E.C.M.System item
            bne L3365              ; If already set, jump
            dec L0328              ; Set E.C.M.System=$ff

; Extra Pulse Laser choosen

L3320:      cmp #$04               ; Extra Pulse Laser choosen?
            bne L3339              ; No, jump

            jsr L33F6              ; Select view in X
            lda #$04               ; Set Pulse Laser selection
            ldy L0310,X            ; Laser item
            beq L3332              ; If 0, jump
L332E:      ldy #$BB               ; Text 'LASER'
            bne L3365              ; Forced jump
L3332:      lda #$0F               ; Set pulse laser
            sta L0310,X            ; Set view pulse laser=$0f
            lda #$04               ; Set Pulse Laser selection

; Extra Beam Laser choosen

L3339:      cmp #$05               ; Extra Beam Laser choosen?
            bne L335A              ; No, jump

            jsr L33F6              ; Select view in X
            stx L0006              ; Save VIEW

            lda #$05
            ldy L0310,X            ; Get laser item
            beq L3353              ; If 0, jump
            bmi L332E              ; If already beam, set pulse

            lda #$04
            jsr L33EC              ; Get price on X,Y
            jsr L3232              ; Add X,Y to cash

L3353:      lda #$8F
            ldx L0006              ; Set VIEW ptr
            sta L0310,X            ; Set laser to beam $8f

; Fuel Scoops choosen

L335A:      ldy #$6F               ; Text 'FUEL SCOOPS'
            cmp #$06               ; Fuel Scoops choosen?
            bne L3380              ; No, jump

            ldx L0329              ; Get Fuel Scoops item
            beq L337D              ; If 0, jump

L3365:      sty L003D              ; Save text
            jsr L33EC              ; Get price on X,Y
            jsr L3232              ; Add X,Y to cash
            lda L003D              ; Load text
            jsr L29C6              ; De-token+space

            lda #$1F               ; Text 'ON'
            jsr L34CB              ; De-token

L3377:      jsr L33D1              ; Sound
            jmp L400D              ; Jump to status screen

L337D:      dec L0329              ; Set Fuel Scoops to $ff

; Escape Capsule choosen

L3380:      iny                    ; Text 'ESCAPE CAPSULE'
            cmp #$07               ; Escape Capsule choosen?
            bne L338D              ; No, jump

            ldx L032E              ; Get Escape Capsule item
            bne L3365              ; If already there, jump
            dec L032E              ; Set Escape Capsule to $ff

; Energy Bomb choosen

L338D:      iny                    ; Text 'ENERGY BOMB'
            cmp #$08               ; Energy Bomb choosen?
            bne L339C              ; No, jump

            ldx L032A              ; Get Energy Bomb item
            bne L3365              ; If already there, jump
            ldx #$7F
            stx L032A              ; Set Energy Bomb to $7f

; Energy Unit choosen

L339C:      iny                    ; Text 'ENERGY UNIT'
            cmp #$09               ; Energy Unit choosen?
            bne L33A9              ; No, jump

            ldx L032B              ; Get Energy Unit item
            bne L3365              ; If already there, jump
            inc L032B              ; Add 1 to Energy Unit

; Docking computers choosen

L33A9:      iny                    ; Text 'DOCKING COMPUTERS'
            cmp #$0A               ; Docking computers choosen?
            bne L33B6              ; No, jump

            ldx L032C              ; Get Docking computers item
            bne L3365              ; If already there, jump
            dec L032C              ; Set Docking computers to $ff

; Galactic hyperspace choosen

L33B6:      iny                    ; Text 'GALACTIC HYPERSPACE'
            cmp #$0B               ; Galactic hyperspace choosen?
            bne L33C3              ; No, jump

            ldx L032D              ; Get Galactic hyperspace item
            bne L3365              ; If already there, jump
            dec L032D              ; Set Galactic hyperspace to $ff

L33C3:      jsr L33C9              ; Print space
            jmp L3263              ; Display Equip schip

L33C9:      jsr L30D8              ; Print space
            lda #$77               ; A9 77
            jsr L29C6              ; De-token+space

L33D1:      jsr L427F              ; Make beep sound
            ldy #$C8
            jmp L2864              ; Pause

L33D9:      jsr L33EC              ; Get price on X,Y
            jsr L320B              ; 20 0B 32
            bcs L33F5              ; B0 14

            lda #$C5               ; Text 'CASH'
            jsr L3057              ; De-token + '?'
            jmp L3377              ; Sound + Status screen

;----------------------------------------------
; Get price in X,Y
;----------------------------------------------

L33E9:      sec
            sbc #$01               ; Decrement equipment ptr

L33EC:      asl A                  ; Set pointer
            tay
            ldx L1B45,Y            ; Get lb-price
            lda L1B45+1,Y          ; Get hb-price
            tay                    ; Save
L33F5:      rts

;-----------------------------------------------
; Select VIEW
;
; Print '0 FRONT'
;       '1 REAR'
;       '2 LEFT'
;       '3 RIGHT'
; Wait for choice
;-----------------------------------------------

L33F6:
            ldy #$10
            sty L002D              ; Cursor Y
L33FA:      ldx #$0C
            stx L002C              ; Cursor X
 
            tya                    ; Convert to number
            clc
            adc #$20
            jsr L29C6              ; Print number + space

            lda L002D              ; Cursor Y
            clc                    ; Point to VIEW string
            adc #$50
            jsr L34CB              ; Print VIEW

            inc L002D              ; Cursor Y
            ldy L002D              ; Cursor Y
            cpy #$14               ; Check all VIEWs printes
            bcc L33FA              ; No, repeat

L3415:      jsr L2882              ; Wipe text + draw frame

	inc L002D		; Position text
	inc L002D
            lda #$AF               ; Text 'VIEW'
            jsr L3057              ; De-token + '?'

	jsr OSRDCH		; Read key
            sec	                   ; Convert to value
            sbc #$30
            cmp #$04               ; Check key 0,1,2,3 pressed
            bcs L3415              ; If not, repeat

            tax                    ; Pressed, 0,1,2,3 in X
            rts

;--------------------------------------------
; Check panel for charts
;--------------------------------------------

restore_panel:
	pha
	lda #$91
	sta maskbyte
	lda #$8f
	sta wipebyte

	lda $97f0
	bmi rest_end

	lda #00			; Chart hack
	sta freeze

	jsr restore_screen
rest_end:

	pla
	rts

backup_panel:
	pha
	lda #$98
	sta maskbyte
	lda #$95
	sta wipebyte

	jsr backup_screen

	lda #$ff		; Chart hack
	sta freeze

	pla
	rts

;panel_restore:
;	txa
;	pha
;	ldx #$00		; Reset lb address
;restore_loop:
;	lda L5800,x
;	sta $9100,x
;	lda L5800+$100,x
;	sta $9200,x
;	lda L5800+$200,x
;	sta $9300,x
;	lda L5800+$300,x
;	sta $9400,x
;	lda L5800+$400,x
;	sta $9500,x
;	lda L5800+$500,x
;	sta $9600,x
;	lda L5800+$600,x
;	sta $9700,x
;	inx			; Next byte
;	bne restore_loop		; Repeat until end of page
;	pla
;	tax
;
;	jsr L3CDB		; Plot missiles
;	lda L0BF4
;	beq restore_end
;	jsr L3922
;restore_end:
;	rts

restore_screen:
	txa
	pha
	ldx #$00
restore_loop:
	lda L6500,x
	sta $9100,x
	lda L6500+$100,x
	sta $9200,x
	lda L6500+$200,x
	sta $9300,x
	lda L6500+$300,x
	sta $9400,x
	lda L6500+$400,x
	sta $9500,x
	lda L6500+$500,x
	sta $9600,x
	lda L6500+$600,x
	sta $9700,x
	inx			; Next byte
	bne restore_loop		; Repeat until end of page
	pla
	tax
	rts

backup_screen:
	bit freeze
	bmi end_backup
	txa
	pha
	ldx #$00
backup_loop:
	lda $9100,x
	sta L6500,x
	lda $9200,x
	sta L6500+$100,x
	lda $9300,x
	sta L6500+$200,x
	lda $9400,x
	sta L6500+$300,x
	lda $9500,x
	sta L6500+$400,x
	lda $9600,x
	sta L6500+$500,x
	lda $9700,x
	sta L6500+$600,x
	inx			; Next byte
	bne backup_loop		; Repeat until end of page
	pla
	tax
end_backup:
	rts

freeze:
	.byte 0

;--------------------------------------------
; String "(C)Bell/Braben1984" XOR $A4 
; Start of ELITEE.TXT
;--------------------------------------------

            .byte $8C,$E7,$8D,$E6,$C1,$C8,$C8,$8B
            .byte $E6,$D6,$C5,$C6,$C1,$CA,$95,$9D
            .byte $9C,$90

;--------------------------------------------
; Handle token=3
; Generate and print planet name (max 4 syllables)
;--------------------------------------------

L343B:
            ldx #$05               ; Save $78-$7d
L343D:
            lda L0078,X
            sta L007F,X
            dex
            bpl L343D

            ldy #$03               ; Set 4 syllable name
            bit L0078              ; Check planetname
            bvs L344B              ; If bit6 set, jump
            dey                    ; 1 Syllable less
L344B:      sty L00D1              ; Save syllable pointer

L344D:      lda L007D              ; Get planet name ptr
            and #$1F
            beq L3458              ; Check last 
            ora #$80               ; Convert value to 2-letters
            jsr L34CB              ; De-token

L3458:      jsr L296D              ; Generate new syllable
            dec L00D1              ; Decrement pointer
            bpl L344D              ; If not last one, repeat

            ldx #$05               ; Restore  $78-$7d
L3461:      lda L007F,X
            sta L0078,X
            dex
            bpl L3461

            rts

;--------------------------------------------
; Handle token=4
; Print Commander's name
;--------------------------------------------

L3469:      ldy #$00               ; Reset counter
L346B:      lda L159D,Y            ; Get character
            cmp #$0D               ; Check if end of line
            beq L3478              ; If so, jump
            jsr L1CF8              ; Print character
            iny                    ; Increment counter
            bne L346B              ; Repeat
L3478:      rts

;--------------------------------------------
; Handle token=2
; Ypl
;--------------------------------------------

L3479:      jsr L347F              ; Switch var data
            jsr L343B              ; Print planet name

L347F:      ldx #$05
L3481:      lda L0078,X            ; Copy $78-$7d->$ce3-$ce8 
            ldy L0CE3,X            ; Copy $ce3-$ce8->$78-$7d
            sta L0CE3,X
            sty L0078,X
            dex
            bpl L3481
            rts

;--------------------------------------------
; Handle token=1
; Print galaxy nr
;--------------------------------------------

L348F:      clc
            ldx L030F              ; Galaxy nr
            inx                    ; Start at 1
            jmp L1C33              ; Print quantity

;--------------------------------------------
; Handle token=5
; Print FUEL: quantity LIGHT YEARS
;--------------------------------------------

L3497:      lda #$69               ; Text 'Fuel'
            jsr L34C6              ; De-token + ':'

            ldx L030D              ; Fuel level
            sec
            jsr L1C33              ; Print quantity

            lda #$C3               ; Text 'LIGHT YEARS'
            jsr L34C0              ; De-token
            lda #$77               ; Show "CASH: show money'
            bne L34CB              ; Forced jump, De-token

;--------------------------------------------
; Handle token=0
; Print CASH: quantity CR
;--------------------------------------------

L34AC:      ldx #$03               ; Copy cash to $3d-$40
L34AE:      lda L0309,X
            sta L003D,X
            dex
            bpl L34AE

            lda #$09
            sta L008F              ; Width=9
            sec
            jsr L1C43              ; Print number

            lda #$E2               ; Text ' CR'

L34C0:      jsr L34CB              ; De-token
            jmp L29B9              ; New line

;--------------------------------------------
; Print text followed by colon
;--------------------------------------------

L34C6:      jsr L34CB              ; De-token
L34C9:      lda #$3A               ; Print ':'

;--------------------------------------------
; De-token
;
;   Token    Function
;--------------------------------------------
;  $00     - Print CASH: quantity CR
;  $01     - Print galaxy nr
;  $02     - Print planet name
;  $03     - Generate and print planet name (max 4 syllables)
;  $04     - Print Commander's name
;  $05     - Print FUEL: quantity LIGHT YEARS
;  $06     - VDU stat
;  $08     -
;  $09     -
;  $0a-$0e -
;  $0f-$1f - 
;  $20-$5F - Add #$20
;            Print lowercase character
;  $60-$7f - Print line $60-$7f from command table
;
;  $80-$9f - AND #$7F, Multiply by 2
;            Print 2 characters from text_table $00-$1f
;  $a0-$ff - Substract $a0
;            Print line $00-$5f from command table
;--------------------------------------------

L34CB:      tax
            beq L34AC              ; $00=Show money

            bmi L3544              ; Jump if token>$7f

            dex
            beq L348F              ; Token=1
            dex
            beq L3479              ; Token=2
            dex
            bne L34DC              ; Token>3
            jmp L343B              ; Token=3

;--------------------------------------------
; Handle token $04-$7f
;--------------------------------------------

L34DC:      dex
            beq L3469              ; Token=4
            dex
            beq L3497              ; Token=5
            dex
            bne L34EA              ; Token>6

            lda #$80               ; Token=6
            sta L007E              ; VDU stat
            rts

;--------------------------------------------
; Handle token>6
;--------------------------------------------

L34EA:      dex
            dex
            bne L34F1              ; Token>8
            stx L007E              ; Token=8 -> VDU stat
            rts

;--------------------------------------------
; Handle token>8
;--------------------------------------------

L34F1:      dex
            beq L352C              ; Token=9
            cmp #$60
            bcs L355E              ; Jump if token>$60
            cmp #$0E 
            bcc L3500              ; Token>14
            cmp #$20
            bcc L3528              ; 15<Token<32

;--------------------------------------------
; Handle token $20-$5f
; Add #$20 (lowercase)
; Print character
;--------------------------------------------

L3500:      ldx L007E              ; VDU stat
            beq L3541              ; F0 3D
            bmi L3517              ; 30 11
            bit L007E              ; VDU stat
            bvs L353A              ; 70 30

L350A:      cmp #$41               ; Check 'A'
            bcc L3514              ; If ASCII below, jump
            cmp #$5B               ; Check 'Z'
            bcs L3514              ; If ASCII above, jump
            adc #$20               ; Else make lowercase

L3514:      jmp L1CF8              ; Print character

L3517:      bit L007E              ; VDU stat
            bvs L3532              ; 70 17
            cmp #$41               ; C9 41
            bcc L3541              ; 90 22
            pha                    ; 48
            txa                    ; 8A
            ora #$40               ; 09 40
            sta L007E              ; VDU stat
            pla                    ; 68
            bne L3514              ; D0 EC

;--------------------------------------------
; Handle 15<token<32
;--------------------------------------------

L3528:      adc #$72               ; 69 72
            bne L355E              ; Print string

L352C:      lda #$15               ; A9 15
            sta L002C              ; Cursor X
            bne L34C9              ; D0 97

L3532:      cpx #$FF               ; E0 FF
            beq L3599              ; F0 63
            cmp #$41               ; C9 41
            bcs L350A              ; B0 D0

L353A:      pha                    ; 48
            txa                    ; 8A
            and #$BF               ; 29 BF
            sta L007E              ; VDU stat
            pla                    ; 68

L3541:      jmp L1CF8              ; Print character

;--------------------------------------------
; Handle token $80-$9f
; AND #$7F, multiply by 2
; Print 2 characters from table $00-$1f
;--------------------------------------------

L3544:      cmp #$A0               ; Jump if >=#$A0
            bcs L355C

            and #$7F               ; Mask bit 7 token
            asl A                  ; Multiply by 2
            tay                    ; Set token ptr
            lda L4415,Y            ; Get character
            jsr L34CB              ; Print character
            lda L4415+1,Y            ; Get next character
            cmp #$3F               ; Stop if $3F
            beq L3599
            jmp L34CB              ; Else print character

;--------------------------------------------
; Handle token $a0-$ff
; Substract #$a0
; Jump to command in token table $00-$5f
;--------------------------------------------

L355C:      sbc #$A0               ; E9 A0

;--------------------------------------------
; Handle token $60-$7f
; Jump to command in token table $60-$7f
;--------------------------------------------

L355E:      tax                    ; Save A

            lda #<L0400            ; Set $22/$23 at $0400
            sta L0022
            lda #>L0400
            sta L0023

            ldy #$00               ; Reset ptr
            txa                    ; Restore A
            beq L357F              ; If A=0, jump

L356C:      lda (L0022),Y          ; Skip X tokens
            beq L3577
            iny
            bne L356C
            inc L0023
            bne L356C

L3577:      iny
            bne L357C
            inc L0023              ; Page skip, inc page-hb
L357C:      dex
            bne L356C

L357F:      tya
            pha                    ; Save ptr

            lda L0023
            pha                    ; Save hb-token

            lda (L0022),Y          ; Get token
            eor #$23               ; Decode
            jsr L34CB              ; De-token

            pla
            sta L0023              ; Restore hb-token

            pla
            tay                    ; Restore ptr

            iny                    ; next token
            bne L3595              ; If page boundery
            inc L0023              ; Increment hb

L3595:      lda (L0022),Y          ; Read token
            bne L357F              ; If not $00, repeat

L3599:      rts

;---------------------------------------------
;
;---------------------------------------------

L359A:      lda L0072              ; A5 72
            ora #$A0               ; 09 A0
            sta L0072              ; 85 72
            rts                    ; 60

;---------------------------------------------
L35A1:      lda L0072              ; A5 72
            and #$40               ; 29 40
            beq L35AA              ; F0 03
            jsr L3604              ; 20 04 36
L35AA:      lda L0059              ; A5 59
            sta L00D1              ; 85 D1
            lda L005A              ; A5 5A
            cmp #$20               ; C9 20
            bcc L35B8              ; 90 04
            lda #$FE               ; A9 FE
            bne L35C0              ; D0 08
L35B8:      asl L00D1              ; 06 D1
            rol A                  ; 2A
            asl L00D1              ; 06 D1
            rol A                  ; 2A
            sec                    ; 38
            rol A                  ; 2A
L35C0:      sta L00A0              ; 85 A0
            ldy #$01               ; A0 01
            lda (L0074),Y          ; B1 74
            adc #$04               ; 69 04
            bcs L359A              ; B0 D0
            sta (L0074),Y          ; 91 74
            jsr L2546              ; 20 46 25
            lda L001B              ; A5 1B
            cmp #$1C               ; C9 1C
            bcc L35D9              ; 90 04
            lda #$FE               ; A9 FE
            bne L35E2              ; D0 09
L35D9:      asl L00A1              ; 06 A1
            rol A                  ; 2A
            asl L00A1              ; 06 A1
            rol A                  ; 2A
            asl L00A1              ; 06 A1
            rol A                  ; 2A
L35E2:      dey                    ; 88
            sta (L0074),Y          ; 91 74
            lda L0072              ; A5 72
            and #$BF               ; 29 BF
            sta L0072              ; 85 72
            and #$08               ; 29 08
            beq L3599              ; F0 AA
            ldy #$02               ; A0 02
            lda (L0074),Y          ; B1 74
            tay                    ; A8
L35F4:      lda L00F9,Y            ; B9 F9 00
            sta (L0074),Y          ; 91 74
            dey                    ; 88
            cpy #$06               ; C0 06
            bne L35F4              ; D0 F6
            lda L0072              ; A5 72
            ora #$40               ; 09 40
            sta L0072              ; 85 72
L3604:      ldy #$00               ; A0 00
            lda (L0074),Y          ; B1 74
            sta L00A0              ; 85 A0
            iny                    ; C8
            lda (L0074),Y          ; B1 74
            bpl L3611              ; 10 02
            eor #$FF               ; 49 FF
L3611:      lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            ora #$01               ; 09 01
            sta L008F              ; 85 8F
            iny                    ; C8
            lda (L0074),Y          ; B1 74
            sta L00B0              ; 85 B0
            lda L0001              ; A5 01
            pha                    ; 48
            ldy #$06               ; A0 06
L3623:      ldx #$03               ; A2 03
L3625:      iny                    ; C8
            lda (L0074),Y          ; B1 74
            sta L00D2,X            ; 95 D2
            dex                    ; CA
            bpl L3625              ; 10 F8
            sty L00B4              ; 84 B4
            ldy #$02               ; A0 02
L3631:      iny                    ; C8
            lda (L0074),Y          ; B1 74
            eor L00B4              ; 45 B4
            sta LFFFD,Y            ; 99 FD FF
            cpy #$06               ; C0 06
            bne L3631              ; D0 F4
            ldy L008F              ; A4 8F
L363F:      jsr L3D23              ; 20 23 3D
            sta L00A7              ; 85 A7
            lda L00D3              ; A5 D3
            sta L00A1              ; 85 A1
            lda L00D2              ; A5 D2
            jsr L367D              ; 20 7D 36
            bne L3677              ; D0 28

;            cpx #$BF               ; E0 BF
            cpx #$86               ; Check not in panel

            bcs L3677              ; B0 24
            stx L0032              ; Set y1
            lda L00D5              ; A5 D5
            sta L00A1              ; 85 A1
            lda L00D4              ; A5 D4
            jsr L367D              ; 20 7D 36
            bne L3665              ; D0 05
            lda L0032              ; Get y1
            jsr L1846              ; 20 46 18
L3665:      dey                    ; 88
            bpl L363F              ; 10 D7
            ldy L00B4              ; A4 B4
            cpy L00B0              ; C4 B0
            bcc L3623              ; 90 B5
            pla                    ; 68
            sta L0001              ; 85 01
            lda L0906              ; AD 06 09
            sta L0003              ; 85 03
            rts                    ; 60

L3677:      jsr L3D23              ; 20 23 3D
            jmp L3665              ; 4C 65 36
L367D:      sta L00A2              ; 85 A2
            jsr L3D23              ; 20 23 3D
            rol A                  ; 2A
            bcs L3690              ; B0 0B
            jsr L242A              ; 20 2A 24
            adc L00A1              ; 65 A1
            tax                    ; AA
            lda L00A2              ; A5 A2
            adc #$00               ; 69 00
            rts                    ; 60
L3690:      jsr L242A              ; 20 2A 24
            sta L00D1              ; 85 D1
            lda L00A1              ; A5 A1
            sbc L00D1              ; E5 D1
            tax                    ; AA
            lda L00A2              ; A5 A2
            sbc #$00               ; E9 00
            rts                    ; 60

L369F:      jsr L3CDB              ; Plot missiles in panel
            lda #$7F               ; A9 7F
            sta L0070              ; 85 70
            sta L0071              ; 85 71
            lda L0CDE              ; AD DE 0C
            and #$02               ; 29 02
            ora #$80               ; 09 80
            jmp L387D              ; New ship

L36B2:      lsr L0334              ; 4E 34 03
            jsr L3CC6              ; 20 C6 3C
            lda L0079              ; A5 79
            and #$07               ; 29 07
            adc #$06               ; 69 06
            lsr A                  ; 4A
            sta L005B              ; 85 5B
            ror A                  ; 6A
            sta L0055              ; 85 55
            sta L0058              ; 85 58
            jsr L369F              ; 20 9F 36
            lda #$81               ; A9 81
            jsr L387D              ; New ship

;--------------------------------------------
; New stars
;--------------------------------------------

L36CE:      lda L00A6              ; Headerstatus
            bne L36F4              ; WPSHPS

L36D2:      ldy #$0A               ; Star counter

L36D4:      jsr L3D24              ; Randomize $1,$2,$3
            ora #$08
            sta L0CB9,Y            ; Set stars Z
            sta L00A7

            jsr L3D24              ; Randomize $1,$2,$3
            sta L034C,Y            ; Set stars X
            sta L0031              ; Set x1

            jsr L3D24              ; Randomize $1,$2,$3
            sta L0362,Y            ; Set stars Y
            sta L0032              ; Set y1

            jsr L1824              ; Plot pixels
            dey
            bne L36D4

L36F4:      ldx #$00               ; A2 00
L36F6:      lda L0BE0,X            ; BD E0 0B
            beq L371E              ; F0 23
            bmi L371B              ; 30 1E
            sta L00AB              ; TYPE
            jsr L384A              ; Set galaxy pointer $20/21

            ldy #$1F               ; Set ptr
L3704:      lda (L0020),Y          ; Read galaxy data
            sta L0053,Y            ; Copy 32 bytes to $53-$72
            dey                    ; Next
            bpl L3704              ; Repeat

            stx L00A3              ; 86 A3

            jsr L28A4              ; 20 A4 28

            ldx L00A3              ; A6 A3
            ldy #$1F               ; A0 1F
            lda (L0020),Y          ; B1 20
            and #$A7               ; 29 A7
            sta (L0020),Y          ; 91 20
L371B:      inx                    ; E8
            bne L36F6              ; D0 D8

L371E:      ldx #$FF               ; A2 FF
            stx L0C5E              ; 8E 5E 0C
            stx L0C86              ; 8E 86 0C

L3726:      dex                    ; CA
            rts                    ; 60

;---------------------------------------------
;Decrement Energy bar
 ;---------------------------------------------

L3728:      inx                    ; Energy +1
            beq L3726              ; If >$ff, set to $ff
L372B:      dec L0CD4              ; Energy 1
            php
            bne L3734              ; 
            inc L0CD4              ; Energy 1
L3734:      plp                    ; 28
            rts                    ; 60

;---------------------------------------------
; Update Compas
;---------------------------------------------

L3736:
            jsr L3796              ; Plot pixel
            lda L0BF4              ; AD F4 0B
            bne L376F              ; D0 31
            jsr L418C              ; 20 8C 41
            jmp L3772              ; 4C 72 37

;---------------------------------------------


L3744:      asl A                  ; 0A
            tax                    ; AA
            lda #$00               ; A9 00
            ror A                  ; 6A
            tay                    ; A8
            lda #$14               ; A9 14
            sta L00A0              ; 85 A0
            txa                    ; 8A
            jsr L2546              ; 20 46 25
            ldx L001B              ; A6 1B
            tya                    ; 98
            bmi L375A              ; 30 03
            ldy #$00               ; A0 00
            rts                    ; 60

L375A:      ldy #$FF               ; A0 FF
            txa                    ; 8A
            eor #$FF               ; 49 FF
            tax                    ; AA
            inx                    ; E8
            rts                    ; 60

L3762:      ldx #$08               ; A2 08
L3764:      lda L0924,X            ; BD 24 09
            sta L00D2,X            ; 95 D2
            dex                    ; CA
            bpl L3764              ; 10 F8
            jmp L419B              ; 4C 9B 41

;--------------------------------------------
;
;--------------------------------------------

L376F:      jsr L3762              ; 20 62 37

L3772:      lda L0031              ; Get x1
            jsr L3744              ; 20 44 37
            txa                    ; 8A
            adc #$C1               ; 69 C1
            sta L0CD7              ; 8D D7 0C

            lda L0032              ; Get y1
            jsr L3744              ; 20 44 37
            stx L00D1              ; 86 D1

            lda #$CC               ; A9 CC
;            lda #$CC-56              ; A9 CC
            sbc L00D1              ; E5 D1
            sta L0CD8              ; 8D D8 0C

            lda #$F0               ; A9 F0
            ldx L0033              ; A6 33
            bpl L3793              ; 10 02
            lda #$FF               ; A9 FF
L3793:      sta L0D1C              ; 8D 1C 0D

;--------------------------------------------
; Plot thick line in compas
;--------------------------------------------

L3796:
            lda L0CD8              ; AD D8 0C
	sec
	sbc #56		; Correction for Atom screen 
            sta L0032              ; Set y1

            lda L0CD7              ; AD D7 0C
            sta L0031              ; Set x1

            lda L0D1C              ; AD 1C 0D
;            cmp #$F0               ; C9 F0
	cmp #$F0-56		; Check if range within compas
            bne L37AC              ; Plot small line
L37A7:      jsr L37AC              ; Plot small line
            dec L0032              ; Decrement y1

;---------------------------------------------
; Plot thick line
;---------------------------------------------

L37AC:
;            ldy #$80               ; A0 80
;            sty L0007              ; 84 07

; Convert x,y -> screenaddress

	lda L0032		; Get y
	lsr A			; y=y/8
	lsr A
	lsr A
	clc
	adc #>$8000		; y=y+$80
	sta L0008		; Set screen hb

	lda L0032		; Get y
	and #$07		; Set line pointer
	tay

	lda L0031		; Get x1
	lsr a			; x=x/8
	lsr a
	lsr a
	sta L0007		; Set screen lb

L37CF:
            lda L0031              ; Get x1
            and #$07
            tax

	sty tmp_y
	lda rowbyte,y
	tay
            lda L160B,X            ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y

            jsr L37E3              ; 20 E3 37

L37E3:      inx                    ; Next pixel
            lda L160B,X            ; Get pixel mask
            bpl L37F7              ; Check overflow

	inc L0007

L37F4:
L37F7:
	sty tmp_y
	lda rowbyte,y
	tay
            lda L160B,X            ; Get pixel mask
            eor (L0007),Y          ; Plot pixel on screen
            sta (L0007),Y
	ldy tmp_y
L37FB:
            rts

;-------------------------------------------
; Check if energy=0, if so then death
;-------------------------------------------

L37FC:      sta L00D1              ; 85 D1
            ldy #$08               ; A0 08
            ldx #$00               ; A2 00
            lda (L0020),Y          ; B1 20
            bmi L3816              ; 30 10
            lda L0CD2              ; Energy FS
            sbc L00D1              ; E5 D1
            bcc L3811              ; 90 04
            sta L0CD2              ; Energy FS
            rts                    ; 60

L3811:      stx L0CD2              ; Energy FS
            bcc L3824              ; 90 0E

L3816:      lda L0CD3              ; Energy AS
            sbc L00D1              ; E5 D1
            bcc L3821              ; 90 04
            sta L0CD3              ; Energy AS
            rts                    ; 60

L3821:      stx L0CD3              ; Energy AS

L3824:      adc L0CD4              ; Energy 1
            sta L0CD4              ; Energy 1
            beq L382E              ; F0 02
            bcs L3831              ; B0 03

L382E:      jmp L3F47              ; Death

L3831:      jsr L4245              ; 20 45 42
            jmp L43E6              ; 4C E6 43

;-------------------------------------------

L3837:      lda L0901,X            ; BD 01 09
            sta L00D2,X            ; 95 D2
            lda L0902,X            ; BD 02 09
            tay                    ; A8
            and #$7F               ; 29 7F
            sta L00D3,X            ; 95 D3
            tya                    ; 98
            and #$80               ; 29 80
            sta L00D4,X            ; 95 D4
            rts                    ; 60

;-------------------------------------------
; Set galaxy pointer in $20/21
;
; X=galaxy nr
;-------------------------------------------

L384A:      txa
            asl A                  ; Galaxy nr*2
            tay                    ; Set pointer

            lda L15F1,Y            ; Get galaxy pointer
            sta L0020              ; Set lb
            lda L15F1+1,Y          ; Get galaxy pointer
            sta L0021              ; Set hb

            rts

;-------------------------------------------

L3858:      jsr L3922              ; 20 22 39
            ldx #$01               ; A2 01
            stx L0073              ; 86 73
            dex                    ; CA
            stx L0071              ; 86 71
            stx L0BE1              ; 8E E1 0B
            dex                    ; CA
            stx L0070              ; 86 70
            ldx #$0A               ; A2 0A
            jsr L38F9              ; 20 F9 38
            jsr L38F9              ; 20 F9 38
            jsr L38F9              ; 20 F9 38
            lda #$08               ; A9 08
            sta L0074              ; 85 74
            lda #$0C               ; A9 0C
            sta L0075              ; 85 75
            lda #$07               ; A9 07

;--------------------------------------------
; New ship
;--------------------------------------------

L387D:      sta L00D1              ; 85 D1
            ldx #$00               ; A2 00
L3881:      lda L0BE0,X            ; BD E0 0B
            beq L388D              ; F0 07
            inx                    ; E8
            cpx #$0C               ; E0 0C
            bcc L3881              ; 90 F6
            clc                    ; 18
L388C:      rts                    ; 60

L388D:      jsr L384A              ; Set galaxy pointer $20/21
            lda L00D1              ; A5 D1
            bmi L38E4              ; 30 50
            asl A                  ; 0A
            tay                    ; A8

            lda L4ED2,Y            ; 3D object pointer
            sta L001E
            lda L4ED3,Y
            sta L001F

            cpy #$0E               ; C0 0E
            beq L38D4              ; F0 30
            ldy #$05               ; A0 05
            lda (L001E),Y          ; B1 1E
            sta L0006              ; 85 06
            lda L0CDF              ; AD DF 0C
            sec                    ; 38
            sbc L0006              ; E5 06
            sta L0074              ; 85 74
            lda L0CE0              ; AD E0 0C
            sbc #$00               ; E9 00
            sta L0075              ; 85 75
            lda L0074              ; A5 74
            sbc L0020              ; E5 20
            tay                    ; A8
            lda L0075              ; A5 75
            sbc L0021              ; E5 21
            bcc L388C              ; 90 C8
            bne L38CA              ; D0 04
            cpy #$24               ; C0 24
            bcc L388C              ; 90 C2
L38CA:      lda L0074              ; A5 74
            sta L0CDF              ; 8D DF 0C
            lda L0075              ; A5 75
            sta L0CE0              ; 8D E0 0C
L38D4:      ldy #$0E               ; A0 0E
            lda (L001E),Y          ; B1 1E
            sta L0076              ; 85 76
            ldy #$13               ; A0 13
            lda (L001E),Y          ; B1 1E
            and #$07               ; 29 07
            sta L0072              ; 85 72
            lda L00D1              ; A5 D1
L38E4:      sta L0BE0,X            ; 9D E0 0B
            tax                    ; AA
            bmi L38ED              ; 30 03
            inc L0BED,X            ; FE ED 0B
L38ED:      ldy #$23               ; A0 23
L38EF:      lda L0053,Y            ; Galaxy data
            sta (L0020),Y          ; 91 20
            dey                    ; 88
            bpl L38EF              ; 10 F8
            sec                    ; 38
            rts                    ; 60

L38F9:      lda L0053,X            ; Galaxy data
            eor #$80               ; 49 80
            sta L0053,X            ; Galaxy data
            inx                    ; E8
            inx                    ; E8
            rts                    ; 60

L3902:      ldy #$09               ; Sprite=normal
L3904:      ldx #$FF               ; A2 FF
L3906:      stx L0052              ; 86 52
            ldx L0333              ; Get nr of missiles
            jsr L393F              ; Plot missiles in panel

            sty L0C00              ; Missile locked on target
            rts

L3912:      lda #$20               ; A9 20
            sta L0030              ; E mark in panel
            asl A                  ; ???
            jsr L4281              ; Make sound

;---------------------------------------------
; Plot E (???) indicator in panel
;---------------------------------------------

L391A:
	lda #<$9607		; Set screen address
	ldx #<L3934		; Set character address
	ldy #>$9607
	bne L3928		; Forced jump

;---------------------------------------------
; Plot S (Space station indicator) in panel
;---------------------------------------------

L3922:
	lda #<$9618		; Set screen address
	ldx #<L3937		; Set charachter address
	ldy #>$9618
L3928:
	sta L0007		; Set lb-screen address
	stx L001C		; Set lb-char address
	ldx #>L3937
	stx L001D		; Set hb-char address
	tya			; Get hb-screen address

	sta L0008		;CHAR8x6
	ldy #$07		;CHAR8x6
	jmp L1D6A		;CHAR8x6	 
L3934:
	.byte $FE,$FE,$E0	; Data char-E
L3937:
	.byte $FE,$FE,$E0	; Data char-S
	.byte $FE,$FE,$0E
	.byte $FE,$FE

;--------------------------------------------
; Plot missile sprite
;
; X = position (1-4)
; Y = sprite pointer to last byte ($4,$9,$d,$11)
;  $04 = clear missile
;  $09 = filled block
;  $0d = missile locked
;  $11 = missile target
;--------------------------------------------

L393F:
	txa
	pha			; Save X

	sta L00D1		; Set Screen ptr

	sec			; Calculate screenaddress
	lda #<$9706
	sbc L00D1
	sta L0007
	lda #>$9706
	sta L0008

	tya			; Set sprite pointer
	tax

	ldy #$05		; Plot 5 lines/sprite
L3954:
	sty tmp_y
	lda rowbyte,y
	tay
	lda L3960,X		; Get spritedata
	sta (L0007),Y		; Plot on screen
	ldy tmp_y
	dex			; Next sprite byte
	dey			; Next screen line
	bne L3954		; If not last, repeat

	pla			; Restore X
	tax

	rts
L3960:
	.byte $00,$00,$00,$00,$00	; Data sprites
	.byte $FC,$FC,$FC,$FC,$FC
	.byte $84,$B4,$84,$FC,$C4
	.byte $EC,$EC,$FC

;--------------------------------------------

L3972:      lda L0053              ; Galaxy data
            sta L001B              ; 85 1B
            lda L0054              ; A5 54
            sta L001C              ; 85 1C
            lda L0055              ; A5 55
            jsr L3ACB              ; 20 CB 3A
            bcs L39A9              ; B0 28
            lda L003D              ; A5 3D

            adc #$80               ; X+128 Centre screen

            sta L00D2              ; 85 D2
            txa                    ; 8A
            adc #$00               ; 69 00
            sta L00D3              ; 85 D3
            lda L0056              ; A5 56
            sta L001B              ; 85 1B
            lda L0057              ; A5 57
            sta L001C              ; 85 1C
            lda L0058              ; A5 58
            eor #$80               ; 49 80
            jsr L3ACB              ; 20 CB 3A
            bcs L39A9              ; B0 0C
            lda L003D              ; A5 3D

;            adc #$60               ; Y+96 Centre screen
            adc #$43               ; Y+96 Centre screen

            sta L00E0              ; 85 E0
            txa                    ; 8A
            adc #$00               ; 69 00
            sta L00E1              ; 85 E1
            clc                    ; 18
L39A9:      rts                    ; 60

L39AA:      jmp L3A4E              ; 4C 4E 3A

L39AD:      lda L00AB              ; TYPE
            lsr A                  ; 4A
            bcs L39A9              ; B0 F7
            lda L005B              ; A5 5B
            bmi L39AA              ; 30 F4
            cmp #$30               ; C9 30
            bcs L39AA              ; B0 F0
            ora L005A              ; 05 5A
            beq L39AA              ; F0 EC
            jsr L3972              ; 20 72 39
            bcs L39AA              ; B0 E7

	lda #$43		; CHAR8x6
;            lda #$60               ; CHAR8x8

            sta L001C              ; 85 1C

            lda #$00               ; A9 00
            sta L001B              ; 85 1B
            jsr L255F              ; 20 5F 25

            lda L003E              ; A5 3E
            beq L39D6              ; F0 04

            lda #$F8               ; A9 F8
            sta L003D              ; 85 3D

L39D6:      jsr L3A4E              ; 20 4E 3A
            jmp L39DC              ; Draw circle

;--------------------------------------------
; Circle
;--------------------------------------------

L39DC:      jsr L3A91              ; CHKON
            bcs L39A9              ; Return
            lda #$00               ; A9 00
            sta L0C5E              ; 8D 5E 0C
            ldx L003D              ; A6 3D
            lda #$08               ; A9 08
            cpx #$09               ; E0 09
            bcc L39EF              ; 90 01
            lsr A                  ; 4A
L39EF:      sta L00B6              ; 85 B6

;--------------------------------------------
; Circle 2
;--------------------------------------------

L39F1:      ldx #$FF               ; Circle 2
            stx L00B3              ; Flag
            inx
            stx L00B4              ; Counter

L39F8:      lda L00B4              ; A5 B4
            jsr L2420              ; 20 20 24

            ldx #$00               ; A2 00
            stx L00D1              ; 86 D1
            ldx L00B4              ; A6 B4
            cpx #$21               ; E0 21
            bcc L3A14              ; 90 0D
            eor #$FF               ; 49 FF
            adc #$00               ; 69 00
            tax                    ; AA
            lda #$FF               ; A9 FF
            adc #$00               ; 69 00
            sta L00D1              ; 85 D1
            txa                    ; 8A
            clc                    ; 18
L3A14:      adc L00D2              ; 65 D2
            sta L0082              ; 85 82
            lda L00D3              ; A5 D3
            adc L00D1              ; 65 D1
            sta L0083              ; 85 83
            lda L00B4              ; A5 B4
            clc                    ; 18
            adc #$10               ; 69 10
            jsr L2420              ; 20 20 24

            tax                    ; AA
            lda #$00               ; A9 00
            sta L00D1              ; 85 D1
            lda L00B4              ; A5 B4
            adc #$0F               ; 69 0F
            and #$3F               ; 29 3F
            cmp #$21               ; C9 21
            bcc L3A42              ; 90 0D
            txa                    ; 8A
            eor #$FF               ; 49 FF
            adc #$00               ; 69 00
            tax                    ; AA
            lda #$FF               ; A9 FF
            adc #$00               ; 69 00
            sta L00D1              ; 85 D1
            clc                    ; 18

L3A42:      jsr L1893              ; BLINE
            cmp #$41               ; C9 41
            bcs L3A4C              ; B0 03
            jmp L39F8              ; 4C F8 39

L3A4C:      clc                    ; 18
            rts                    ; 60

L3A4E:      ldy L0C5E              ; AC 5E 0C
            bne L3A87              ; D0 34
L3A53:      cpy L0077              ; C4 77
            bcs L3A87              ; B0 30
            lda L0C86,Y            ; B9 86 0C
            cmp #$FF               ; C9 FF
            beq L3A78              ; F0 1A
            sta L0034              ; 85 34
            lda L0C5E,Y            ; B9 5E 0C
            sta L0033              ; 85 33
            jsr L1621              ; Plot line

            iny                    ; C8
            lda L00B1              ; A5 B1
            bne L3A53              ; D0 E6
            lda L0033              ; A5 33
            sta L0031              ; Set x1
            lda L0034              ; A5 34
            sta L0032              ; Set y1
            jmp L3A53              ; 4C 53 3A
L3A78:      iny                    ; C8
            lda L0C5E,Y            ; B9 5E 0C
            sta L0031              ; Set x1
            lda L0C86,Y            ; B9 86 0C
            sta L0032              ; Set y1
            iny                    ; C8
            jmp L3A53              ; 4C 53 3A
L3A87:      lda #$01               ; A9 01
            sta L0077              ; 85 77
            lda #$FF               ; A9 FF
            sta L0C5E              ; 8D 5E 0C
            rts                    ; 60

L3A91:      lda L00D2              ; A5 D2
            clc                    ; 18
            adc L003D              ; 65 3D

            lda L00D3              ; A5 D3
            adc #$00               ; 69 00
            bmi L3AC9              ; 30 2D

            lda L00D2              ; A5 D2
            sec                    ; 38
            sbc L003D              ; E5 3D

            lda L00D3              ; A5 D3
            sbc #$00               ; E9 00
            bmi L3AA9              ; 30 02
            bne L3AC9              ; D0 20

L3AA9:      lda L00E0              ; A5 E0
            clc                    ; 18
            adc L003D              ; 65 3D
            sta L001C              ; 85 1C

            lda L00E1              ; A5 E1
            adc #$00               ; 69 00
            bmi L3AC9              ; 30 13
            sta L001D              ; 85 1D

            lda L00E0              ; A5 E0
            sec                    ; 38
            sbc L003D              ; E5 3D
            tax                    ; AA

            lda L00E1              ; A5 E1
            sbc #$00               ; E9 00
            bmi L3AEE              ; 30 2A
            bne L3AC9              ; D0 03

;            cpx #$BF               ; E0 BF
             cpx #$86               ; Check not in panel

           rts                    ; 60

L3AC9:      sec                    ; 38
            rts                    ; 60

L3ACB:      jsr L255F              ; 20 5F 25
            lda L0040              ; A5 40
            and #$7F               ; 29 7F
            ora L003F              ; 05 3F
            bne L3AC9              ; D0 F3
            ldx L003E              ; A6 3E
            cpx #$04               ; E0 04
            bcs L3AEF              ; B0 13
            lda L0040              ; A5 40
            bpl L3AEF              ; 10 0F
            lda L003D              ; A5 3D
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
            sta L003D              ; 85 3D
            txa                    ; 8A
            eor #$FF               ; 49 FF
            adc #$00               ; 69 00
            tax                    ; AA

L3AEE:      clc                    ; 18
L3AEF:      rts                    ; 60

L3AF0:      jsr L431D              ; 20 1D 43
            ldx L0D24              ; AE 24 0D
            beq L3B1A              ; Scan cursor keys
            lda L00AC              ; A5 AC
            eor #$FF               ; 49 FF
            jsr L3B03              ; 20 03 3B
            tya                    ; 98
            tax                    ; AA
            lda L00AD              ; A5 AD

L3B03:      tay                    ; A8
            lda #$00               ; A9 00
            cpy #$10               ; C0 10
            sbc #$00               ; E9 00
            cpy #$40               ; C0 40
            sbc #$00               ; E9 00
            cpy #$C0               ; C0 C0
            adc #$00               ; 69 00
            cpy #$E0               ; C0 E0
            adc #$00               ; 69 00
            tay                    ; A8
            lda L0041              ; Get last-key
            rts                    ; 60

;--------------------------------------------
; Scan cursor keys and adjust x or y
;--------------------------------------------

L3B1A:      lda L0041              ; Get last-key
            ldy #$00

            cmp #$18               ; Cursor left
            bne L3B23
            dex                    ; x=x-1

L3B23:      cmp #$78               ; Cursor right
            bne L3B28
            inx                    ; x=x+1

L3B28:      cmp #$39               ; Cursor up
            bne L3B2D
            iny                    ; y=y+1

L3B2D:      cmp #$28               ; Cursor down
            bne L3B32
            dey                    ; y=y-1

L3B32:      rts

;--------------------------------------------
; Copy $0301/$0302 -> $0CF2/$0CF3
;--------------------------------------------

L3B33:      ldx #$01
L3B35:      lda L0301,X		; Commander home X
            sta L0CF2,X
            dex
            bpl L3B35
            rts

;--------------------------------------------
; Start ELITEF.TXT
;--------------------------------------------

L3B3F:      lda L001B              ; A5 1B
            sta L0CDF              ; 8D DF 0C
            lda L001C              ; A5 1C
            sta L0CE0              ; 8D E0 0C
            rts                    ; 60

L3B4A:      ldx L00A3              ; A6 A3
            jsr L3BA2              ; 20 A2 3B
            ldx L00A3              ; A6 A3
            jmp L0E80              ; 4C 80 0E

L3B54:      jsr L3CC6              ; 20 C6 3C
            lda #$00               ; A9 00
            sta L0BE1              ; 8D E1 0B
            sta L0BF4              ; 8D F4 0B
            jsr L3922              ; 20 22 39
            lda #$06               ; A9 06
            sta L0058              ; 85 58
            lda #$81               ; A9 81
            jmp L387D              ; New ship

L3B6B:      ldx #$FF               ; A2 FF

L3B6D:      inx                    ; E8
            lda L0BE0,X            ; BD E0 0B
            beq L3B3F              ; F0 CC
            cmp #$08               ; C9 08
            bne L3B6D              ; D0 F6

            txa                    ; 8A
            asl A                  ; 0A
            tay                    ; A8

            lda L15F1,Y            ; Get galaxy pointer
            sta L0007              ; Set lb
            lda L15F1+1,Y          ; Get galaxy pointer
            sta L0008              ; Set hb

            ldy #$20               ; A0 20
            lda (L0007),Y          ; B1 07
            bpl L3B6D              ; 10 E3

            and #$7F               ; 29 7F
            lsr A                  ; 4A
            cmp L00B7              ; C5 B7
            bcc L3B6D              ; 90 DC
            beq L3B9C              ; F0 09
            sbc #$01               ; E9 01
            asl A                  ; 0A
            ora #$80               ; 09 80
            sta (L0007),Y          ; 91 07
            bne L3B6D              ; D0 D1
L3B9C:      lda #$00               ; A9 00
            sta (L0007),Y          ; 91 07
            beq L3B6D              ; F0 CB
L3BA2:      stx L00B7              ; 86 B7
            lda L0052              ; A5 52
            cmp L00B7              ; C5 B7
            bne L3BB2              ; D0 08
            jsr L3902              ; 20 02 39

            lda #$C8               ; Text 'TARGET LOST'
            jsr L43C2              ; Print at bottomline
L3BB2:      ldy L00B7              ; A4 B7
            ldx L0BE0,Y            ; BE E0 0B
            cpx #$07               ; E0 07
            beq L3B54              ; F0 99
            dec L0BED,X            ; DE ED 0B
            ldx L00B7              ; A6 B7
            ldy #$05               ; A0 05
            lda (L001E),Y          ; B1 1E
            ldy #$21               ; A0 21
            clc                    ; 18
            adc (L0020),Y          ; 71 20
            sta L001B              ; 85 1B
            iny                    ; C8
            lda (L0020),Y          ; B1 20
            adc #$00               ; 69 00
            sta L001C              ; 85 1C
L3BD2:      inx                    ; E8
            lda L0BE0,X            ; BD E0 0B
            sta L0BDF,X            ; 9D DF 0B
            beq L3B6B              ; F0 90
            asl A                  ; 0A
            tay                    ; A8

            lda L4ED2,Y            ; 3D object pointer
            sta L0007
            lda L4ED3,Y
            sta L0008

            ldy #$05               ; A0 05
            lda (L0007),Y          ; B1 07
            sta L00D1              ; 85 D1
            lda L001B              ; A5 1B
            sec                    ; 38
            sbc L00D1              ; E5 D1
            sta L001B              ; 85 1B
            lda L001C              ; A5 1C
            sbc #$00               ; E9 00
            sta L001C              ; 85 1C
            txa                    ; 8A
            asl A                  ; 0A
            tay                    ; A8

            lda L15F1,Y            ; Get galaxy pointer
            sta L0007              ; Set lb
            lda L15F1+1,Y          ; Get galaxy pointer
            sta L0008              ; Set hb

            ldy #$23               ; A0 23
            lda (L0007),Y          ; B1 07
            sta (L0020),Y          ; 91 20
            dey                    ; 88
            lda (L0007),Y          ; B1 07
            sta L003E              ; 85 3E
            lda L001C              ; A5 1C
            sta (L0020),Y          ; 91 20
            dey                    ; 88
            lda (L0007),Y          ; B1 07
            sta L003D              ; 85 3D
            lda L001B              ; A5 1B
            sta (L0020),Y          ; 91 20
            dey                    ; 88
L3C20:      lda (L0007),Y          ; B1 07
            sta (L0020),Y          ; 91 20
            dey                    ; 88
            bpl L3C20              ; 10 F9
            lda L0007              ; A5 07
            sta L0020              ; 85 20
            lda L0008              ; A5 08
            sta L0021              ; 85 21
            ldy L00D1              ; A4 D1
L3C31:      dey                    ; 88
            lda (L003D),Y          ; B1 3D
            sta (L001B),Y          ; 91 1B
            tya                    ; 98
            bne L3C31              ; D0 F8
            beq L3BD2              ; F0 97

L3C3B:      .byte $11,$01,$00,$03
            .byte $11,$02,$2C,$04
            .byte $11,$03,$F0,$06
            .byte $10,$F1,$04,$05
            .byte $01,$F1,$BC,$01
            .byte $11,$F4,$0C,$08
            .byte $10,$F1,$04,$06
            .byte $10,$02,$60,$10
            .byte $11,$04,$C2,$FF
            .byte $11,$00,$00,$00

L3C63:      .byte $70,$24,$56,$56,$42,$28,$C8,$D0
            .byte $F0,$E0

;--------------------------------------------
;
;--------------------------------------------

L3C6D:      jsr L40D6              ; Clear page $09,$0A,$0B

            ldx #$06               ; Clear L002A-L002F=0
L3C72:      sta L002A,X
            dex
            bpl L3C72

            stx L00AF              ; Docked flag
;	stx freeze	; Chart hack

L3C79:      lda #$FF               ; Reset Energy L0CD2-L0CD4=$FF
            ldx #$02
L3C7D:      sta L0CD2,X
            dex
            bpl L3C7D

L3C83:      ldx #$FF               ; Reset vars=$ff
            stx L0C5E
            stx L0C86
            stx L0052

            lda #$80               ; Reset vars=$80
            sta L00AD
            sta L0088
            sta L008A

            asl A                  ; Reset vars=0
            sta L0089
            sta L008B
            sta L00A9

            lda #$03               ; Reset vars=3
            sta L008C              ; Set speed
            sta L00AE
            sta L0087

            lda L0BF4              ; AD F4 0B
            beq L3CAC              ; F0 03

            jsr L3922              ; 20 22 39

L3CAC:      lda L0030              ; E mark in panel
            beq L3CB3              ; F0 03

            jsr L4237              ; 20 37 42

L3CB3:      jsr L36F4              ; 20 F4 36
            jsr L40D6              ; Clear page $09,$0A,$0B

            lda #<L0BDF               ; A9 DF
            sta L0CDF              ; 8D DF 0C
            lda #>L0BDF               ; A9 0B
            sta L0CE0              ; 8D E0 0C

            jsr L1D83              ; Update bars + gyro pointers

L3CC6:      ldy #$23               ; A0 23
            lda #$00               ; A9 00
L3CCA:      sta L0053,Y            ; Galaxy data
            dey                    ; 88
            bpl L3CCA              ; 10 FA

;            lda #$60               ; A9 60
            lda #$43               ; A9 60

            sta L0065              ; 85 65
            sta L0069              ; 85 69

            ora #$80               ; 09 80
            sta L0061              ; 85 61

            rts                    ; 60

;--------------------------------------------
; Plot missiles in panel
;--------------------------------------------

L3CDB:
	ldx #$04		; Set pointer
L3CDD:
	cpx L0333		; Compare with missile counter
	beq L3CEB		; Plot normal missile from now on

	ldy #$04		; Sprite=clear
	jsr L393F		; Plot missiles in panel

	dex			; Next missile
	bne L3CDD		; Last one plotted?
	rts
L3CEB:
	ldy #$09		; Sprite=normal
	jsr L393F		; Plot missiles in panel
	dex			; Next missile
	bne L3CEB		; Last one plotted?
	rts

;--------------------------------------------

L3CF4:      lda L0CD1              ; AD D1 0C
            jsr L43C2              ; Print at bottomline
            lda #$00               ; A9 00
            sta L0C06              ; 8D 06 0C
            jmp L3D57              ; 4C 57 3D

L3D02:      jsr L3CC6              ; 20 C6 3C
            jsr L3D24              ; Randomize $1,$2,$3
            sta L0006              ; 85 06
            and #$80               ; 29 80
            sta L0055              ; 85 55
            txa                    ; 8A
            and #$80               ; 29 80
            sta L0058              ; 85 58
            lda #$20               ; A9 20
            sta L0054              ; 85 54
            sta L0057              ; 85 57
            sta L005A              ; 85 5A
            txa                    ; 8A
            cmp #$F5               ; C9 F5
            rol A                  ; 2A
            ora #$C0               ; 09 C0
            sta L0073              ; 85 73
L3D23:      clc                    ; 18

;--------------------------------------------
; Randomize $1,$2,$3
;--------------------------------------------

L3D24:      lda $00                ; A5 00
            rol A                  ; 2A
            tax                    ; AA
            adc L0002              ; 65 02
            sta $00                ; 85 00
            stx L0002              ; 86 02
            lda L0001              ; A5 01
            tax                    ; AA
            adc L0003              ; 65 03
            sta L0001              ; 85 01
            stx L0003              ; 86 03
            rts                    ; 60

;--------------------------------------------

L3D38:      lsr A                  ; 4A
            sta L0073              ; 85 73
            sta L0070              ; 85 70
            rol L0072              ; 26 72
            and #$1F               ; 29 1F
            ora #$10               ; 09 10
            sta L006E              ; 85 6E

            lda #$06               ; A9 06
            jsr L387D              ; New ship
L3D4A:      jsr L0D40              ; 20 40 0D
            dec L0C06              ; CE 06 0C
            beq L3CF4              ; F0 A2
            bpl L3D57              ; 10 03
            inc L0C06              ; EE 06 0C
L3D57:      dec L00A9              ; C6 A9
            beq L3D5E              ; F0 03
            jmp L3E24              ; 4C 24 3E
L3D5E:      jsr L3D24              ; Randomize $1,$2,$3
            cmp #$23               ; C9 23
            bcs L3DB2              ; B0 4D
            lda L0BF6              ; AD F6 0B
            cmp #$03               ; C9 03
            bcs L3DB2              ; B0 46
            jsr L3CC6              ; 20 C6 3C
            lda #$26               ; A9 26
            sta L005A              ; 85 5A
            jsr L3D24              ; Randomize $1,$2,$3
            sta L0053              ; Galaxy data
            stx L0056              ; 86 56
            and #$80               ; 29 80
            sta L0055              ; 85 55
            txa                    ; 8A
            and #$80               ; 29 80
            sta L0058              ; 85 58
            rol L0054              ; 26 54
            rol L0054              ; 26 54
            jsr L3D24              ; Randomize $1,$2,$3
            bvs L3D38              ; 70 AC
            ora #$6F               ; 09 6F
            sta L0070              ; 85 70
            lda L0BF4              ; AD F4 0B
            bne L3DB2              ; D0 1D
            txa                    ; 8A
            bcs L3DA0              ; B0 08
            and #$1F               ; 29 1F
            ora #$10               ; 09 10
            sta L006E              ; 85 6E
            bcc L3DA4              ; 90 04
L3DA0:      ora #$7F               ; 09 7F
            sta L0071              ; 85 71
L3DA4:      jsr L3D24              ; Randomize $1,$2,$3
            cmp #$05               ; C9 05
            lda #$09               ; A9 09
            bcs L3DAF              ; B0 02
            lda #$0A               ; A9 0A
L3DAF:      jsr L387D              ; New ship
L3DB2:      lda L0BF4              ; AD F4 0B
            bne L3E24              ; D0 6D
            jsr L3F27              ; 20 27 3F
            asl A                  ; 0A
            ldx L0BEF              ; AE EF 0B
            beq L3DC3              ; F0 03
            ora L0334              ; 0D 34 03
L3DC3:      sta L00D1              ; 85 D1
            jsr L3D02              ; 20 02 3D
            cmp L00D1              ; C5 D1
            bcs L3DD1              ; B0 05
            lda #$02               ; A9 02
            jsr L387D              ; New ship
L3DD1:      lda L0BEF              ; AD EF 0B
            bne L3E24              ; D0 4E
            dec L0C05              ; CE 05 0C
            bpl L3E24              ; 10 49
            inc L0C05              ; EE 05 0C
            jsr L3D24              ; Randomize $1,$2,$3
            ldy L0CDD              ; AC DD 0C
            beq L3DF1              ; F0 0B
            cmp #$5A               ; C9 5A
            bcs L3E24              ; B0 3A
            and #$07               ; 29 07
            cmp L0CDD              ; CD DD 0C
            bcc L3E24              ; 90 33
L3DF1:      jsr L3D02              ; 20 02 3D
            cmp #$C8               ; C9 C8
            bcs L3E0F              ; B0 17
            inc L0C05              ; EE 05 0C
            and #$03               ; 29 03
            adc #$03               ; 69 03
            tay                    ; A8
            txa                    ; 8A
            cmp #$C8               ; C9 C8
            rol A                  ; 2A
            ora #$C0               ; 09 C0
            sta L0073              ; 85 73
            tya                    ; 98
            jsr L387D              ; New ship
            jmp L3E24              ; 4C 24 3E
L3E0F:      and #$03               ; 29 03
            sta L0C05              ; 8D 05 0C
            sta L00A8              ; 85 A8
L3E16:      jsr L3D24              ; Randomize $1,$2,$3
            and #$03               ; 29 03
            ora #$01               ; 09 01
            jsr L387D              ; New ship
            dec L00A8              ; C6 A8
            bpl L3E16              ; 10 F2

L3E24:      lda L0C02              ; AD 02 0C
            sbc #$04               ; E9 04
            bcs L3E2D              ; B0 02
            lda #$00               ; A9 00
L3E2D:      sta L0C02              ; 8D 02 0C
            ldx #$FF               ; A2 FF
            txs                    ; 9A
            inx                    ; E8
            stx L0D01              ; 8E 01 0D
            ldx L0C03              ; AE 03 0C
            beq L3E3F              ; F0 03
            dec L0C03              ; CE 03 0C
L3E3F:      jsr L1D83              ; Update bars + gyro pointers
            lda L00A6              ; Headerstatus
            beq L3E4F              ; F0 09
            and L0D20              ; 2D 20 0D
            lsr A                  ; 4A
            bcs L3E4F              ; B0 03
            jsr L285F              ; 20 5F 28
L3E4F:      jsr L3AF0              ; 20 F0 3A

L3E52:      jsr L3E5F              ; Check keys

;            lda L00AF              ; Docked flag
	lda freeze		; Chart hack

            bne L3E24              ; D0 CB
            jmp L3D4A              ; 4C 4A 3D

;--------------------------------------------
; Key table
;--------------------------------------------

L3E5C:           ; F1  F2  F3
            .byte $B1,$91,$92

;--------------------------------------------
; Check keys
;--------------------------------------------

L3E5F:
            cmp #$A6               ; Check F8
            bne L3E66
            jmp L1B70              ; Display status
L3E66:
            cmp #$93               ; Check F4
            bne L3E6D
            jmp L2B42              ; Display Galactic chart 1 
L3E6D:
            cmp #$B4               ; Check F5
            bne L3E74
            jmp L2E6E              ; Display Short Range Chart
L3E74:
            cmp #$A4               ; Check F6
            bne L3E7E
            jsr L2F0D              ; Plot line
            jmp L29CC              ; Display Data on planet
L3E7E:
            cmp #$A7               ; Check F9
            bne L3E85
            jmp L2DA6              ; Display Inventory
L3E85:
            cmp #$95               ; Check F7
            bne L3E8C
            jmp L30F6              ; Display planet market prices

L3E8C:      cmp #$B0               ; Check F0
            bne L3E93
            jmp L31D4              ; Launch

L3E93:      bit L00AF              ; Docked flag
            bpl L3EB3              ; 10 1C

            cmp #$92               ; Check F3
            bne L3E9E
            jmp L3263              ; Display Equip schip
L3E9E:
            cmp #$B1               ; Check F1
            bne L3EA5
            jmp L2C35              ; Display Buy materials

L3EA5:      cmp #$48               ; Check :-key
            bne L3EAC
            jmp L40EE              ; Display Input commander

L3EAC:      cmp #$91               ; Check F2 if docked
            bne L3EC4
            jmp L2D17              ; Display Sell cargo

L3EB3:      stx L00D1              ; Save X

            ldx #$03               ; Set ptr
L3EB7:      cmp L3E5C-1,X          ; Check F1,F2,F3 
            bne L3EBF              ; If not pressed, jump
            jmp L27C5              ; If found plot crosshair
L3EBF:      dex                    ; Check next key from table
            bne L3EB7              ; Repeat

            ldx L00D1              ; Restore X

L3EC4:      cmp #$54               ; Check H-key
            bne L3ECB
            jmp L2FB3              ; Go to Hyperspace if not docked

L3ECB:      cmp #$32               ; Check D
            beq L3F0C              ; Display data on planet
L3EE1:
            sta L0006              ; Save A

            lda L00A6              ; Headerstatus
            and #$C0               ; Check if screen is chart
            beq L3EED              ; If not skip home crosshairs

            lda L002F              ; Hyperspace timer
            bne L3EED              ; D0 12

            lda L0006              ; Restore A
            cmp #$36               ; Check O-key
            bne L3EEA
            jsr L2E13              ; Erase crosshairs cursor
            jsr L3B33              ; Home crosshairs
            jsr L2E13              ; Plot crosshairs cursor

L3EEA:      jsr L2DE9              ; 20 E9 2D
L3EED:      lda L002F              ; Hyperspace timer
            beq L3F0B              ; If countdown=0, return

            dec L002E              ; Hyperspace sub timer
            bne L3F0B              ; If sub timer=5, decrement timer
            ldx L002F              ; Hyperspace timer
            dex                    ; Countdown timer
            jsr L3048              ; Print Hyperspace timer

            lda #$05
            sta L002E              ; Hyperspace sub timer
            ldx L002F              ; Hyperspace timer
            jsr L3048              ; Print Hyperspace timer
            dec L002F              ; Hyperspace timer
            bne L3F0B              ; If countdown not 0, return
            jmp L31A5              ; End of countdown, 
L3F0B:      rts

;-----------------------------------------------------
; Handle D-key in chart
; Print planet name and distance
;-----------------------------------------------------

L3F0C:      lda L00A6              ; Headerstatus
            and #$C0               ; Check is screen is chart
            beq L3F0B              ; If not return

            jsr L2875              ; Wipe screen
            sta L007E              ; VDU stat

;	inc L002D              ; Cursor Y
	bit L00A6
	bvs L3F0D
	lda #$15
	jmp L3F0E
L3F0D:
	lda #$1d
L3F0E:
	sta L002D              ; Cursor Y

            jsr L343B              ; Print planet name
            lda #$80
            sta L007E              ; VDU stat
            lda #$01
            sta L002C              ; Cursor X
            inc L002D              ; Cursor Y
            jmp L2994              ; Print distance

;-----------------------------------------------------

L3F27:      lda L031A              ; AD 1A 03
            clc                    ; 18
            adc L031D              ; 6D 1D 03
            asl A                  ; 0A
            adc L0321              ; 6D 21 03
            rts                    ; 60

L3F33:      lda #$E0               ; A9 E0

L3F35:      cmp L0054              ; C5 54
            bcc L3F3F              ; 90 06
            cmp L0057              ; C5 57
            bcc L3F3F              ; 90 02
            cmp L005A              ; C5 5A
L3F3F:      rts                    ; 60

L3F40:      ora L0054              ; 05 54
            ora L0057              ; 05 57
            ora L005A              ; 05 5A
            rts                    ; 60

;--------------------------------------------
; Death
;--------------------------------------------

L3F47:      jsr L4245              ; 20 45 42
            jsr L3C83              ; Reset vars
            asl L008C              ; Speed x 2
            asl L008C              ; Speed x 2
            jsr L27FC              ; Clear screen, plot screen

            ldx #$32               ; A2 32
            stx L0C02              ; 8E 02 0C
            jsr L2818              ; 20 18 28
            jsr L36D2              ; 20 D2 36

            lda #$0C               ; A9 0C
            sta L002D              ; Cursor Y
	dec L002D
	dec L002D
	dec L002D
            sta L002C              ; Cursor X
            lda #$92               ; Text 'Game over'
            sta L00A9
            jsr L355E              ; Print string

L3F6C:      jsr L3D02              ; 20 02 3D
            lda #$20               ; A9 20
            sta L0053              ; Galaxy data
            ldy #$00               ; A0 00
            sty L00A6              ; Headerstatus
            sty L0054              ; 84 54
            sty L0057              ; 84 57
            sty L005A              ; 84 5A
            sty L0073              ; 84 73
            dey                    ; 88
            eor #$2A               ; 49 2A
            sta L0056              ; 85 56
            ora #$50               ; 09 50
            sta L0059              ; 85 59
            txa                    ; 8A
            and #$8F               ; 29 8F
            sta L0070              ; 85 70
            ror A                  ; 6A
            and #$87               ; 29 87
            sta L0071              ; 85 71
            php                    ; 08
            ldx #$0A               ; A2 0A
            jsr L20FD              ; 20 FD 20
            plp                    ; 28
            lda #$00               ; A9 00
            ror A                  ; 6A
            ldy #$1F               ; A0 1F
            sta (L0020),Y          ; 91 20
            lda L0BE3              ; AD E3 0B
            beq L3F6C              ; F0 C7
            jsr L4312              ; Reset key buffer
            sta L008C              ; Reset speed
L3FAA:      jsr L0D40              ; 20 40 0D
            dec L0C02              ; CE 02 0C
            bne L3FAA              ; D0 F8
L3FB2:      jsr L3C83              ; Reset vars

;--------------------------------------------
; Program entry
;--------------------------------------------

L3FB5:
;            ldx #$FF
;            txs

; Entry when ESC is pressed during loading commander

L3FB8:
	ldx #$91
	stx maskbyte
	ldx #$8f
	stx wipebyte

            ldx #$03
            stx L002C		; Cursor X
;            jsr L4184              ; Disable ESCAPE and clear on BREAK

            ldx #$06
            lda #$80		; Text 'Load new commander'
            jsr L4016              ; Intro screen
            cmp #$39               ; Check if Y pressed
            bne L3FD6              ; If not, skip loading

            jsr L40A7              ; Input Commanders name
;            jsr L415C              ; Load commander file
            jsr L4092              ; Copy commander name in datablock
            jsr L27FE              ; 20 FE 27

L3FD6:      ldx #$4B               ; Copy commander data
L3FD8:      lda L15A4,X            ; from $15A4-$15F0
            sta L02FF,X            ; to $02FF-$034A
            dex
            bne L3FD8

            stx L00A6              ; Headerstatus
L3FE3:      jsr L4084              ; Calculate checksum
            cmp L15F0              ; Commander data checksum
            bne L3FE3              ; If not good, loop

            eor #$A9               ; 49 A9
            tax                    ; AA

            lda L030E              ; AD 0E 03
            cpx L15EF              ; EC EF 15
            beq L3FF8              ; F0 02

            ora #$80               ; 09 80
L3FF8:      ora #$08               ; 09 08
            sta L030E              ; 8D 0E 03
            jsr L3CDB              ; Plot missiles in panel

	jsr backup_screen	; Chart hack

            lda #$93               ; Print Press Fire or Space, Commander
            ldx #$03
            jsr L4016              ; Intro screen

            jsr L3B33              ; Set vars
            jsr L313E              ; 20 3E 31

L400D:      lda #$FF               ; Set var
            sta L00AF              ; Docked flag

	sta freeze		; Chart hack

            lda #$A6               ; Status screen
            jmp L3E52              ; Display

;--------------------------------------------
; Display title screen
;--------------------------------------------

L4016:      pha
            stx L00AB              ; TYPE
            jsr L3C6D              ; Reset

            lda #$01
            jsr L27FC              ; Clear screen, plot screen

            dec L00A6              ; Headerstatus

            lda #$60               ; A9 60
            sta L0061              ; INWK+14
            sta L005A              ; INWK+7

            ldx #$7F               ; A2 7F
            stx L0070              ; INWK+29
            stx L0071              ; INWK+30

            inx                    ; E8
            stx L007E              ; VDU stat

            lda L00AB              ; TYPE
            jsr L387D              ; New ship

            ldy #$06               ; A0 06
            sty L002C              ; Cursor X

            lda #$1E               ; A9 1E
            jsr L34C0              ; De-token

            ldy #$06               ; A0 06
            sty L002C              ; Cursor X

            inc L002D              ; Cursor Y
            lda L0D20              ; AD 20 0D
            beq L4050              ; F0 05

            lda #$FE               ; Text 'BY D.BRABEN AND I.BELL'
            jsr L34CB              ; De-token

L4050:      jsr L2882              ; Wipe text + draw frame
            sty L008C              ; Set speed
            sty L0D24              ; 

            pla                    ; 68
            jsr L355E              ; Print string

            lda #$94               ; Text '(C) Acornsoft 1984'
            ldx #$07               ; at X=7
            stx L002C              ; Cursor X
            jsr L355E              ; Print string

L4065:      lda L005A              ; INWK+7
            cmp #$01               ; C9 01
            beq L406D              ; F0 02

            dec L005A              ; INWK+7

L406D:      jsr L1157              ; 20 57 11

            lda #$80               ; A9 80
            sta L0059              ; INWK+6

            asl A                  ; 0A
            sta L0053              ; Galaxy data
            sta L0056              ; INWK+3
            jsr L46C8              ; 20 C8 46

            dec L00A9              ; C6 A9
            jsr L421D              ; Readkey
            beq L4065              ; F0 E2

            rts                    ; 60

;--------------------------------------------
; Calculate commander data checksum (L15F0)
;--------------------------------------------

L4084:      ldx #$49               ; A2 49
            clc                    ; 18
            txa                    ; 8A
L4088:      adc L15A4,X            ; 7D A4 15
            eor L15A5,X            ; 5D A5 15
            dex                    ; CA
            bne L4088              ; D0 F7
            rts                    ; 60

;--------------------------------------------
; Copy commander name to $0053 and $159D
;--------------------------------------------

L4092:      ldx #$07               ; A2 07
L4094:      lda L0053,X            ; Galaxy data
            sta L159D,X            ; 9D 9D 15
            dex                    ; CA
            bpl L4094              ; 10 F8

L409C:      ldx #$07               ; A2 07
L409E:      lda L159D,X            ; BD 9D 15
            sta L0053,X            ; Galaxy data
            dex                    ; CA
            bpl L409E              ; 10 F8
            rts                    ; 60

;--------------------------------------------
; Input Commander name?
;--------------------------------------------

L40A7:      lda #$01
            jsr L27FC              ; Clear screen, plot screen

            lda #$7B               ; Text 'INPUT COMMANDER'S NAME?'
            jsr L34CB              ; De-token

            jsr L2862              ; Pause

	jsr inputline

            inc L0D01              ; EE 01 0D
            bcs L409C              ; B0 D1
            tya                    ; 98
            beq L409C              ; F0 CE
            jmp L29B9              ; New line

inputline:
	ldy #7			; Clear inputbuffer
	lda #$20
inputclear:
	sta $53,y
	dey
	bpl inputclear

	lda #0			; Reset chr-ptr
	sta linelen

inputloop:
	jsr OSRDCH		; Get chr

	cmp #13			; Check chr=RETURN
	beq end_ret

	cmp #27			; Check chr=ESCAPE
	beq end_esc

	cmp #127		; Check chr=BACKSPACE
	bne chk_chr
	ldy linelen		; Check if buffer is empty
	beq inputloop		; If yes, skip

	dec linelen		; Point to previous chr
	jsr wipechr		; Wipe chr on screen

	lda #13			; Store RET after chr in inputbuffer
	sta $53,y

	lda #32			; Load space
	dec L002C		; Dec x-pos
	jsr L1CF8
	dec L002C		; Dec x-pos
	jmp inputloop		; Print character

chk_chr:
	cmp #32			; If chr<32 ignore
	bcc inputloop

	cmp #$7b		; If chr>$7a ignore
	bcs inputloop
chk_len:
	ldy linelen		; Check maxlen<7
	cpy #7
	bne prt_chr
	jsr BELL		; Beep
	jmp inputloop	

prt_chr:
	sta $53,y		; Store chr in inputbuffer
prt_chr1:
	pha
	lda #13
	sta $54,y
	pla
	jsr L1CF8		; Print character

	inc linelen		; Increment chr-ptr
	jmp inputloop		; Repeat

end_ret:
	ldy linelen
	clc
	rts
end_esc:
	ldy linelen
	sec
	rts

linelen:
	.byte 0

wipechr:
	lda #0
	ldy linelen
	sta $8173,y
	sta $8193,y
	sta $81b3,y
	sta $81d3,y
	sta $81f3,y
	sta $8213,y
	rts
;--------------------------------------------
; Parameterblock OSWORD
;--------------------------------------------

L40D1:
;            .byte $53,$00	; Buffer address
;            .byte $07		; Max len
;            .byte $21		; ASCII>=$21 (!)
;            .byte $7A		; ASCII<=$7A (z)

;--------------------------------------------
; Clear page $09,$0A,$0B
; On exit: A=0, Y=0, X=9
;--------------------------------------------

L40D6:      ldx #$0B               ; Clear page $0B
            jsr L40E0

            dex                    ; Clear page $0A
            jsr L40E0

            dex                    ; Clear page $09

;--------------------------------------------
; Clear page
;
; X=hb startaddress
;--------------------------------------------

L40E0:
	ldy #$00		; Reset lb address
	sty L0007

	stx L0008		; Set hb address
L40E6:
	lda #$00		; Clear data
L40E8:
	sta (L0007),Y		; Clear address
	iny			; Next byte
	bne L40E8		; Repeat until end of page
	rts

;--------------------------------------------
; Display Input commander name screen
;--------------------------------------------

L40EE:      jsr L40A7              ; Input commander name
            jsr L4092              ; Copy commander name
            jsr L40D6              ; Clear page $09,$0A,$0B

            lsr L0349              ; 4E 49 03

            ldx #$4B               ; Copy default commander data 
L40FC:      lda L0300,X            ; To $0300
            sta L0900,X            ; To $0900
            sta L15A5,X            ; To $15A5
            dex
            bpl L40FC

            jsr L4084              ; Check commander data checksum
            sta L15F0              ; Store checksum

            pha                    ; 48
            ora #$80               ; 09 80
            sta L003D              ; 85 3D
            eor L030E              ; 4D 0E 03
            sta L003F              ; 85 3F
            eor L030B              ; Cash
            sta L003E              ; 85 3E
            eor #$5A               ; 49 5A
            eor L0348              ; 4D 48 03
            sta L0040              ; 85 40
            jsr L1C43              ; 20 43 1C
            jsr L29B9              ; New line
            jsr L29B9              ; New line
            pla                    ; 68
            sta L094B              ; 8D 4B 09
            eor #$A9               ; 49 A9
            sta L15EF              ; 8D EF 15
            sta L094A              ; 8D 4A 09
            ldy #$09               ; A0 09
            sty L0A0B              ; 8C 0B 0A
            iny                    ; C8
            sty L0A0F              ; 8C 0F 0A
            lda #$00               ; A9 00
            jsr L414A              ; 20 4A 41
            jmp L400D              ; 4C 0D 40

;--------------------------------------------
;OSFILE
;  X=lb, Y=hb parameter block
;--------------------------------------------

L414A:
            ldx #$53               ; lb filename ptr
            stx L0A00

            ldx #$FF               ; Set OSFILE flag
            stx L0D01

            inx                    ; Block at $A00
;            jsr LFFDD              ; OSFILE

            inc L0D01              ; Reset OSFILE flag
            rts

;--------------------------------------------
; Load commander file
;--------------------------------------------

L415C:
;            ldx #$02
;            jsr L4184              ; Normal ESCAPE and clear on BREAK

            jsr L40D6              ; Clear page $09,$0A,$0B

            ldy #$09               ; Set hb-load address
            sty L0A03

            inc L0A0B              ; Set hb-end address
            iny                    ; hb=$A
            lda #$FF               ; Command=LOAD file
            jsr L414A              ; Save file

            lda L0900              ; If L0900=0 LOAD error
            bmi L418C+1              ; BREAK

            ldx #$4B               ; LOAD ok at $900
L4179:      lda L0900,X            ; Copy $0900-$094b
            sta L15A5,X            ; to $15A5-$15F0
            dex
            bpl L4179

;            ldx #$03               ; Disable ESCAPE and clear on BREAK
	rts
;--------------------------------------------
; Disable ESCAPE and clear on BREAK

;--------------------------------------------

L4184:
;            ldy #$00               ; *FX 200,3
;            lda #$C8
            jmp LFFF4              ; Return from sub

;--------------------------------------------

L418C:      ldx #$00               ; A2 00
            jsr L3837              ; 20 37 38
            ldx #$03               ; A2 03
            jsr L3837              ; 20 37 38
            ldx #$06               ; A2 06
            jsr L3837              ; 20 37 38
L419B:      lda L00D2              ; A5 D2
            ora L00D5              ; 05 D5
            ora L00D8              ; 05 D8
            ora #$01               ; 09 01
            sta L00DB              ; 85 DB
            lda L00D3              ; A5 D3
            ora L00D6              ; 05 D6
            ora L00D9              ; 05 D9
L41AB:      asl L00DB              ; 06 DB
            rol A                  ; 2A
            bcs L41BE              ; B0 0E
            asl L00D2              ; 06 D2
            rol L00D3              ; 26 D3
            asl L00D5              ; 06 D5
            rol L00D6              ; 26 D6
            asl L00D8              ; 06 D8
            rol L00D9              ; 26 D9
            bcc L41AB              ; 90 ED
L41BE:      lda L00D3              ; A5 D3
            lsr A                  ; 4A
            ora L00D4              ; 05 D4
            sta L0031              ; Set x1
            lda L00D6              ; A5 D6
            lsr A                  ; 4A
            ora L00D7              ; 05 D7
            sta L0032              ; Set y1
            lda L00D9              ; A5 D9
            lsr A                  ; 4A
            ora L00DA              ; 05 DA
            sta L0033              ; 85 33
L41D3:      lda L0031              ; Get x1
            jsr L23EE              ; 20 EE 23
            sta L00A1              ; 85 A1
            lda L001B              ; A5 1B
            sta L00A0              ; 85 A0
            lda L0032              ; Get y1
            jsr L23EE              ; 20 EE 23
            sta L00D1              ; 85 D1
            lda L001B              ; A5 1B
            adc L00A0              ; 65 A0
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            adc L00A1              ; 65 A1
            sta L00A1              ; 85 A1
            lda L0033              ; A5 33
            jsr L23EE              ; 20 EE 23
            sta L00D1              ; 85 D1
            lda L001B              ; A5 1B
            adc L00A0              ; 65 A0
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            adc L00A1              ; 65 A1
            sta L00A1              ; 85 A1
            jsr L45F4              ; 20 F4 45
            lda L0031              ; Get x1
            jsr L453B              ; 20 3B 45
            sta L0031              ; Set x1
            lda L0032              ; Get y1
            jsr L453B              ; 20 3B 45
            sta L0032              ; Set y1
            lda L0033              ; A5 33
            jsr L453B              ; 20 3B 45
            sta L0033              ; 85 33
            rts                    ; 60

;--------------------------------------------
; Read key
;--------------------------------------------

L421D:
;            ldx #$10               ; A2 10
L421F:
            jsr L42D7              ; 20 D7 42
;            bmi L4228              ; 30 04
;            inx                    ; E8
;            bpl L421F              ; 10 F8

;            txa                    ; 8A
L4228:
;            eor #$80               ; 49 80
;            tay                    ; A8
;            jsr L42D5              ; 20 D5 42
;            php                    ; 08
;            tya                    ; 98
;            plp                    ; 28
;            bpl L4235              ; 10 02
;            ora #$80               ; 09 80
L4235:
;            tax                    ; AA
L4236:      rts                    ; 60

;--------------------------------------------

L4237:      lda #$00               ; A9 00
            sta L0030              ; E mark in panel
            sta L0BFF              ; 8D FF 0B
            jsr L391A              ; 20 1A 39
            lda #$48               ; Silence
            bne L4281              ; Make sound
L4245:      lda #$18               ; Beep/hit
            bne L4281              ; Make sound
L4249:      ldx #$08               ; A2 08
            jsr L2160              ; 20 60 21
            bcc L4236              ; 90 E6

            lda #$78               ; Text 'INCOMING MISSILE'
            jsr L43C2              ; Print at bottomline

            lda #$30               ; Launch sound
            bne L4281              ; Make sound
L4259:      inc L0347              ; EE 47 03
            bne L4266              ; D0 08
            inc L0348              ; EE 48 03

            lda #$65               ; Text 'RIGHT .. COMMANDER'
            jsr L43C2              ; Print at bottomline
L4266:      ldx #$07               ; A2 07
L4268:      stx L00D1              ; 86 D1
            lda #$18               ; A9 18
            jsr L42A9              ; 20 A9 42
            lda L005A              ; A5 5A
            lsr A                  ; 4A
            lsr A                  ; 4A
            and L00D1              ; 25 D1
            ora #$F1               ; 09 F1
            sta L000B              ; 85 0B
            jsr L4284              ; 20 84 42
            lda #$10               ; A9 10

            .byte $2C
;------------------------------------------------
; Make beep sound
;------------------------------------------------

L427F:
            lda #32                ; A9 20

;------------------------------------------------
; Make sound
;
; Nr = A*8 (max 10)
;
; Table lb at L3C3B:
;
; Nr CH AMP PIT DUR
;  0 11  01  00  03  Laser             (env=1)
;  8 11  02  2C  04  Enemy fired laser (env=2)
; 10 11  03  F0  06  Hit2              (env=3)
; 18 10  F1  04  05  Beep/hit1         (note volume=15)
; 20 01  F1  BC  01  Energy low        (note volume=15) 
; 28 11  F4  0C  08                    (note volume=12)
; 30 10  F1  04  06  Launch            (noise volume=15)
; 38 10  02  60  10                    (env=2)
; 40 11  04  C2  FF                    (env=4)
; 48 11  00  00  00  Silence
;
; In ELITEDATA the ENVELOPES are defined
;
; ENVELOPE n,s,Pi1,Pi2,Pi3,Pr1,Pr2,Pr3,0,0,0,0,0,0
;  n  = nr (1-16)
;  s  = duration pitch in 10 ms
; Pi1 = Value Pitch increment 1st stage
; Pi2 = Value Pitch increment 2nd stage
; Pi3 = Value Pitch increment 3rd stage
; Pr1 = Number Pitch increments 1st stage
; Pr2 = Number Pitch increments 2nd stage
; Pr3 = Number Pitch increments 3rd stage
;
;                   n   s  pi1 pi2 pi3 pr1 pr2 pr3
;L1D14:
;            .byte $01,$01,$00,$6F,$F8,$04,$01,$08	; Envelope
;            .byte $7E,$00,$00,$82,$7E,$7E
;L1D22:
;            .byte $02,$01,$0E,$EE,$FF,$2C,$20,$32	; Envelope
;            .byte $06,$01,$00,$FE,$78,$7E
;L1D30:
;            .byte $03,$01,$01,$FF,$FD,$11,$20,$80	; Envelope
;            .byte $01,$00,$00,$FF,$01,$01
;L1D3E:
;            .byte $04,$01,$04,$F8,$2C,$04,$06,$08	; Envelope
;            .byte $16,$00,$00,$81,$7E,$00

;------------------------------------------------

L4281:      jsr L42A9              ; Set 4x 16-bits parameters in L0009 (hb=0)

L4284:      ldx L0D1D              ; Sound flag
            bne L4236              ; If set, no sound

            lda L0009              ; Get channel
            and #$01               ; Filter bit0
            tax                    ; set pointer

            ldy L0011              ; Get soundindex
            lda L3C63,Y            ; B9 63 3C
            cmp L0BFB,X            ; DD FB 0B
            bcc L4236              ; 90 9E
            sta L0BFB,X            ; 9D FB 0B
            and #$0F               ; 29 0F
            sta L0BFD,X            ; 9D FD 0B

            ldx #<L0009            ; Parameterblock
            ldy #>L0009
            lda #$07               ; Sound command
            jmp LFFF1              ; OSWORD

L42A9:      sta L0011              ; Save soundindex
            lsr A                  ; Skipfactor=4
            adc #$03               ; 
            tay                    ; Set pointer

            ldx #$07               ; Set 4x16 bits parameters
L42B1:      lda #$00               ; hb=0
            sta L0009,X            ; Set hb
            dex
            lda L3C3B,Y            ; Read parameter
            sta L0009,X            ; Set lb
            dey                    ; Next parameter
            dex
            bpl L42B1              ; Repeat for 4 parameters
L42BF:      rts

;------------------------------------------------
; Key code table
;------------------------------------------------

; Navigation controls:
;
;  /  = Speed -
; SPC = Speed +
;  <  = Rotate clockwise
;  >  = Rotate anticlockwise
;  X  = Dive
;  S  = Climb
;  A  = Laser

;                  /  SPC  <   >   X   S   A
            .byte $68,$62,$66,$67,$42,$51,$41

; Other controls:
;
;  -  = Energy bomb activate
; ESC = Go to intro screen
;  T  = Lock missile on target
;  U  = Unlock missile
;  M  = Fire missile
;  E  = E.C.M activate
;  J  = Space skip
;  C  = Docking computer on

;                  -  ESC  T   U   M   E   J   C
            .byte $17,$70,$23,$35,$65,$22,$45,$52

;------------------------------------------------
; Scan key (electron matrix code)
;------------------------------------------------

L42CF:
;            sec
;            clv
;            sei
;            jmp (L0D04)
	jmp keyscan

;------------------------------------------------
; Check key
;------------------------------------------------

L42D5:
            ldx #$40               ; A2 40
L42D7:

            tya
            pha                    ; Save Y

;            txa
;            pha                    ; Save X

;            ora #$80               ; Set bit7
;            tax

            jsr L42CF              ; Scan key
	
;            cli
;            tax                    ; Save key in X
;            pla                    ; Get X
;            and #$7F               ; Bit7=0

;            cpx #$80               ; Check X
;            bcc L42EC              ; Skip if X<$80
;            ora #$80               ; Set bit7
L42EC:
            tax                    ; AA
            pla                    ; 68
            tay                    ; A8
            txa                    ; 8A
            rts                    ; 60

key_buf:
	.byte 0

;------------------------------------------------
;
;------------------------------------------------

            lda #$80               ; Read ADC channel
            jsr LFFF4              ; OSBYTE
            tya                    ; 98
            eor L0D23              ; 4D 23 0D
            rts                    ; 60

;------------------------------------------------
;
;------------------------------------------------

L42FB:      sty L00D1              ; 84 D1
            cpx L00D1              ; E4 D1
            bne L4311              ; D0 10
            lda L0CDE,X            ; BD DE 0C
            eor #$FF               ; Invert
            sta L0CDE,X            ; 9D DE 0C
            jsr L1CF6              ; Bell
            jsr L2864              ; Pause
            ldy L00D1              ; A4 D1
L4311:      rts                    ; 60

;---------------------------------------------
; Reset key buffer
;---------------------------------------------

L4312:      lda #$00               ; A9 00
            ldy #$0F               ; A0 0F
L4316:      sta L0041,Y            ; Last-key
            dey                    ; 88
            bne L4316              ; D0 FA
            rts                    ; 60

;---------------------------------------------
; Check ship control movements and set vars
;
; Reg Key   Function
;--------------------
; $42  /  = Speed-
; $43 SPC = Speed+
; $44  <  = Left
; $45  >  = Right
; $46  X  = Climb
; $47  S  = Dive
; $48  A  = Laser
;---------------------------------------------

L431D:      jsr L4312              ; Reset key buffer

            ldy #$07               ; Set key buffer counter
L4322:
;            ldx L42BF,Y            ; Get key value
;            jsr L42D7              ; Check key
;            bpl L432E              ; Skip if not pressed
	jsr L42D7
	cmp L42BF,Y
	bne L432E
            ldx #$FF               ; Set keyvar
            stx L0041,Y            ; Last key
L432E:      dey
            bne L4322              ; Repeat

            ldx L00AC              ; A6 AC
            lda #$07               ; A9 07
            ldy L0044              ; A4 44
            beq L433C              ; F0 03

            jsr L25F2              ; 20 F2 25

L433C:      ldy L0045              ; A4 45
            beq L4343              ; F0 03

            jsr L2602              ; 20 02 26

L4343:      stx L00AC              ; 86 AC
            asl A                  ; 0A
            ldx L00AD              ; A6 AD
            ldy L0046              ; A4 46
            beq L434F              ; F0 03

            jsr L2602              ; 20 02 26

L434F:      ldy L0047              ; A4 47
            beq L4356              ; F0 03

            jsr L25F2              ; 20 F2 25

L4356:      stx L00AD              ; 86 AD
            jsr L421D              ; Read key
            stx L0041              ; Last key
            cpx #$38               ; Copy-key?
            bne L438C              ; No, jump

L4361:      jsr L2862              ; Pause
            jsr L421D              ; Read key
            cpx #$51               ; S-key?
            bne L4370              ; D0 05
            lda #$00               ; A9 00
            sta L0D1D              ; Sound flag

L4370:      ldy #$40               ; A0 40
L4372:      jsr L42FB              ; 20 FB 42
            iny                    ; C8
            cpy #$47               ; C0 47
            bne L4372              ; D0 F8

            cpx #$10               ; E0 10
            bne L4381              ; D0 03
            stx L0D1D              ; Sound flag

L4381:      cpx #$70               ; ESC_key?
            bne L4388              ; D0 03
            jmp L3FB2              ; 4C B2 3F

L4388:      cpx #$59               ; Del-key?
            bne L4361              ; D0 D5

L438C:      lda L00A6              ; Headerstatus
            bne L43A3              ; D0 13

            ldy #$0F               ; A0 0F
            lda #$FF               ; A9 FF
L4394:      ldx L42BF,Y            ; BE BF 42
            cpx L0041              ; Last-key
            bne L439E              ; D0 03
            sta L0041,Y            ; Last-key
L439E:      dey                    ; 88
            cpy #$07               ; C0 07
            bne L4394              ; D0 F1
L43A3:      rts                    ; 60

;--------------------------------------------
; Read key in A/X at exit
;--------------------------------------------

L43A4:      sty L00A4              ; YSAV
            dec L0D01              ; Set scanflag
;            jsr LFFE0              ; OSRDCH
	jsr READCHR
	iny
	tya

            inc L0D01              ; Reset scanflag
            tax                    ; Set key in X
L43B0:      rts

;--------------------------------------------
; 
;--------------------------------------------

L43B1:      stx L0C06              ; 8E 06 0C
            pha                    ; 48
            lda L0CD1              ; AD D1 0C
            jsr L43D9              ; 20 D9 43
            pla                    ; 68
            .byte $2C
L43BD:      lda #$6C               ; A9 6C
            .byte $2C
L43C0:
            lda #$6f               ; A9 6F
L43C2:      ldx #$00               ; A2 00
            stx L007E              ; VDU stat
            ldy #$09               ; A0 09
            sty L002C              ; Cursor X

;            ldy #$16               ; A0 16
            ldy #$15               ; CHAR8x6

            sty L002D              ; Cursor Y
            cpx L0C06              ; EC 06 0C
            bne L43B1              ; D0 DE
            sty L0C06              ; 8C 06 0C
            sta L0CD1              ; 8D D1 0C
L43D9:      jsr L34CB              ; De-token

            lsr L0C07              ; 4E 07 0C
            bcc L43B0              ; 90 CF
            lda #$FD               ; Text ' DESTROYED'
            jmp L34CB              ; De-token

L43E6:      jsr L3D24              ; Randomize $1,$2,$3
            bmi L43B0              ; 30 C5
            cpx #$16               ; E0 16
            bcs L43B0              ; B0 C1
            lda L0317,X            ; Inventory
            beq L43B0              ; F0 BC
            lda L0C06              ; AD 06 0C
            bne L43B0              ; D0 B7
            ldy #$03               ; A0 03
            sty L0C07              ; 8C 07 0C
            sta L0317,X            ; Inventory
            cpx #$11               ; E0 11
            bcs L440A              ; B0 05
            txa                    ; 8A
            adc #$D0               ; Text products
            bne L43C2              ; Print at bottomline
L440A:      beq L43BD              ; F0 B1
            cpx #$12               ; E0 12
            beq L43C0              ; F0 B0
            txa                    ; 8A
            adc #$5D               ; 69 5D
            bne L43C2              ; Print at bottomline

;------------------------------------------------
; Token Text table $00-$1F
;------------------------------------------------

L4415:      .byte "AL","LE","XE","GE","ZA","CE","BI","SO" ; $00-$07
            .byte "US","ES","AR","MA","IN","DI","RE","A?" ; $08-$0F
            .byte "ER","AT","EN","BE","RA","LA","VE","TI" ; $10-$17
            .byte "ED","OR","QU","AN","TE","IS","RI","ON" ; $18-$1F

;------------------------------------------------
; Cargo data
;------------------------------------------------

L4455:      .byte $13
L4456:      .byte $82
L4457:      .byte $06

L4458:      .byte $01,$14,$81,$0A,$03,$41,$83,$02
            .byte $07,$28,$85,$E2,$1F,$53,$85,$FB
            .byte $0F,$C4,$08,$36,$03,$EB,$1D,$08
            .byte $78,$9A,$0E,$38,$03,$75,$06,$28
            .byte $07,$4E,$01,$11,$1F,$7C,$0D,$1D
            .byte $07,$B0,$89,$DC,$3F,$20,$81,$35
            .byte $03,$61,$A1,$42,$07,$AB,$A2,$37
            .byte $1F,$2D,$C1,$FA,$0F,$35,$0F,$C0
            .byte $07

;------------------------------------------------

L4499:      tya                    ; 98
            ldy #$02               ; A0 02
            jsr L4568              ; 20 68 45
            sta L0067              ; 85 67
            jmp L44E1              ; 4C E1 44
L44A4:      tax                    ; AA
            lda L0032              ; Get y1
            and #$60               ; 29 60
            beq L4499              ; F0 EE
            lda #$02               ; A9 02
            jsr L4568              ; 20 68 45
            sta L0065              ; 85 65
            jmp L44E1              ; 4C E1 44
L44B5:      lda L005D              ; A5 5D
            sta L0031              ; Set x1
            lda L005F              ; A5 5F
            sta L0032              ; Set y1
            lda L0061              ; A5 61
            sta L0033              ; 85 33
            jsr L41D3              ; 20 D3 41
            lda L0031              ; Get x1
            sta L005D              ; 85 5D
            lda L0032              ; Get y1
            sta L005F              ; 85 5F
            lda L0033              ; A5 33
            sta L0061              ; 85 61
            ldy #$04               ; A0 04
            lda L0031              ; Get x1
            and #$60               ; 29 60
            beq L44A4              ; F0 CC
            ldx #$02               ; A2 02
            lda #$00               ; A9 00
            jsr L4568              ; 20 68 45
            sta L0063              ; 85 63
L44E1:      lda L0063              ; A5 63
            sta L0031              ; Set x1
            lda L0065              ; A5 65
            sta L0032              ; Set y1
            lda L0067              ; A5 67
            sta L0033              ; 85 33
            jsr L41D3              ; 20 D3 41
            lda L0031              ; Get x1
            sta L0063              ; 85 63
            lda L0032              ; Get y1
            sta L0065              ; 85 65
            lda L0033              ; A5 33
            sta L0067              ; 85 67
            lda L005F              ; A5 5F
            sta L00A0              ; 85 A0
            lda L0067              ; A5 67
            jsr L24B7              ; 20 B7 24
            ldx L0061              ; A6 61
            lda L0065              ; A5 65
            jsr L251C              ; 20 1C 25
            eor #$80               ; 49 80
            sta L0069              ; 85 69
            lda L0063              ; A5 63
            jsr L24B7              ; 20 B7 24
            ldx L005D              ; A6 5D
            lda L0067              ; A5 67
            jsr L251C              ; 20 1C 25
            eor #$80               ; 49 80
            sta L006B              ; 85 6B
            lda L0065              ; A5 65
            jsr L24B7              ; 20 B7 24
            ldx L005F              ; A6 5F
            lda L0063              ; A5 63
            jsr L251C              ; 20 1C 25
            eor #$80               ; 49 80
            sta L006D              ; 85 6D
            lda #$00               ; A9 00
            ldx #$0E               ; A2 0E
L4534:      sta L005C,X            ; 95 5C
            dex                    ; CA
            dex                    ; CA
            bpl L4534              ; 10 FA
            rts                    ; 60

L453B:      tay                    ; A8
            and #$7F               ; 29 7F
            cmp L00A0              ; C5 A0
            bcs L4562              ; B0 20
            ldx #$FE               ; A2 FE
            stx L00D1              ; 86 D1
L4546:      asl A                  ; 0A
            cmp L00A0              ; C5 A0
            bcc L454D              ; 90 02
            sbc L00A0              ; E5 A0
L454D:      rol L00D1              ; 26 D1
            bcs L4546              ; B0 F5
            lda L00D1              ; A5 D1
            lsr A                  ; 4A
            lsr A                  ; 4A
            sta L00D1              ; 85 D1
            lsr A                  ; 4A
            adc L00D1              ; 65 D1
            sta L00D1              ; 85 D1
            tya                    ; 98
            and #$80               ; 29 80
            ora L00D1              ; 05 D1
            rts                    ; 60

L4562:      tya                    ; 98
            and #$80               ; 29 80

            ora #$60               ; 09 60

            rts                    ; 60

L4568:      sta L001D              ; 85 1D
            lda L005D,X            ; B5 5D
            sta L00A0              ; 85 A0
            lda L0063,X            ; B5 63
            jsr L24B7              ; 20 B7 24
            ldx L005D,Y            ; B6 5D
            stx L00A0              ; 86 A0
            lda L0063,Y            ; B9 63 00
            jsr L24DD              ; 20 DD 24
            stx L001B              ; 86 1B
            ldy L001D              ; A4 1D
            ldx L005D,Y            ; B6 5D
            stx L00A0              ; 86 A0
            eor #$80               ; 49 80
            sta L001C              ; 85 1C
            eor L00A0              ; 45 A0
            and #$80               ; 29 80
            sta L00D1              ; 85 D1
            lda #$00               ; A9 00
            ldx #$10               ; A2 10
            asl L001B              ; 06 1B
            rol L001C              ; 26 1C
            asl L00A0              ; 06 A0
            lsr L00A0              ; 46 A0
L459B:      rol A                  ; 2A
            cmp L00A0              ; C5 A0
            bcc L45A2              ; 90 02
            sbc L00A0              ; E5 A0
L45A2:      rol L001B              ; 26 1B
            rol L001C              ; 26 1C
            dex                    ; CA
            bne L459B              ; D0 F2
            lda L001B              ; A5 1B
            ora L00D1              ; 05 D1
            rts                    ; 60

;--------------------------------------------
; Start ELITEG.TXT
;--------------------------------------------

L45AE:      jsr L4716              ; 20 16 47
            jsr L3972              ; 20 72 39
            ora L00D3              ; 05 D3
            bne L45D9              ; D0 21
            lda L00E0              ; A5 E0
            cmp #$BE               ; C9 BE
            bcs L45D9              ; B0 1B
            ldy #$02               ; A0 02
            jsr L45E0              ; 20 E0 45
            ldy #$06               ; A0 06
            lda L00E0              ; A5 E0
            adc #$01               ; 69 01
            jsr L45E0              ; 20 E0 45
            lda #$08               ; A9 08
            ora L0072              ; 05 72
            sta L0072              ; 85 72
            lda #$08               ; A9 08
            jmp L4C80              ; 4C 80 4C

L45D7:      pla                    ; 68
            pla                    ; 68
L45D9:      lda #$F7               ; A9 F7
            and L0072              ; 25 72
            sta L0072              ; 85 72
            rts                    ; 60

L45E0:      sta (L0074),Y          ; 91 74
            iny                    ; C8
            iny                    ; C8
            sta (L0074),Y          ; 91 74
            lda L00D2              ; A5 D2
            dey                    ; 88
            sta (L0074),Y          ; 91 74
            adc #$03               ; 69 03
            bcs L45D7              ; B0 E8
            dey                    ; 88
            dey                    ; 88
            sta (L0074),Y          ; 91 74
            rts                    ; 60

L45F4:      ldy L00A1              ; A4 A1
            lda L00A0              ; A5 A0
            sta L00A2              ; 85 A2
            ldx #$00               ; A2 00
            stx L00A0              ; 86 A0
            lda #$08               ; A9 08
            sta L00D1              ; 85 D1
L4602:      cpx L00A0              ; E4 A0
            bcc L4614              ; 90 0E
            bne L460C              ; D0 04
            cpy #$40               ; C0 40
            bcc L4614              ; 90 08
L460C:      tya                    ; 98
            sbc #$40               ; E9 40
            tay                    ; A8
            txa                    ; 8A
            sbc L00A0              ; E5 A0
            tax                    ; AA
L4614:      rol L00A0              ; 26 A0
            asl L00A2              ; 06 A2
            tya                    ; 98
            rol A                  ; 2A
            tay                    ; A8
            txa                    ; 8A
            rol A                  ; 2A
            tax                    ; AA
            asl L00A2              ; 06 A2
            tya                    ; 98
            rol A                  ; 2A
            tay                    ; A8
            txa                    ; 8A
            rol A                  ; 2A
            tax                    ; AA
            dec L00D1              ; C6 D1
            bne L4602              ; D0 D8
            rts                    ; 60

L462B:      cmp L00A0              ; C5 A0
            bcs L4649              ; B0 1A
L462F:      ldx #$FE               ; A2 FE
            stx L00A1              ; 86 A1
L4633:      asl A                  ; 0A
            bcs L4641              ; B0 0B
            cmp L00A0              ; C5 A0
            bcc L463C              ; 90 02
            sbc L00A0              ; E5 A0
L463C:      rol L00A1              ; 26 A1
            bcs L4633              ; B0 F3
            rts                    ; 60

L4641:      sbc L00A0              ; E5 A0
            sec                    ; 38
            rol L00A1              ; 26 A1
            bcs L4633              ; B0 EB
            rts                    ; 60

L4649:      lda #$FF               ; A9 FF
            sta L00A1              ; 85 A1
            rts                    ; 60

L464E:      eor L00A2              ; 45 A2
            bmi L4658              ; 30 06
            lda L00A0              ; A5 A0
            clc                    ; 18
            adc L00A1              ; 65 A1
            rts                    ; 60

L4658:      lda L00A1              ; A5 A1
            sec                    ; 38
            sbc L00A0              ; E5 A0
            bcc L4661              ; 90 02
            clc                    ; 18
            rts                    ; 60

L4661:      pha                    ; 48
            lda L00A2              ; A5 A2
            eor #$80               ; 49 80
            sta L00A2              ; 85 A2
            pla                    ; 68
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
            rts                    ; 60

L466E:      ldx #$00               ; A2 00
            ldy #$00               ; A0 00
L4672:      lda L0031              ; Get x1
            sta L00A0              ; 85 A0
            lda L0009,X            ; B5 09
            jsr L242A              ; 20 2A 24
            sta L00D1              ; 85 D1
            lda L0032              ; Get y1
            eor L000A,X            ; 55 0A
            sta L00A2              ; 85 A2
            lda L0033              ; A5 33
            sta L00A0              ; 85 A0
            lda L000B,X            ; B5 0B
            jsr L242A              ; 20 2A 24
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            sta L00A1              ; 85 A1
            lda L0034              ; A5 34
            eor L000C,X            ; 55 0C
            jsr L464E              ; 20 4E 46
            sta L00D1              ; 85 D1
            lda L0035              ; A5 35
            sta L00A0              ; 85 A0
            lda L000D,X            ; B5 0D
            jsr L242A              ; 20 2A 24
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            sta L00A1              ; 85 A1
            lda L0036              ; A5 36
            eor L000E,X            ; 55 0E
            jsr L464E              ; 20 4E 46
            sta L0037,Y            ; 99 37 00
            lda L00A2              ; A5 A2
            sta L0038,Y            ; 99 38 00
            iny                    ; C8
            iny                    ; C8
            txa                    ; 8A
            clc                    ; 18
            adc #$06               ; 69 06
            tax                    ; AA
            cmp #$11               ; C9 11
            bcc L4672              ; 90 AE
            rts                    ; 60

L46C5:      jmp L39AD              ; 4C AD 39

L46C8:      lda L00AB              ; TYPE
            bmi L46C5              ; 30 F9

            lda #$1F               ; A9 1F
            sta L00B7              ; 85 B7

            lda #$20               ; A9 20
            bit L0072              ; 24 72
            bne L4703              ; D0 2D
            bpl L4703              ; 10 2B
            ora L0072              ; 05 72
            and #$3F               ; 29 3F
            sta L0072              ; 85 72

            lda #$00               ; A9 00
            ldy #$1C               ; A0 1C
            sta (L0020),Y          ; 91 20

            ldy #$1E               ; A0 1E
            sta (L0020),Y          ; 91 20

            jsr L4716              ; 20 16 47

            ldy #$01               ; A0 01
            lda #$12               ; A9 12
            sta (L0074),Y          ; 91 74

            ldy #$07               ; A0 07
            lda (L001E),Y          ; B1 1E

            ldy #$02               ; A0 02
            sta (L0074),Y          ; 91 74

L46F9:      iny                    ; C8
            jsr L3D24              ; Randomize $1,$2,$3
            sta (L0074),Y          ; 91 74
            cpy #$06               ; C0 06
            bne L46F9              ; D0 F6

L4703:      lda L005B              ; A5 5B
            bpl L4724              ; 10 1D

L4707:      lda L0072              ; A5 72
            and #$20               ; 29 20
            beq L4716              ; F0 09
            lda L0072              ; A5 72
            and #$F7               ; 29 F7
            sta L0072              ; 85 72
            jmp L35A1              ; 4C A1 35

L4716:      lda #$08               ; A9 08
            bit L0072              ; 24 72
            beq L4723              ; F0 07
            eor L0072              ; 45 72
            sta L0072              ; 85 72
            jmp L4C84              ; 4C 84 4C

L4723:      rts                    ; 60

L4724:      lda L005A              ; A5 5A
            cmp #$C0               ; C9 C0
            bcs L4707              ; B0 DD
            lda L0053              ; Galaxy data
            cmp L0059              ; C5 59
            lda L0054              ; A5 54
            sbc L005A              ; E5 5A
            bcs L4707              ; B0 D3
            lda L0056              ; A5 56
            cmp L0059              ; C5 59
            lda L0057              ; A5 57
            sbc L005A              ; E5 5A
            bcs L4707              ; B0 C9
            ldy #$06               ; A0 06
            lda (L001E),Y          ; B1 1E
            tax                    ; AA
            lda #$FF               ; A9 FF
            sta L0100,X            ; 9D 00 01
            sta L0101,X            ; 9D 01 01
            lda L0059              ; A5 59
            sta L00D1              ; 85 D1
            lda L005A              ; A5 5A
            lsr A                  ; 4A
            ror L00D1              ; 66 D1
            lsr A                  ; 4A
            ror L00D1              ; 66 D1
            lsr A                  ; 4A
            ror L00D1              ; 66 D1
            lsr A                  ; 4A
            bne L4767              ; D0 0A
            lda L00D1              ; A5 D1
            ror A                  ; 6A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            sta L00B7              ; 85 B7
            bpl L4778              ; 10 11
L4767:      ldy #$0D               ; A0 0D
            lda (L001E),Y          ; B1 1E
            cmp L005A              ; C5 5A
            bcs L4778              ; B0 09
            lda #$20               ; A9 20
            and L0072              ; 25 72
            bne L4778              ; D0 03
            jmp L45AE              ; 4C AE 45
L4778:      ldx #$05               ; A2 05
L477A:      lda L0068,X            ; B5 68
            sta L0009,X            ; 95 09
            lda L0062,X            ; B5 62
            sta L000F,X            ; 95 0F
            lda L005C,X            ; B5 5C
            sta L0015,X            ; 95 15
            dex                    ; CA
            bpl L477A              ; 10 F1
            lda #$C5               ; A9 C5
            sta L00A0              ; 85 A0
            ldy #$10               ; A0 10
L478F:      lda L0009,Y            ; B9 09 00
            asl A                  ; 0A
            lda L000A,Y            ; B9 0A 00
            rol A                  ; 2A
            jsr L462B              ; 20 2B 46
            ldx L00A1              ; A6 A1
            stx L0009,Y            ; 96 09
            dey                    ; 88
            dey                    ; 88
            bpl L478F              ; 10 ED
            ldx #$08               ; A2 08
L47A4:      lda L0053,X            ; Galaxy data
            sta L007E,X            ; 95 7E
            dex                    ; CA
            bpl L47A4              ; 10 F9
            lda #$FF               ; A9 FF
            sta L00E1              ; 85 E1
            ldy #$0C               ; A0 0C
            lda L0072              ; A5 72
            and #$20               ; 29 20
            beq L47C9              ; F0 12
            lda (L001E),Y          ; B1 1E
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda #$FF               ; A9 FF
L47BE:      sta L00D2,X            ; 95 D2
            dex                    ; CA
            bpl L47BE              ; 10 FB
            inx                    ; E8
            stx L00B7              ; 86 B7
L47C6:      jmp L493C              ; 4C 3C 49
L47C9:      lda (L001E),Y          ; B1 1E
            beq L47C6              ; F0 F9
            sta L00B8              ; 85 B8
            ldy #$12               ; A0 12
            lda (L001E),Y          ; B1 1E
            tax                    ; AA
            lda L0085              ; A5 85
            tay                    ; A8
            beq L47E8              ; F0 0F
L47D9:      inx                    ; E8
            lsr L0082              ; 46 82
            ror L0081              ; 66 81
            lsr L007F              ; 46 7F
            ror L007E              ; 66 7E
            lsr A                  ; 4A
            ror L0084              ; 66 84
            tay                    ; A8
            bne L47D9              ; D0 F1
L47E8:      stx L00A5              ; 86 A5
            lda L0086              ; A5 86
            sta L0036              ; 85 36
            lda L007E              ; VDU stat
            sta L0031              ; Set x1
            lda L0080              ; A5 80
            sta L0032              ; Set y1
            lda L0081              ; A5 81
            sta L0033              ; 85 33
            lda L0083              ; A5 83
            sta L0034              ; 85 34
            lda L0084              ; A5 84
            sta L0035              ; 85 35
            jsr L466E              ; 20 6E 46
            lda L0037              ; A5 37
            sta L007E              ; VDU stat
            lda L0038              ; A5 38
            sta L0080              ; 85 80
            lda L0039              ; A5 39
            sta L0081              ; 85 81
            lda L003A              ; A5 3A
            sta L0083              ; 85 83
            lda L003B              ; A5 3B
            sta L0084              ; 85 84
            lda L003C              ; A5 3C
            sta L0086              ; 85 86
            ldy #$04               ; A0 04
            lda (L001E),Y          ; B1 1E
            clc                    ; 18
            adc L001E              ; 65 1E
            sta L0022              ; 85 22
            ldy #$11               ; A0 11
            lda (L001E),Y          ; B1 1E
            adc L001F              ; 65 1F
            sta L0023              ; 85 23
            ldy #$00               ; A0 00
L4830:      lda (L0022),Y          ; B1 22
            sta L0038              ; 85 38
            and #$1F               ; 29 1F
            cmp L00B7              ; C5 B7
            bcs L4849              ; B0 0F
            tya                    ; 98
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda #$FF               ; A9 FF
            sta L00D2,X            ; 95 D2
            tya                    ; 98
            adc #$04               ; 69 04
            tay                    ; A8
            jmp L4935              ; 4C 35 49
L4849:      lda L0038              ; A5 38
            asl A                  ; 0A
            sta L003A              ; 85 3A
            asl A                  ; 0A
            sta L003C              ; 85 3C
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L0037              ; 85 37
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L0039              ; 85 39
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L003B              ; 85 3B
            ldx L00A5              ; A6 A5
            cpx #$04               ; E0 04
            bcc L4889              ; 90 23
            lda L007E              ; VDU stat
            sta L0031              ; Set x1
            lda L0080              ; A5 80
            sta L0032              ; Set y1
            lda L0081              ; A5 81
            sta L0033              ; 85 33
            lda L0083              ; A5 83
            sta L0034              ; 85 34
            lda L0084              ; A5 84
            sta L0035              ; 85 35
            lda L0086              ; A5 86
            sta L0036              ; 85 36
            jmp L48E7              ; 4C E7 48
L4881:      lsr L007E              ; 46 7E
            lsr L0084              ; 46 84
            lsr L0081              ; 46 81
            ldx #$01               ; A2 01
L4889:      lda L0037              ; A5 37
            sta L0031              ; Set x1
            lda L0039              ; A5 39
            sta L0033              ; 85 33
            lda L003B              ; A5 3B
            dex                    ; CA
            bmi L489E              ; 30 08
L4896:      lsr L0031              ; Shift x1
            lsr L0033              ; 46 33
            lsr A                  ; 4A
            dex                    ; CA
            bpl L4896              ; 10 F8
L489E:      sta L00A1              ; 85 A1
            lda L003C              ; A5 3C
            sta L00A2              ; 85 A2
            lda L0084              ; A5 84
            sta L00A0              ; 85 A0
            lda L0086              ; A5 86
            jsr L464E              ; 20 4E 46
            bcs L4881              ; B0 D2
            sta L0035              ; 85 35
            lda L00A2              ; A5 A2
            sta L0036              ; 85 36
            lda L0031              ; Get x1
            sta L00A1              ; 85 A1
            lda L0038              ; A5 38
            sta L00A2              ; 85 A2
            lda L007E              ; VDU stat
            sta L00A0              ; 85 A0
            lda L0080              ; A5 80
            jsr L464E              ; 20 4E 46
            bcs L4881              ; B0 B9
            sta L0031              ; Set x1
            lda L00A2              ; A5 A2
            sta L0032              ; Set y1
            lda L0033              ; A5 33
            sta L00A1              ; 85 A1
            lda L003A              ; A5 3A
            sta L00A2              ; 85 A2
            lda L0081              ; A5 81
            sta L00A0              ; 85 A0
            lda L0083              ; A5 83
            jsr L464E              ; 20 4E 46
            bcs L4881              ; B0 A0
            sta L0033              ; 85 33
            lda L00A2              ; A5 A2
            sta L0034              ; 85 34
L48E7:      lda L0037              ; A5 37
            sta L00A0              ; 85 A0
            lda L0031              ; Get x1
            jsr L242A              ; 20 2A 24
            sta L00D1              ; 85 D1
            lda L0038              ; A5 38
            eor L0032              ; 45 32
            sta L00A2              ; 85 A2
            lda L0039              ; A5 39
            sta L00A0              ; 85 A0
            lda L0033              ; A5 33
            jsr L242A              ; 20 2A 24
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            sta L00A1              ; 85 A1
            lda L003A              ; A5 3A
            eor L0034              ; 45 34
            jsr L464E              ; 20 4E 46
            sta L00D1              ; 85 D1
            lda L003B              ; A5 3B
            sta L00A0              ; 85 A0
            lda L0035              ; A5 35
            jsr L242A              ; 20 2A 24
            sta L00A0              ; 85 A0
            lda L00D1              ; A5 D1
            sta L00A1              ; 85 A1
            lda L0036              ; A5 36
            eor L003C              ; 45 3C
            jsr L464E              ; 20 4E 46
            pha                    ; 48
            tya                    ; 98
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            pla                    ; 68
            bit L00A2              ; 24 A2
            bmi L4932              ; 30 02
            lda #$00               ; A9 00
L4932:      sta L00D2,X            ; 95 D2
            iny                    ; C8
L4935:      cpy L00B8              ; C4 B8
            bcs L493C              ; B0 03
            jmp L4830              ; 4C 30 48
L493C:      ldy L000B              ; A4 0B
            ldx L000C              ; A6 0C
            lda L000F              ; A5 0F
            sta L000B              ; 85 0B
            lda L0010              ; A5 10
            sta L000C              ; 85 0C
            sty L000F              ; 84 0F
            stx L0010              ; 86 10
            ldy L000D              ; A4 0D
            ldx L000E              ; A6 0E
            lda L0015              ; A5 15
            sta L000D              ; 85 0D
            lda L0016              ; A5 16
            sta L000E              ; 85 0E
            sty L0015              ; 84 15
            stx L0016              ; 86 16
            ldy L0013              ; A4 13
            ldx L0014              ; A6 14
            lda L0017              ; A5 17
            sta L0013              ; 85 13
            lda L0018              ; A5 18
            sta L0014              ; 85 14
            sty L0017              ; 84 17
            stx L0018              ; 86 18
            ldy #$08               ; A0 08
            lda (L001E),Y          ; B1 1E
            sta L00B8              ; 85 B8
            lda L001E              ; A5 1E
            clc                    ; 18
            adc #$14               ; 69 14
            sta L0022              ; 85 22
            lda L001F              ; A5 1F
            adc #$00               ; 69 00
            sta L0023              ; 85 23
            ldy #$00               ; A0 00
            sty L00B4              ; 84 B4
L4983:      sty L00A5              ; 84 A5
            lda (L0022),Y          ; B1 22
            sta L0031              ; Set x1
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L0033              ; 85 33
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L0035              ; 85 35
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L00D1              ; 85 D1
            and #$1F               ; 29 1F
            cmp L00B7              ; C5 B7
            bcc L49CC              ; 90 2E
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L001B              ; 85 1B
            and #$0F               ; 29 0F
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            bne L49CF              ; D0 25
            lda L001B              ; A5 1B
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            bne L49CF              ; D0 1A
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L001B              ; 85 1B
            and #$0F               ; 29 0F
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            bne L49CF              ; D0 0E
            lda L001B              ; A5 1B
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            bne L49CF              ; D0 03
L49CC:      jmp L4B44              ; 4C 44 4B
L49CF:      lda L00D1              ; A5 D1
            sta L0032              ; Set y1
            asl A                  ; 0A
            sta L0034              ; 85 34
            asl A                  ; 0A
            sta L0036              ; 85 36
            jsr L466E              ; 20 6E 46
            lda L0055              ; A5 55
            sta L0033              ; 85 33
            eor L0038              ; 45 38
            bmi L49F4              ; 30 10
            clc                    ; 18
            lda L0037              ; A5 37
            adc L0053              ; Galaxy data
            sta L0031              ; Set x1
            lda L0054              ; A5 54
            adc #$00               ; 69 00
            sta L0032              ; Set y1
            jmp L4A17              ; 4C 17 4A

L49F4:      lda L0053              ; Galaxy data
            sec                    ; 38
            sbc L0037              ; E5 37
            sta L0031              ; Set x1

            lda L0054              ; A5 54
            sbc #$00               ; E9 00
            sta L0032              ; Set y1
            bcs L4A17              ; B0 14
            eor #$FF               ; 49 FF
            sta L0032              ; Set y1

            lda #$01               ; A9 01
            sbc L0031              ; Substract x1
            sta L0031              ; Set x1
            bcc L4A11              ; 90 02
            inc L0032              ; E6 32

L4A11:      lda L0033              ; A5 33
            eor #$80               ; 49 80
            sta L0033              ; 85 33

L4A17:      lda L0058              ; A5 58
            sta L0036              ; 85 36
            eor L003A              ; 45 3A
            bmi L4A2F              ; 30 10
            clc                    ; 18
            lda L0039              ; A5 39
            adc L0056              ; 65 56
            sta L0034              ; 85 34

            lda L0057              ; A5 57
            adc #$00               ; 69 00
            sta L0035              ; 85 35
            jmp L4A54              ; 4C 54 4A
L4A2F:      lda L0056              ; A5 56
            sec                    ; 38
            sbc L0039              ; E5 39
            sta L0034              ; 85 34
            lda L0057              ; A5 57
            sbc #$00               ; E9 00
            sta L0035              ; 85 35
            bcs L4A54              ; B0 16
            eor #$FF               ; 49 FF
            sta L0035              ; 85 35
            lda L0034              ; A5 34
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
            sta L0034              ; 85 34
            lda L0036              ; A5 36
            eor #$80               ; 49 80
            sta L0036              ; 85 36
            bcc L4A54              ; 90 02
            inc L0035              ; E6 35
L4A54:      lda L003C              ; A5 3C
            bmi L4AA2              ; 30 4A
            lda L003B              ; A5 3B
            clc                    ; 18
            adc L0059              ; 65 59
            sta L00D1              ; 85 D1
            lda L005A              ; A5 5A
            adc #$00               ; 69 00
            sta L008F              ; 85 8F
            jmp L4AC1              ; 4C C1 4A
L4A68:      ldx L00A0              ; A6 A0
            beq L4A88              ; F0 1C
            ldx #$00               ; A2 00
L4A6E:      lsr A                  ; 4A
            inx                    ; E8
            cmp L00A0              ; C5 A0
            bcs L4A6E              ; B0 FA
            stx L00A2              ; 86 A2
            jsr L462B              ; 20 2B 46
            ldx L00A2              ; A6 A2
            lda L00A1              ; A5 A1
L4A7D:      asl A                  ; 0A
            rol L008F              ; 26 8F
            bmi L4A88              ; 30 06
            dex                    ; CA
            bne L4A7D              ; D0 F8
            sta L00A1              ; 85 A1
            rts                    ; 60

L4A88:      lda #$32               ; A9 32
            sta L00A1              ; 85 A1
            sta L008F              ; 85 8F
            rts                    ; 60

L4A8F:      lda #$80               ; A9 80
            sec                    ; 38
            sbc L00A1              ; E5 A1
            sta L0100,X            ; 9D 00 01
            inx                    ; E8
            lda #$00               ; A9 00
            sbc L008F              ; E5 8F
            sta L0100,X            ; 9D 00 01
            jmp L4B01              ; 4C 01 4B

L4AA2:      lda L0059              ; A5 59
            sec                    ; 38
            sbc L003B              ; E5 3B
            sta L00D1              ; 85 D1
            lda L005A              ; A5 5A
            sbc #$00               ; E9 00
            sta L008F              ; 85 8F
            bcc L4AB9              ; 90 08
            bne L4AC1              ; D0 0E
            lda L00D1              ; A5 D1
            cmp #$04               ; C9 04
            bcs L4AC1              ; B0 08
L4AB9:      lda #$00               ; A9 00
            sta L008F              ; 85 8F
            lda #$04               ; A9 04
            sta L00D1              ; 85 D1
L4AC1:      lda L008F              ; A5 8F
            ora L0032              ; 05 32
            ora L0035              ; 05 35
            beq L4AD8              ; F0 0F
            lsr L0032              ; 46 32
            ror L0031              ; Rotate x1
            lsr L0035              ; 46 35
            ror L0034              ; 66 34
            lsr L008F              ; 46 8F
            ror L00D1              ; 66 D1
            jmp L4AC1              ; 4C C1 4A
L4AD8:      lda L00D1              ; A5 D1
            sta L00A0              ; 85 A0
            lda L0031              ; Get x1
            cmp L00A0              ; C5 A0
            bcc L4AE8              ; 90 06
            jsr L4A68              ; 20 68 4A
            jmp L4AEB              ; 4C EB 4A
L4AE8:      jsr L462B              ; 20 2B 46
L4AEB:      ldx L00B4              ; A6 B4
            lda L0033              ; A5 33
            bmi L4A8F              ; 30 9E
            lda L00A1              ; A5 A1
            clc                    ; 18
            adc #$80               ; 69 80
            sta L0100,X            ; 9D 00 01
            inx                    ; E8
            lda L008F              ; A5 8F
            adc #$00               ; 69 00
            sta L0100,X            ; 9D 00 01
L4B01:      txa                    ; 8A
            pha                    ; 48
            lda #$00               ; A9 00
            sta L008F              ; 85 8F
            lda L00D1              ; A5 D1
            sta L00A0              ; 85 A0
            lda L0034              ; A5 34
            cmp L00A0              ; C5 A0
            bcc L4B2A              ; 90 19
            jsr L4A68              ; 20 68 4A
            jmp L4B2D              ; 4C 2D 4B
L4B17:
;            lda #$60               ; A9 60
	lda #$43		; Init pos new ship

            clc                    ; 18
            adc L00A1              ; 65 A1
            sta L0100,X            ; 9D 00 01
            inx                    ; E8
            lda #$00               ; A9 00
            adc L008F              ; 65 8F
            sta L0100,X            ; 9D 00 01
            jmp L4B44              ; 4C 44 4B
L4B2A:      jsr L462B              ; 20 2B 46
L4B2D:      pla                    ; 68
            tax                    ; AA
            inx                    ; E8
            lda L0036              ; A5 36
            bmi L4B17              ; 30 E3

;            lda #$60               ; A9 60
	lda #$43		; Init pos new ship

            sec                    ; 38
            sbc L00A1              ; E5 A1
            sta L0100,X            ; 9D 00 01
            inx                    ; E8
            lda #$00               ; A9 00
            sbc L008F              ; E5 8F
            sta L0100,X            ; 9D 00 01
L4B44:      clc                    ; 18
            lda L00B4              ; A5 B4
            adc #$04               ; 69 04
            sta L00B4              ; 85 B4
            lda L00A5              ; A5 A5
            adc #$06               ; 69 06
            tay                    ; A8
            bcs L4B59              ; B0 07
            cmp L00B8              ; C5 B8
            bcs L4B59              ; B0 03
            jmp L4983              ; 4C 83 49
L4B59:      lda L0072              ; A5 72
            and #$20               ; 29 20
            beq L4B68              ; F0 09
            lda L0072              ; A5 72
            ora #$08               ; 09 08
            sta L0072              ; 85 72
            jmp L35A1              ; 4C A1 35
L4B68:      lda #$08               ; A9 08
            bit L0072              ; 24 72
            beq L4B73              ; F0 05
            jsr L4C84              ; 20 84 4C
            lda #$08               ; A9 08
L4B73:      ora L0072              ; 05 72
            sta L0072              ; 85 72
            ldy #$09               ; A0 09
            lda (L001E),Y          ; B1 1E
            sta L00B8              ; 85 B8
            ldy #$00               ; A0 00
            sty L008F              ; 84 8F
            sty L00A5              ; 84 A5
            inc L008F              ; E6 8F
            bit L0072              ; 24 72
            bvc L4BDD              ; 50 54
            lda L0072              ; A5 72
            and #$BF               ; 29 BF
            sta L0072              ; 85 72
            ldy #$06               ; A0 06
            lda (L001E),Y          ; B1 1E
            tay                    ; A8
            ldx L0100,Y            ; BE 00 01
            stx L0031              ; Set x1
            inx                    ; E8
            beq L4BDD              ; F0 41
            ldx L0101,Y            ; BE 01 01
            stx L0032              ; Set y1
            inx                    ; E8
            beq L4BDD              ; F0 39
            ldx L0102,Y            ; BE 02 01
            stx L0033              ; 86 33
            ldx L0103,Y            ; BE 03 01
            stx L0034              ; 86 34
            lda #$00               ; A9 00
            sta L0035              ; 85 35
            sta L0036              ; 85 36
            sta L0038              ; 85 38
            lda L0059              ; A5 59
            sta L0037              ; 85 37
            lda L0055              ; A5 55
            bpl L4BC0              ; 10 02
            dec L0035              ; C6 35
L4BC0:      jsr L4DAC              ; 20 AC 4D
            bcs L4BDD              ; B0 18
            ldy L008F              ; A4 8F
            lda L0031              ; Get x1
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0032              ; Get y1
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0033              ; A5 33
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0034              ; A5 34
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            sty L008F              ; 84 8F
L4BDD:      ldy #$03               ; A0 03
            clc                    ; 18
            lda (L001E),Y          ; B1 1E
            adc L001E              ; 65 1E
            sta L0022              ; 85 22
            ldy #$10               ; A0 10
            lda (L001E),Y          ; B1 1E
            adc L001F              ; 65 1F
            sta L0023              ; 85 23
            ldy #$05               ; A0 05
            lda (L001E),Y          ; B1 1E
            sta L0006              ; 85 06
            ldy L00A5              ; A4 A5
L4BF6:      lda (L0022),Y          ; B1 22
            cmp L00B7              ; C5 B7
            bcc L4C67              ; 90 6B
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            iny                    ; C8
            sta L001B              ; 85 1B
            and #$0F               ; 29 0F
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            bne L4C14              ; D0 0B
            lda L001B              ; A5 1B
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tax                    ; AA
            lda L00D2,X            ; B5 D2
            beq L4C67              ; F0 53
L4C14:      lda (L0022),Y          ; B1 22
            tax                    ; AA
            iny                    ; C8
            lda (L0022),Y          ; B1 22
            sta L00A0              ; 85 A0
            lda L0101,X            ; BD 01 01
            sta L0032              ; Set y1
            lda L0100,X            ; BD 00 01
            sta L0031              ; Set x1
            lda L0102,X            ; BD 02 01
            sta L0033              ; 85 33
            lda L0103,X            ; BD 03 01
            sta L0034              ; 85 34
            ldx L00A0              ; A6 A0
            lda L0100,X            ; BD 00 01
            sta L0035              ; 85 35
            lda L0103,X            ; BD 03 01
            sta L0038              ; 85 38
            lda L0102,X            ; BD 02 01
            sta L0037              ; 85 37
            lda L0101,X            ; BD 01 01
            sta L0036              ; 85 36
            jsr L4DB2              ; 20 B2 4D
            bcs L4C67              ; B0 1C
            ldy L008F              ; A4 8F
            lda L0031              ; Get x1
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0032              ; Get y1
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0033              ; A5 33
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            lda L0034              ; A5 34
            sta (L0074),Y          ; 91 74
            iny                    ; C8
            sty L008F              ; 84 8F
            cpy L0006              ; C4 06
            bcs L4C7E              ; B0 17
L4C67:      inc L00A5              ; E6 A5
            ldy L00A5              ; A4 A5
            cpy L00B8              ; C4 B8
            bcs L4C7E              ; B0 0F
            ldy #$00               ; A0 00
            lda L0022              ; A5 22
            adc #$04               ; 69 04
            sta L0022              ; 85 22
            bcc L4C7B              ; 90 02
            inc L0023              ; E6 23
L4C7B:      jmp L4BF6              ; 4C F6 4B

L4C7E:      lda L008F              ; A5 8F
L4C80:      ldy #$00               ; A0 00
            sta (L0074),Y          ; 91 74
L4C84:      ldy #$00               ; A0 00
            lda (L0074),Y          ; B1 74
            sta L00B8              ; 85 B8
            cmp #$04               ; C9 04
            bcc L4CAA              ; 90 1C
            iny                    ; C8
L4C8F:      lda (L0074),Y          ; B1 74
            sta L0031              ; Set x1
            iny                    ; C8
            lda (L0074),Y          ; B1 74
            sta L0032              ; Set y1
            iny                    ; C8
            lda (L0074),Y          ; B1 74
            sta L0033              ; 85 33
            iny                    ; C8
            lda (L0074),Y          ; B1 74
            sta L0034              ; 85 34
            jsr L1621              ; Plot line

            iny                    ; C8
            cpy L00B8              ; C4 B8
            bcc L4C8F              ; 90 E5
L4CAA:      rts                    ; 60

L4CAB:      lda L0032              ; Get y1
            bpl L4CC6              ; 10 17
            sta L00A2              ; 85 A2
            jsr L4D25              ; 20 25 4D
            txa                    ; 8A
            clc                    ; 18
            adc L0033              ; 65 33
            sta L0033              ; 85 33
            tya                    ; 98
            adc L0034              ; 65 34
            sta L0034              ; 85 34
            lda #$00               ; A9 00
            sta L0031              ; Set x1
            sta L0032              ; Set y1
            tax                    ; AA
L4CC6:      beq L4CE1              ; F0 19
            sta L00A2              ; 85 A2
            dec L00A2              ; C6 A2
            jsr L4D25              ; 20 25 4D
            txa                    ; 8A
            clc                    ; 18
            adc L0033              ; 65 33
            sta L0033              ; 85 33
            tya                    ; 98
            adc L0034              ; 65 34
            sta L0034              ; 85 34
            ldx #$FF               ; A2 FF
            stx L0031              ; Set x1
            inx                    ; E8
            stx L0032              ; Set y1
L4CE1:      lda L0034              ; A5 34
            bpl L4CFF              ; 10 1A
            sta L00A2              ; 85 A2
            lda L0033              ; A5 33
            sta L00A1              ; 85 A1
            jsr L4D54              ; 20 54 4D
            txa                    ; 8A
            clc                    ; 18
            adc L0031              ; Add x1
            sta L0031              ; Set x1
            tya                    ; 98
            adc L0032              ; 65 32
            sta L0032              ; Set y1
            lda #$00               ; A9 00
            sta L0033              ; 85 33
            sta L0034              ; 85 34
L4CFF:      lda L0033              ; A5 33
            sec                    ; 38
            sbc #$C0               ; E9 C0
            sta L00A1              ; 85 A1
            lda L0034              ; A5 34
            sbc #$00               ; E9 00
            sta L00A2              ; 85 A2
            bcc L4D24              ; 90 16
            jsr L4D54              ; 20 54 4D
            txa                    ; 8A
            clc                    ; 18
            adc L0031              ; Add x1
            sta L0031              ; Set x1
            tya                    ; 98
            adc L0032              ; 65 32
            sta L0032              ; Set y1

;            lda #$BF               ; CHAR8x8
            lda #$86               ; CHAR8x6

            sta L0033              ; 85 33
            lda #$00               ; A9 00
            sta L0034              ; 85 34
L4D24:      rts                    ; 60

L4D25:      lda L0031              ; Get x1
            sta L00A1              ; 85 A1
            jsr L4D90              ; 20 90 4D
            pha                    ; 48
            ldx L00D1              ; A6 D1
            bne L4D5C              ; D0 2B
L4D31:      lda #$00               ; A9 00
            tax                    ; AA
            tay                    ; A8
            lsr L00A2              ; 46 A2
            ror L00A1              ; 66 A1
            asl L00A0              ; 06 A0
            bcc L4D46              ; 90 09
L4D3D:      txa                    ; 8A
            clc                    ; 18
            adc L00A1              ; 65 A1
            tax                    ; AA
            tya                    ; 98
            adc L00A2              ; 65 A2
            tay                    ; A8
L4D46:      lsr L00A2              ; 46 A2
            ror L00A1              ; 66 A1
            asl L00A0              ; 06 A0
            bcs L4D3D              ; B0 EF
            bne L4D46              ; D0 F6
            pla                    ; 68
            bpl L4D83              ; 10 30
            rts                    ; 60

L4D54:      jsr L4D90              ; 20 90 4D
            pha                    ; 48
            ldx L00D1              ; A6 D1
            bne L4D31              ; D0 D5
L4D5C:      lda #$FF               ; A9 FF
            tay                    ; A8
            asl A                  ; 0A
            tax                    ; AA
L4D61:      asl L00A1              ; 06 A1
            rol L00A2              ; 26 A2
            lda L00A2              ; A5 A2
            bcs L4D6D              ; B0 04
            cmp L00A0              ; C5 A0
            bcc L4D78              ; 90 0B
L4D6D:      sbc L00A0              ; E5 A0
            sta L00A2              ; 85 A2
            lda L00A1              ; A5 A1
            sbc #$00               ; E9 00
            sta L00A1              ; 85 A1
            sec                    ; 38
L4D78:      txa                    ; 8A
            rol A                  ; 2A
            tax                    ; AA
            tya                    ; 98
            rol A                  ; 2A
            tay                    ; A8
            bcs L4D61              ; B0 E1
            pla                    ; 68
            bmi L4D8F              ; 30 0C
L4D83:      txa                    ; 8A
            eor #$FF               ; 49 FF
            adc #$01               ; 69 01
            tax                    ; AA
            tya                    ; 98
            eor #$FF               ; 49 FF
            adc #$00               ; 69 00
            tay                    ; A8
L4D8F:      rts                    ; 60

L4D90:      ldx L0039              ; A6 39
            stx L00A0              ; 86 A0
            lda L00A2              ; A5 A2
            bpl L4DA9              ; 10 11
            lda #$00               ; A9 00
            sec                    ; 38
            sbc L00A1              ; E5 A1
            sta L00A1              ; 85 A1
            lda L00A2              ; A5 A2
            pha                    ; 48
            eor #$FF               ; 49 FF
            adc #$00               ; 69 00
            sta L00A2              ; 85 A2
            pla                    ; 68
L4DA9:      eor L003A              ; 45 3A
            rts                    ; 60

L4DAC:      lda #$00               ; A9 00
            sta L00B1              ; 85 B1
            lda L0036              ; A5 36
L4DB2:      ldx #$BF               ; A2 BF
            ora L0038              ; 05 38
            bne L4DBE              ; D0 06
            cpx L0037              ; E4 37
            bcc L4DBE              ; 90 02
            ldx #$00               ; A2 00
L4DBE:      stx L00A8              ; 86 A8
            lda L0032              ; Get y1
            ora L0034              ; 05 34
            bne L4DE2              ; D0 1C

;            lda #$BF               ; CHAR8x8
            lda #$86               ; CHAR8x6
            cmp L0033              ; C5 33
            bcc L4DE2              ; 90 16
            lda L00A8              ; A5 A8
            bne L4DE0              ; D0 10
L4DD0:      lda L0033              ; A5 33
            sta L0032              ; Set y1
            lda L0035              ; A5 35
            sta L0033              ; 85 33
            lda L0037              ; A5 37
            sta L0034              ; 85 34
            clc                    ; 18
            rts                    ; 60

L4DDE:      sec                    ; 38
            rts                    ; 60

L4DE0:      lsr L00A8              ; 46 A8
L4DE2:      lda L00A8              ; A5 A8
            bpl L4E15              ; 10 2F
            lda L0032              ; Get y1
            and L0036              ; 25 36
            bmi L4DDE              ; 30 F2
            lda L0034              ; A5 34
            and L0038              ; 25 38
            bmi L4DDE              ; 30 EC
            ldx L0032              ; Get y1
            dex                    ; CA
            txa                    ; 8A
            ldx L0036              ; A6 36
            dex                    ; CA
            stx L0039              ; 86 39
            ora L0039              ; 05 39
            bpl L4DDE              ; 10 DF
            lda L0033              ; A5 33
            cmp #$C0               ; C9 C0
            lda L0034              ; A5 34
            sbc #$00               ; E9 00
            sta L0039              ; 85 39
            lda L0037              ; A5 37
            cmp #$C0               ; C9 C0
            lda L0038              ; A5 38
            sbc #$00               ; E9 00
            ora L0039              ; 05 39
            bpl L4DDE              ; 10 C9
L4E15:      tya                    ; 98
            pha                    ; 48
            lda L0035              ; A5 35
            sec                    ; 38
            sbc L0031              ; Substract x1
            sta L0039              ; 85 39
            lda L0036              ; A5 36
            sbc L0032              ; E5 32
            sta L003A              ; 85 3A
            lda L0037              ; A5 37
            sec                    ; 38
            sbc L0033              ; E5 33
            sta L003B              ; 85 3B
            lda L0038              ; A5 38
            sbc L0034              ; E5 34
            sta L003C              ; 85 3C
            eor L003A              ; 45 3A
            sta L00A2              ; 85 A2
            lda L003C              ; A5 3C
            bpl L4E46              ; 10 0D
            lda #$00               ; A9 00
            sec                    ; 38
            sbc L003B              ; E5 3B
            sta L003B              ; 85 3B
            lda #$00               ; A9 00
            sbc L003C              ; E5 3C
            sta L003C              ; 85 3C
L4E46:      lda L003A              ; A5 3A
            bpl L4E55              ; 10 0B
            sec                    ; 38
            lda #$00               ; A9 00
            sbc L0039              ; E5 39
            sta L0039              ; 85 39
            lda #$00               ; A9 00
            sbc L003A              ; E5 3A
L4E55:      tax                    ; AA
            bne L4E5C              ; D0 04
            ldx L003C              ; A6 3C
            beq L4E66              ; F0 0A
L4E5C:      lsr A                  ; 4A
            ror L0039              ; 66 39
            lsr L003C              ; 46 3C
            ror L003B              ; 66 3B
            jmp L4E55              ; 4C 55 4E
L4E66:      stx L00D1              ; 86 D1
            lda L0039              ; A5 39
            cmp L003B              ; C5 3B
            bcc L4E78              ; 90 0A
            sta L00A0              ; 85 A0
            lda L003B              ; A5 3B
            jsr L462B              ; 20 2B 46
            jmp L4E83              ; 4C 83 4E
L4E78:      lda L003B              ; A5 3B
            sta L00A0              ; 85 A0
            lda L0039              ; A5 39
            jsr L462B              ; 20 2B 46
            dec L00D1              ; C6 D1
L4E83:      lda L00A1              ; A5 A1
            sta L0039              ; 85 39
            lda L00A2              ; A5 A2
            sta L003A              ; 85 3A
            lda L00A8              ; A5 A8
            beq L4E91              ; F0 02
            bpl L4EA4              ; 10 13
L4E91:      jsr L4CAB              ; 20 AB 4C
            lda L00A8              ; A5 A8
            bpl L4EC9              ; 10 31
            lda L0032              ; Get y1
            ora L0034              ; 05 34
            bne L4ECE              ; D0 30
            lda L0033              ; A5 33
            cmp #$C0               ; C9 C0
            bcs L4ECE              ; B0 2A
L4EA4:      ldx L0031              ; Get x1
            lda L0035              ; A5 35
            sta L0031              ; Set x1
            stx L0035              ; 86 35
            lda L0036              ; A5 36
            ldx L0032              ; Get y1
            stx L0036              ; 86 36
            sta L0032              ; Set y1
            ldx L0033              ; A6 33
            lda L0037              ; A5 37
            sta L0033              ; 85 33
            stx L0037              ; 86 37
            lda L0038              ; A5 38
            ldx L0034              ; A6 34
            stx L0038              ; 86 38
            sta L0034              ; 85 34
            jsr L4CAB              ; 20 AB 4C
            dec L00B1              ; C6 B1
L4EC9:      pla                    ; 68
            tay                    ; A8
            jmp L4DD0              ; 4C D0 4D

L4ECE:      pla                    ; 68
            tay                    ; A8
            sec                    ; 38
            rts                    ; 60

;---------------------------------------------
; END OF ORIGINAL BRABEN CODE
;---------------------------------------------

;---------------------------------------------
; 3D Object data pointers
;---------------------------------------------
L4ED2:      .byte $8C
L4ED3:      .byte $2C


            .word L4EEA,L4F92,L506C,L519A
            .word L528C,L528C,L5414,L5530
            .word L562E,L5704,L57AC

;---------------------------------------------
; Object 1
;---------------------------------------------

L4EEA:
            .byte $00
            .byte $81,$10,$50,$8C,$3D,$00,$1E,$3C
            .byte $0F,$32,$00,$1C,$14,$46,$25,$00
            .byte $00,$02,$10,$20,$00,$24,$9F,$10
            .byte $54,$20,$00,$24,$1F,$20,$65,$40
            .byte $00,$1C,$3F,$32,$66,$40,$00,$1C
            .byte $BF,$31,$44,$00,$10,$1C,$3F,$10
            .byte $32,$00,$10,$1C,$7F,$43,$65,$0C
            .byte $06,$1C,$AF,$33,$33,$0C,$06,$1C
            .byte $2F,$33,$33,$0C,$06,$1C,$6C,$33
            .byte $33,$0C,$06,$1C,$EC,$33,$33,$1F
            .byte $50,$00,$04,$1F,$62,$04,$08,$1F
            .byte $20,$04,$10,$1F,$10,$00,$10,$1F
            .byte $41,$00,$0C,$1F,$31,$0C,$10,$1F
            .byte $32,$08,$10,$1F,$43,$0C,$14,$1F
            .byte $63,$08,$14,$1F,$65,$04,$14,$1F
            .byte $54,$00,$14,$0F,$33,$18,$1C,$0C
            .byte $33,$1C,$20,$0C,$33,$18,$24,$0C
            .byte $33,$20,$24,$1F,$00,$20,$08,$9F
            .byte $0C,$2F,$06,$1F,$0C,$2F,$06,$3F
            .byte $00,$00,$70,$DF,$0C,$2F,$06,$5F
            .byte $00,$20,$08,$5F,$0C,$2F,$06

;---------------------------------------------
; Object 2
;---------------------------------------------

L4F92:
            .byte $00
            .byte $F9,$15,$6E,$BE,$4D,$00,$2A,$5A
            .byte $14,$00,$00,$1C,$17,$78,$20,$00
            .byte $00,$01,$11,$00,$00,$48,$1F,$21
            .byte $43,$00,$10,$18,$1E,$10,$22,$00
            .byte $10,$18,$5E,$43,$55,$30,$00,$18
            .byte $3F,$42,$66,$30,$00,$18,$BF,$31
            .byte $66,$18,$10,$18,$7E,$54,$66,$18
            .byte $10,$18,$FE,$35,$66,$18,$10,$18
            .byte $3F,$20,$66,$18,$10,$18,$BF,$10
            .byte $66,$20,$00,$18,$B3,$66,$66,$20
            .byte $00,$18,$33,$66,$66,$08,$08,$18
            .byte $33,$66,$66,$08,$08,$18,$B3,$66
            .byte $66,$08,$08,$18,$F2,$66,$66,$08
            .byte $08,$18,$72,$66,$66,$1F,$42,$00
            .byte $0C,$1E,$21,$00,$04,$1E,$43,$00
            .byte $08,$1F,$31,$00,$10,$1E,$20,$04
            .byte $1C,$1E,$10,$04,$20,$1E,$54,$08
            .byte $14,$1E,$53,$08,$18,$1F,$60,$1C
            .byte $20,$1E,$65,$14,$18,$1F,$61,$10
            .byte $20,$1E,$63,$10,$18,$1F,$62,$0C
            .byte $1C,$1E,$46,$0C,$14,$13,$66,$24
            .byte $30,$12,$66,$24,$34,$13,$66,$28
            .byte $2C,$12,$66,$28,$38,$10,$66,$2C
            .byte $38,$10,$66,$30,$34,$1F,$00,$20
            .byte $00,$9F,$16,$21,$0B,$1F,$16,$21
            .byte $0B,$DF,$16,$21,$0B,$5F,$16,$21
            .byte $0B,$5F,$00,$20,$00,$3F,$00,$00
            .byte $30

;---------------------------------------------
; Object 3
;---------------------------------------------

L506C:
            .byte $01,$24,$13,$AA,$1A,$5D,$00
            .byte $22,$96,$1C,$96,$00,$14,$19,$5A
            .byte $1E,$00,$01,$02,$12,$00,$00,$40
            .byte $1F,$10,$32,$40,$08,$20,$FF,$20
            .byte $44,$20,$08,$20,$BE,$21,$44,$20
            .byte $08,$20,$3E,$31,$44,$40,$08,$20
            .byte $7F,$30,$44,$04,$04,$10,$8E,$11
            .byte $11,$04,$04,$10,$0E,$11,$11,$08
            .byte $03,$1C,$0D,$11,$11,$08,$03,$1C
            .byte $8D,$11,$11,$14,$04,$10,$D4,$00
            .byte $00,$14,$04,$10,$54,$00,$00,$18
            .byte $07,$14,$F4,$00,$00,$10,$07,$14
            .byte $F0,$00,$00,$10,$07,$14,$70,$00
            .byte $00,$18,$07,$14,$74,$00,$00,$08
            .byte $04,$20,$AD,$44,$44,$08,$04,$20
            .byte $2D,$44,$44,$08,$04,$20,$6E,$44
            .byte $44,$08,$04,$20,$EE,$44,$44,$20
            .byte $04,$20,$A7,$44,$44,$20,$04,$20
            .byte $27,$44,$44,$24,$04,$20,$67,$44
            .byte $44,$24,$04,$20,$E7,$44,$44,$26
            .byte $00,$20,$A5,$44,$44,$26,$00,$20
            .byte $25,$44,$44,$1F,$20,$00,$04,$1F
            .byte $30,$00,$10,$1F,$40,$04,$10,$1E
            .byte $42,$04,$08,$1E,$41,$08,$0C,$1E
            .byte $43,$0C,$10,$0E,$11,$14,$18,$0C
            .byte $11,$18,$1C,$0D,$11,$1C,$20,$0C
            .byte $11,$14,$20,$14,$00,$24,$2C,$10
            .byte $00,$24,$30,$10,$00,$28,$34,$14
            .byte $00,$28,$38,$0E,$00,$34,$38,$0E
            .byte $00,$2C,$30,$0D,$44,$3C,$40,$0E
            .byte $44,$44,$48,$0C,$44,$3C,$48,$0C
            .byte $44,$40,$44,$07,$44,$50,$54,$05
            .byte $44,$50,$60,$05,$44,$54,$60,$07
            .byte $44,$4C,$58,$05,$44,$4C,$5C,$05
            .byte $44,$58,$5C,$1E,$21,$00,$08,$1E
            .byte $31,$00,$0C,$5E,$00,$18,$02,$1E
            .byte $00,$18,$02,$9E,$20,$40,$10,$1E
            .byte $20,$40,$10,$3E,$00,$00,$7F

;---------------------------------------------
; Object 4
;---------------------------------------------

L519A:
            .byte $03
            .byte $40,$38,$56,$BE,$55,$00,$2E,$42
            .byte $1A,$C8,$00,$34,$28,$FA,$14,$00
            .byte $00,$00,$1B,$00,$00,$E0,$1F,$10
            .byte $32,$00,$30,$30,$1E,$10,$54,$60
            .byte $00,$10,$3F,$FF,$FF,$60,$00,$10
            .byte $BF,$FF,$FF,$00,$30,$20,$3E,$54
            .byte $98,$00,$18,$70,$3F,$89,$CC,$30
            .byte $00,$70,$BF,$B8,$CC,$30,$00,$70
            .byte $3F,$A9,$CC,$00,$30,$30,$5E,$32
            .byte $76,$00,$30,$20,$7E,$76,$BA,$00
            .byte $18,$70,$7E,$BA,$CC,$1E,$32,$00
            .byte $20,$1F,$20,$00,$0C,$1F,$31,$00
            .byte $08,$1E,$10,$00,$04,$1D,$59,$08
            .byte $10,$1D,$51,$04,$08,$1D,$37,$08
            .byte $20,$1D,$40,$04,$0C,$1D,$62,$0C
            .byte $20,$1D,$A7,$08,$24,$1D,$84,$0C
            .byte $10,$1D,$B6,$0C,$24,$05,$88,$0C
            .byte $14,$05,$BB,$0C,$28,$05,$99,$08
            .byte $14,$05,$AA,$08,$28,$1F,$A9,$08
            .byte $1C,$1F,$B8,$0C,$18,$1F,$C8,$14
            .byte $18,$1F,$C9,$14,$1C,$1D,$AC,$1C
            .byte $28,$1D,$CB,$18,$28,$1D,$98,$10
            .byte $14,$1D,$BA,$24,$28,$1D,$54,$04
            .byte $10,$1D,$76,$20,$24,$9E,$1B,$28
            .byte $0B,$1E,$1B,$28,$0B,$DE,$1B,$28
            .byte $0B,$5E,$1B,$28,$0B,$9E,$13,$26
            .byte $00,$1E,$13,$26,$00,$DE,$13,$26
            .byte $00,$5E,$13,$26,$00,$BE,$19,$25
            .byte $0B,$3E,$19,$25,$0B,$7E,$19,$25
            .byte $0B,$FE,$19,$25,$0B,$3E,$00,$00
            .byte $70

;---------------------------------------------
; Object 5
;---------------------------------------------

L528C:
            .byte $03,$41,$23,$BC,$54,$99,$54
            .byte $2A,$A8,$26,$00,$00,$34,$32,$96
            .byte $1C,$00,$01,$01,$13,$20,$00,$4C
            .byte $1F,$FF,$FF,$20,$00,$4C,$9F,$FF
            .byte $FF,$00,$1A,$18,$1F,$FF,$FF,$78
            .byte $03,$08,$FF,$73,$AA,$78,$03,$08
            .byte $7F,$84,$CC,$58,$10,$28,$BF,$FF
            .byte $FF,$58,$10,$28,$3F,$FF,$FF,$80
            .byte $08,$28,$7F,$98,$CC,$80,$08,$28
            .byte $FF,$97,$AA,$00,$1A,$28,$3F,$65
            .byte $99,$20,$18,$28,$FF,$A9,$BB,$20
            .byte $18,$28,$7F,$B9,$CC,$24,$08,$28
            .byte $B4,$99,$99,$08,$0C,$28,$B4,$99
            .byte $99,$08,$0C,$28,$34,$99,$99,$24
            .byte $08,$28,$34,$99,$99,$24,$0C,$28
            .byte $74,$99,$99,$08,$10,$28,$74,$99
            .byte $99,$08,$10,$28,$F4,$99,$99,$24
            .byte $0C,$28,$F4,$99,$99,$00,$00,$4C
            .byte $06,$B0,$BB,$00,$00,$5A,$1F,$B0
            .byte $BB,$50,$06,$28,$E8,$99,$99,$50
            .byte $06,$28,$A8,$99,$99,$58,$00,$28
            .byte $A6,$99,$99,$50,$06,$28,$28,$99
            .byte $99,$58,$00,$28,$26,$99,$99,$50
            .byte $06,$28,$68,$99,$99,$1F,$B0,$00
            .byte $04,$1F,$C4,$00,$10,$1F,$A3,$04
            .byte $0C,$1F,$A7,$0C,$20,$1F,$C8,$10
            .byte $1C,$1F,$98,$18,$1C,$1F,$96,$18
            .byte $24,$1F,$95,$14,$24,$1F,$97,$14
            .byte $20,$1F,$51,$08,$14,$1F,$62,$08
            .byte $18,$1F,$73,$0C,$14,$1F,$84,$10
            .byte $18,$1F,$10,$04,$08,$1F,$20,$00
            .byte $08,$1F,$A9,$20,$28,$1F,$B9,$28
            .byte $2C,$1F,$C9,$1C,$2C,$1F,$BA,$04
            .byte $28,$1F,$CB,$00,$2C,$1D,$31,$04
            .byte $14,$1D,$42,$00,$18,$06,$B0,$50
            .byte $54,$14,$99,$30,$34,$14,$99,$48
            .byte $4C,$14,$99,$38,$3C,$14,$99,$40
            .byte $44,$13,$99,$3C,$40,$11,$99,$38
            .byte $44,$13,$99,$34,$48,$13,$99,$30
            .byte $4C,$1E,$65,$08,$24,$06,$99,$58
            .byte $60,$06,$99,$5C,$60,$08,$99,$58
            .byte $5C,$06,$99,$64,$68,$06,$99,$68
            .byte $6C,$08,$99,$64,$6C,$1F,$00,$3E
            .byte $1F,$9F,$12,$37,$10,$1F,$12,$37
            .byte $10,$9F,$10,$34,$0E,$1F,$10,$34
            .byte $0E,$9F,$0E,$2F,$00,$1F,$0E,$2F
            .byte $00,$9F,$3D,$66,$00,$1F,$3D,$66
            .byte $00,$3F,$00,$00,$50,$DF,$07,$2A
            .byte $09,$5F,$00,$1E,$06,$5F,$07,$2A
            .byte $09

;---------------------------------------------
; Object 6
;---------------------------------------------

L5414:
            .byte $00,$00,$64,$74,$E4,$55,$00
            .byte $36,$60,$1C,$00,$00,$38,$78,$F0
            .byte $00,$00,$00,$00,$06,$A0,$00,$A0
            .byte $1F,$10,$62,$00,$A0,$A0,$1F,$20
            .byte $83,$A0,$00,$A0,$9F,$30,$74,$00
            .byte $A0,$A0,$5F,$10,$54,$A0,$A0,$00
            .byte $5F,$51,$A6,$A0,$A0,$00,$1F,$62
            .byte $B8,$A0,$A0,$00,$9F,$73,$C8,$A0
            .byte $A0,$00,$DF,$54,$97,$A0,$00,$A0
            .byte $3F,$A6,$DB,$00,$A0,$A0,$3F,$B8
            .byte $DC,$A0,$00,$A0,$BF,$97,$DC,$00
            .byte $A0,$A0,$7F,$95,$DA,$0A,$1E,$A0
            .byte $5E,$00,$00,$0A,$1E,$A0,$1E,$00
            .byte $00,$0A,$1E,$A0,$9E,$00,$00,$0A
            .byte $1E,$A0,$DE,$00,$00,$1F,$10,$00
            .byte $0C,$1F,$20,$00,$04,$1F,$30,$04
            .byte $08,$1F,$40,$08,$0C,$1F,$51,$0C
            .byte $10,$1F,$61,$00,$10,$1F,$62,$00
            .byte $14,$1F,$82,$14,$04,$1F,$83,$04
            .byte $18,$1F,$73,$08,$18,$1F,$74,$08
            .byte $1C,$1F,$54,$0C,$1C,$1F,$DA,$20
            .byte $2C,$1F,$DB,$20,$24,$1F,$DC,$24
            .byte $28,$1F,$D9,$28,$2C,$1F,$A5,$10
            .byte $2C,$1F,$A6,$10,$20,$1F,$B6,$14
            .byte $20,$1F,$B8,$14,$24,$1F,$C8,$18
            .byte $24,$1F,$C7,$18,$28,$1F,$97,$1C
            .byte $28,$1F,$95,$1C,$2C,$1E,$00,$30
            .byte $34,$1E,$00,$34,$38,$1E,$00,$38
            .byte $3C,$1E,$00,$3C,$30,$1F,$00,$00
            .byte $A0,$5F,$6B,$6B,$6B,$1F,$6B,$6B
            .byte $6B,$9F,$6B,$6B,$6B,$DF,$6B,$6B
            .byte $6B,$5F,$00,$A0,$00,$1F,$A0,$00
            .byte $00,$9F,$A0,$00,$00,$1F,$00,$A0
            .byte $00,$FF,$6B,$6B,$6B,$7F,$6B,$6B
            .byte $6B,$3F,$6B,$6B,$6B,$BF,$6B,$6B
            .byte $6B,$3F,$00,$00,$A0

;---------------------------------------------
; Object 7
;---------------------------------------------

L5530:
            .byte $00,$40,$06
            .byte $7A,$DA,$51,$00,$0A,$66,$18,$00
            .byte $00,$24,$0E,$02,$2C,$00,$00,$02
            .byte $00,$00,$00,$44,$1F,$10,$32,$08
            .byte $08,$24,$5F,$21,$54,$08,$08,$24
            .byte $1F,$32,$74,$08,$08,$24,$9F,$30
            .byte $76,$08,$08,$24,$DF,$10,$65,$08
            .byte $08,$2C,$3F,$74,$88,$08,$08,$2C
            .byte $7F,$54,$88,$08,$08,$2C,$FF,$65
            .byte $88,$08,$08,$2C,$BF,$76,$88,$0C
            .byte $0C,$2C,$28,$74,$88,$0C,$0C,$2C
            .byte $68,$54,$88,$0C,$0C,$2C,$E8,$65
            .byte $88,$0C,$0C,$2C,$A8,$76,$88,$08
            .byte $08,$0C,$A8,$76,$77,$08,$08,$0C
            .byte $E8,$65,$66,$08,$08,$0C,$28,$74
            .byte $77,$08,$08,$0C,$68,$54,$55,$1F
            .byte $21,$00,$04,$1F,$32,$00,$08,$1F
            .byte $30,$00,$0C,$1F,$10,$00,$10,$1F
            .byte $24,$04,$08,$1F,$51,$04,$10,$1F
            .byte $60,$0C,$10,$1F,$73,$08,$0C,$1F
            .byte $74,$08,$14,$1F,$54,$04,$18,$1F
            .byte $65,$10,$1C,$1F,$76,$0C,$20,$1F
            .byte $86,$1C,$20,$1F,$87,$14,$20,$1F
            .byte $84,$14,$18,$1F,$85,$18,$1C,$08
            .byte $85,$18,$28,$08,$87,$14,$24,$08
            .byte $87,$20,$30,$08,$85,$1C,$2C,$08
            .byte $74,$24,$3C,$08,$54,$28,$40,$08
            .byte $76,$30,$34,$08,$65,$2C,$38,$9F
            .byte $40,$00,$10,$5F,$00,$40,$10,$1F
            .byte $40,$00,$10,$1F,$00,$40,$10,$1F
            .byte $20,$00,$00,$5F,$00,$20,$00,$9F
            .byte $20,$00,$00,$1F,$00,$20,$00,$3F
            .byte $00,$00,$B0

;---------------------------------------------
; Object 8
;---------------------------------------------

L562E:
            .byte $00,$00,$19,$4A,$9E
            .byte $41,$00,$22,$36,$15,$05,$00,$38
            .byte $32,$3C,$1E,$00,$00,$01,$00,$00
            .byte $50,$00,$1F,$FF,$FF,$50,$0A,$00
            .byte $DF,$FF,$FF,$00,$50,$00,$5F,$FF
            .byte $FF,$46,$28,$00,$5F,$FF,$FF,$3C
            .byte $32,$00,$1F,$65,$DC,$32,$00,$3C
            .byte $1F,$FF,$FF,$28,$00,$46,$9F,$10
            .byte $32,$00,$1E,$4B,$3F,$FF,$FF,$00
            .byte $32,$3C,$7F,$98,$BA,$1F,$72,$00
            .byte $04,$1F,$D6,$00,$10,$1F,$C5,$0C
            .byte $10,$1F,$B4,$08,$0C,$1F,$A3,$04
            .byte $08,$1F,$32,$04,$18,$1F,$31,$08
            .byte $18,$1F,$41,$08,$14,$1F,$10,$14
            .byte $18,$1F,$60,$00,$14,$1F,$54,$0C
            .byte $14,$1F,$20,$00,$18,$1F,$65,$10
            .byte $14,$1F,$A8,$04,$20,$1F,$87,$04
            .byte $1C,$1F,$D7,$00,$1C,$1F,$DC,$10
            .byte $1C,$1F,$C9,$0C,$1C,$1F,$B9,$0C
            .byte $20,$1F,$BA,$08,$20,$1F,$98,$1C
            .byte $20,$1F,$09,$42,$51,$5F,$09,$42
            .byte $51,$9F,$48,$40,$1F,$DF,$40,$49
            .byte $2F,$5F,$2D,$4F,$41,$1F,$87,$0F
            .byte $23,$1F,$26,$4C,$46,$BF,$42,$3B
            .byte $27,$FF,$43,$0F,$50,$7F,$42,$0E
            .byte $4B,$FF,$46,$50,$28,$7F,$3A,$66
            .byte $33,$3F,$51,$09,$43,$3F,$2F,$5E
            .byte $3F

;---------------------------------------------
; Object 9
;---------------------------------------------

L5704:
            .byte $00,$90,$01,$50,$8C,$31,$00
            .byte $12,$3C,$0F,$00,$00,$1C,$0C,$11
            .byte $0F,$00,$00,$02,$00,$18,$10,$00
            .byte $1F,$10,$55,$18,$05,$0F,$1F,$10
            .byte $22,$18,$0D,$09,$5F,$20,$33,$18
            .byte $0D,$09,$7F,$30,$44,$18,$05,$0F
            .byte $3F,$40,$55,$18,$10,$00,$9F,$51
            .byte $66,$18,$05,$0F,$9F,$21,$66,$18
            .byte $0D,$09,$DF,$32,$66,$18,$0D,$09
            .byte $FF,$43,$66,$18,$05,$0F,$BF,$54
            .byte $66,$1F,$10,$00,$04,$1F,$20,$04
            .byte $08,$1F,$30,$08,$0C,$1F,$40,$0C
            .byte $10,$1F,$50,$00,$10,$1F,$51,$00
            .byte $14,$1F,$21,$04,$18,$1F,$32,$08
            .byte $1C,$1F,$43,$0C,$20,$1F,$54,$10
            .byte $24,$1F,$61,$14,$18,$1F,$62,$18
            .byte $1C,$1F,$63,$1C,$20,$1F,$64,$20
            .byte $24,$1F,$65,$24,$14,$1F,$60,$00
            .byte $00,$1F,$00,$29,$1E,$5F,$00,$12
            .byte $30,$5F,$00,$33,$00,$7F,$00,$12
            .byte $30,$3F,$00,$29,$1E,$9F,$60,$00
            .byte $00

;---------------------------------------------
; Object 10
;---------------------------------------------

L57AC:
            .byte $00,$00,$01,$2C,$44,$19,$00
            .byte $16,$18,$06,$00,$00,$10,$08,$11
            .byte $08,$00,$00,$03,$00,$07,$00,$24
            .byte $9F,$12,$33,$07,$0E,$0C,$FF,$02
            .byte $33,$07,$0E,$0C,$BF,$01,$33,$15
            .byte $00,$00,$1F,$01,$22,$1F,$23,$00
            .byte $04,$1F,$03,$04,$08,$1F,$01,$08
            .byte $0C,$1F,$12,$0C,$00,$1F,$13,$00
            .byte $08,$1F,$02,$0C,$04,$3F,$1A,$00
            .byte $3D,$1F,$13,$33,$0F,$5F,$13,$33
            .byte $0F,$9F,$38,$00,$00

L5800:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $C0,$00,$00,$00,$00,$00,$E3,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E3
            .byte $10,$E3,$00,$00,$00,$00,$00,$03
            .byte $DF,$7C,$00,$00,$00,$00,$EC,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$EC
            .byte $00,$3B,$00,$00,$00,$00,$3E,$FB
            .byte $D8,$60,$00,$00,$00,$00,$F0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$F0
            .byte $10,$3F,$00,$00,$00,$00,$30,$CB
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$F0
            .byte $00,$0F,$00,$00,$00,$00,$3E,$FB
            .byte $D8,$0C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E0
            .byte $10,$0F,$00,$00,$00,$00,$06,$C3
            .byte $D8,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$E0
            .byte $00,$07,$33,$33,$33,$33,$3E,$C3
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $10,$07,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$C0,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$C0,$00,$00,$03
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$EA
            .byte $82,$AB,$00,$00,$00,$00,$3E,$C3
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$00,$00,$32,$C3
            .byte $DF,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$02,$28,$8A,$2A
            .byte $88,$A2,$20,$00,$00,$00,$00,$C0
            .byte $00,$03,$00,$00,$00,$00,$3E,$C3
            .byte $DB,$0C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$A0,$C0,$00,$00
            .byte $00,$00,$C8,$A0,$00,$00,$00,$60
            .byte $10,$03,$00,$00,$C0,$00,$34,$C3
            .byte $DB,$7C,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$01,$28,$08,$00,$00,$08
            .byte $00,$00,$08,$02,$80,$00,$00,$60
            .byte $00,$07,$0C,$CC,$CC,$CC,$36,$FB
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$28,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$0A,$00,$00,$60
            .byte $10,$07,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$02,$00,$00,$20,$0C,$00,$08
            .byte $00,$0C,$02,$00,$00,$40,$00,$30
            .byte $00,$0F,$00,$00,$C0,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$28,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$0A,$00,$30
            .byte $10,$0F,$00,$00,$C0,$00,$00,$03
            .byte $DF,$6C,$00,$00,$00,$00,$C0,$00
            .byte $00,$80,$00,$00,$80,$00,$00,$08
            .byte $00,$00,$00,$80,$00,$00,$80,$1C
            .byte $00,$3F,$00,$00,$00,$00,$3C,$FB
            .byte $D8,$6C,$00,$00,$00,$00,$C0,$00
            .byte $0A,$08,$88,$88,$88,$88,$C8,$80
            .byte $88,$C8,$88,$08,$88,$88,$28,$0C
            .byte $10,$3B,$00,$00,$00,$00,$36,$C3
            .byte $DF,$6C,$00,$00,$00,$00,$C0,$00
            .byte $20,$00,$00,$02,$00,$00,$00,$08
            .byte $00,$00,$00,$20,$00,$00,$02,$07
            .byte $00,$E3,$00,$00,$00,$00,$36,$C3
            .byte $D8,$6C,$00,$00,$00,$00,$C0,$00
            .byte $80,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$81
            .byte $FF,$FF,$00,$00,$C0,$00,$36,$C3
            .byte $D8,$7C,$C3,$0C,$30,$C3,$C0,$02
            .byte $00,$00,$00,$08,$00,$00,$0C,$08
            .byte $0C,$00,$00,$08,$00,$00,$00,$20
            .byte $00,$03,$0C,$30,$C3,$0C,$3C,$FB
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$08
            .byte $00,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$20,$00,$00,$00,$08
            .byte $00,$00,$00,$02,$00,$00,$00,$08
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$00,$00,$00,$00,$C0
            .byte $C0,$00,$00,$00,$00,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$03,$03
            .byte $DF,$7E,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$80,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$80,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$0F,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$80
            .byte $00,$00,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$03,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$88
            .byte $88,$88,$88,$88,$88,$88,$88,$9C
            .byte $88,$88,$88,$88,$88,$88,$88,$88
            .byte $00,$03,$00,$00,$00,$00,$03,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$7F
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$0F,$83
            .byte $DF,$18,$C0,$C0,$C0,$C0,$C0,$80
            .byte $00,$00,$08,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$08,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $80,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$80
            .byte $00,$00,$20,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$02,$00,$00,$00
            .byte $80,$03,$00,$00,$00,$00,$0F,$83
            .byte $C0,$00,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $D8,$7E,$00,$00,$00,$00,$C0,$20
            .byte $00,$00,$80,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$80,$00,$02
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $D8,$18,$00,$00,$00,$00,$C0,$08
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$0A
            .byte $00,$03,$00,$00,$00,$00,$0C,$03
            .byte $D8,$18,$00,$00,$00,$00,$C0,$08
            .byte $00,$02,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$20,$00,$08
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $D8,$18,$00,$00,$00,$00,$C0,$02
            .byte $80,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$20
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $DF,$18,$C3,$0C,$30,$C0,$C0,$00
            .byte $88,$88,$88,$88,$88,$88,$88,$88
            .byte $88,$88,$88,$88,$88,$88,$88,$80
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $20,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$02,$00
            .byte $00,$03,$FF,$FF,$FF,$FF,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $08,$20,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$02,$10,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $02,$80,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$80,$00
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $DF,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$20,$00,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$00,$0A,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$04,$80,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$A0,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$01,$83
            .byte $DF,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$28,$00,$00,$00,$00,$08
            .byte $00,$00,$00,$00,$28,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DB,$60,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$A0,$00,$00,$00,$00
            .byte $00,$00,$00,$0A,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $DB,$7C,$C3,$03,$03,$00,$C0,$00
            .byte $00,$00,$00,$02,$88,$00,$00,$08
            .byte $00,$00,$22,$80,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$FF,$FF,$FF,$FF,$C0,$00
            .byte $00,$00,$00,$00,$00,$A2,$28,$8A
            .byte $22,$88,$80,$00,$00,$00,$00,$00
            .byte $00,$03,$FF,$FF,$FF,$FF,$0C,$03
            .byte $C0,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0C,$03
            .byte $DC,$00,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0F,$CC,$1E
            .byte $FC,$FC,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0D,$83
            .byte $DF,$F8,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0C,$0C,$0C
            .byte $30,$C0,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0D,$83
            .byte $C7,$DC,$00,$00,$00,$00,$C0,$00
            .byte $00,$00,$00,$00,$00,$0F,$0C,$0C
            .byte $30,$F0,$00,$00,$00,$00,$00,$00
            .byte $00,$03,$00,$00,$00,$00,$0F,$83
            .byte $DF,$F8,$00,$00,$00,$00,$F0,$00
            .byte $00,$00,$00,$00,$00,$0C,$0C,$0C
            .byte $30,$C0,$00,$00,$00,$00,$00,$00
            .byte $00,$0F,$00,$00,$00,$00,$01,$83
            .byte $DC,$00,$00,$00,$00,$00,$EC,$00
            .byte $00,$00,$00,$00,$00,$0F,$CF,$DE
            .byte $30,$FC,$00,$00,$00,$00,$00,$00
            .byte $00,$3B,$00,$00,$00,$00,$00,$03
            .byte $C0,$00,$00,$00,$00,$00,$E3,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$E3,$00,$00,$00,$00,$00,$03
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
