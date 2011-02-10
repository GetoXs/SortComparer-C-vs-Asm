// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

#include <vector>
#include <string>
#include <time.h>

// TODO: reference additional headers your program requires here
//#include "DLL.h"
//funckje napisane w C
extern "C" void _stdcall sortSelect(int * tab, unsigned int lenght);
extern "C" void _stdcall sortInsert(int * tab, unsigned int lenght);
extern "C" void _stdcall sortBubble(int * tab, unsigned int lenght);
extern "C" void _stdcall sortQuick(int *tab, int low, int high);
//funkcje asemblerowe
extern "C" void _stdcall sortSelectAsm(int * tab_ptr, unsigned int len);
extern "C" void _stdcall sortInsertAsm(int * tab_ptr, unsigned int len);
extern "C" void _stdcall sortBubbleAsm(int * tab_ptr, unsigned int len);
extern "C" void _stdcall sortQuickAsm(int * tab_ptr, unsigned int len);
