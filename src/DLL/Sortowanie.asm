.386
.model flat, stdcall

.code 

sortSelectAsm proc USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD

	MOV EBX, tab_ptr	;ustawianie indeksu bazowego
	MOV ECX, len			;ustawianie licznika
LOOP1:
	CMP	ECX, 0				;sprawdzanie licznika
	JLE END_LOOP1
	XOR ESI, ESI			;zerowanie maksymalnego indeksu
	MOV EDI, 1				;ustawianie licznika 2
LOOP2:  
	CMP EDI, ECX			;sprawdzanie licznika 2
	JGE END_LOOP2
	MOV EAX, [EBX+EDI*4]	
	CMP EAX, [EBX+ESI*4]	;sprawdzanie czy bedzie nowy element maksymalny
	JLE NEXTK
	MOV ESI, EDI			;nowy indeks maxymalny
NEXTK:
	INC EDI
	JMP LOOP2
END_LOOP2:
										;zamiana maksymalnego elementu
	MOV EDX, [EBX+ECX*4-4]
	MOV EAX, [EBX+ESI*4]
	MOV [EBX+ECX*4-4], EAX
	MOV [EBX+ESI*4], EDX
	DEC ECX
	JMP LOOP1
END_LOOP1:
	RET
sortSelectAsm  ENDP

sortInsertAsm proc USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD
	
	MOV EBX, tab_ptr			;ladowanie rejestrow bazowego
	MOV ECX, len					;ladowanie licznika dla for
	MOV ESI, 1						;ladowanie licznika
I_FOR_LOOP_TOP:
	MOV EDX, [EBX+ESI*4]  ;ladowanie temp = A[i]
	MOV EDI, ESI					;ladowanie licznika dla while
	
	DEC	EDI								;j=i-1
WHILE_LOOP_TOP:
	CMP EDX, [EBX+EDI*4]	;porownywane A[i] z A[j]
	JGE	WHILE_LOOP_DONE

	MOV EAX, [EBX+EDI*4]
	MOV [EBX+EDI*4+4], EAX	;A[j+1] = A[j]
	DEC EDI
	CMP EDI,0
	JGE WHILE_LOOP_TOP
WHILE_LOOP_DONE:
	MOV [EBX+EDI*4+4], EDX	;A[j+i] = temp
	INC ESI
	DEC ECX
	CMP ECX,1
	JNE I_FOR_LOOP_TOP

	ret
sortInsertAsm endp

sortBubbleAsm PROC USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD
LOCAL i_loop:DWORD 
	MOV EBX, tab_ptr		;ustawiany rejestr bazowy
	MOV i_loop, 0				;zerowanie zmiennej indeksowego
	DEC len
LOOP1:
	MOV EAX, i_loop
	CMP EAX, len		
	JGE LOOP1_END
	
	XOR ECX, ECX				;zerowanie licznika zmian
	XOR EDI, EDI				;zerowanie licznika tablicy
	MOV EDX, len
	SUB EDX, i_loop			;dlugosc - i
	
	;DEC len						;zmniejszanie licznika dlugosci
	;MOV ECX, len				;ladowanie licznika 2
LOOP2:
	CMP EDI, EDX
	JGE LOOP2_END
	
	MOV EAX, [EBX+EDI*4+4]
	CMP EAX, [EBX+EDI*4]		;sprawdzanie czy jest wiekszy
	JGE NEXT2
	MOV ESI, [EBX+EDI*4]		;zamiana elementow
	MOV [EBX+EDI*4], EAX
	MOV [EBX+EDI*4+4], ESI
	INC ECX							;zwiekszenie licznika zmian
NEXT2:
	INC EDI							;zwiekszenie rejestrow indeksowych
	JMP LOOP2
LOOP2_END:
	CMP ECX, 0					;sprawdzenie czy nastapila jakas zmiana
	JE LOOP1_END
	INC i_loop
	JMP LOOP1
LOOP1_END:
	RET
sortBubbleAsm ENDP

_sortQuickAsm PROC NEAR

  ;[ESP]  = IP
  ;[ESP+4]  = right
  ;[ESP+8]  = left
  ; EBX = tab
  MOV ESI, [ESP+8] ;lewy indeks pobieramy ze stosu
	MOV EDI, [ESP+4] ;prawy indeks pobieramy ze stosu
		
	MOV EAX, [EBX+ESI*4] ;ustawianie elementu osiowego
DO_LOOP:
	CMP EAX, [EBX+ESI*4]	;ustawianie indeksu lewego
	JLE WHILE_2
	INC ESI
	JMP DO_LOOP
WHILE_2:
	CMP EAX, [EBX+EDI*4]	;ustawianie indeksu prawego
	JGE IF_1
	DEC EDI
	JMP WHILE_2
IF_1:
	CMP ESI, EDI					;sprawdzenie indeksow
	JG	IF_1_END
	MOV ECX, [EBX+ESI*4]	;zamiana elementow
	MOV EDX, [EBX+EDI*4]
	MOV [EBX+ESI*4], EDX
	MOV [EBX+EDI*4], ECX
	INC ESI
	DEC EDI
IF_1_END:
	CMP ESI, EDI					;sprawdzenie indeksow
	JGE IF_2
	JMP DO_LOOP
IF_2:
	MOV EAX, [ESP+8]			;pobieramy lewy parametr
	PUSH ESI							;indeks lewy = parametr potrzebny na drugi qsort
		
	CMP EDI, EAX
	JLE IF_3
	PUSH EAX							;³aduje lewy parametr (parametr lewy)
	PUSH EDI							;³aduje prawy parametr (indeks prawy)
	CALL _sortQuickAsm		;rekursja
	POP EAX
	POP EAX
IF_3:
	MOV ESI, [ESP]				;pobieranie ze stosu lewego indeksu
	MOV EAX, [ESP+8]			;pobieranie ze stosu prawy parametr
	CMP ESI, EAX
	JGE DONE
	PUSH ESI							;³aduje lewy parametr (indeks lewy)
	PUSH EAX							;³aduje prawy parametr (parametr prawy)
	CALL _sortQuickAsm
	POP EAX
	POP EAX
DONE:
	POP EAX
	RET
_sortQuickAsm ENDP

sortQuickAsm PROC USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD
	MOV EBX, tab_ptr			;ustawianie tablicy
	MOV EAX, 0						;ladowanie poczatkowego lewego parametru
	PUSH EAX
	PUSH len							;ladowanie prawego parametru
	CALL _sortQuickAsm
	POP EAX
	POP EAX
	ret
sortQuickAsm ENDP

end