# SortComparer C vs Asm
Projekt na studia 2012 r. Aplikacji porównująca różne metody sortowania między implementacją w C i Asemblerze

## Cel zadania

Program będzie umożliwiał sortowanie tablicy przekazanej za pośrednictwem GUI do biblioteki napisanej w asemblerze.

Do wyboru będą podane niżej algorytmy sortowania: 
*	przez wstawianie,
*	przez wybieranie,
*	bąbelkowe,
*	quickSort

## Wyniki

| |	C(bez optymalizacji) | C(z optymalizacją) | Asembler |
|	--- | --- | --- | --- |
| Sortowanie metodą przez wybieranie | 28,339 | 6,617 | 7,8792
| Sortowanie metodą przez wstawianie | 26,2268 | 4,364 | 4,4082
| Sortowanie metodą bąbelkową | 15,3826 | 5,8714 | 6,1122
| Sortowanie metodą szybką | 3,1114 | 1,253 | 1,312

## Specyfikacja zewnętrza:

Zawiera cztery funkcje:
*	sortInsertAsm
*	sortSelectAsm
*	sortBubbleAsm
*	sortQuickAsm

Prototypy w asm:
*	sortSelectAsm proc USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD
*	sortInsertAsm proc USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD
*	sortBubbleAsm PROC USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD 
*	sortQuickAsm PROC USES EAX EBX ECX EDX EDI ESI, tab_ptr:DWORD, len:DWORD

Prototypy w C:
*	void sortSelectAsm(int * tab_ptr, unsigned int len);
*	void sortInsertAsm(int * tab_ptr, unsigned int len);
*	void sortBubbleAsm(int * tab_ptr, unsigned int len);
*	void sortQuickAsm(int * tab_ptr, unsigned int len);

Są to funkcje sortujące tablice liczb ze znakiem

Przyjmowane argumenty:
*	tab_ptr – wskaźnik do tablicy do posortowania składającej się z liczb 32-bitowych ze znakiem, gdy funkcja się zakończy wynik sortowania znajduje się także w tej tablicy,
*	len – długość tablicy do posortowania,
