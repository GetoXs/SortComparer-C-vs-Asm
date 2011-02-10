// Aplikacja.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace Aplikacja;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}

/*opis metody,
pomiary predkosci i czasu
wykresik, tabela
debug-relase
wyslac zalozenia, prezentacje poczatkowa, koncowa do bazy 
i na cd przyniesc
*/