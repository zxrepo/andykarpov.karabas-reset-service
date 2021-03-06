		ifndef	__19f0mlfinc
__19f0mlfinc	equ	1
		save
		listing	off	; no listing over this file

;****************************************************************************
;*                                                                          *
;*   AS 1.42 - File 19F0MLF.INC                                             *
;*                                                                          *
;*   Contains Bit & Register Definitions for S912ZVC19F0MLF                 *
;*                                                                          *
;****************************************************************************

;----------------------------------------------------------------------------
; Memory Limits

E2START		label	$100000		; 2 KByte EEPROM
E2END		label	$1007ff
RAMSTART	label	$001000		; 12 KByte RAM
RAMEND		label	$003fff
FLASHSTART	label	$fd0000		; 192 KByte Flash ROM
FLASHEND	label	$ffffff

__housing	equ	48
__vca		equ	0
		include	"common.inc"

		restore			; re-enable listing

		endif			; __19f0mlfinc
