#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LibraryManagementSystem::MyForm Form;
	Application::Run(% Form);
}


