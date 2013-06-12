#include "MyForm.h"
#include "tomWriterTraceListener.h"
#include "Form1.h"
#include "MyForm1.h"

using namespace System::Diagnostics;
using namespace ApplicationFramework;
//#define TRACE
int main()
{
//Trace::WriteLine("Hello world");
	/*Progetto1::Form1 ^d = gcnew Progetto1::Form1();
				 d->Show();*/


				 	Progetto1::MyForm1 ^ds = gcnew Progetto1::MyForm1();
				/* ds->Show();/*
	//tomWriterTraceListener ^s = gcnew tomWriterTraceListener();
	// Trace::Listeners->Clear();
	// Trace::Listeners->Add(s);
	// Trace::AutoFlush=true;
  
	
	/*Progetto1::MyForm ^aform = gcnew Progetto1::MyForm();
	//aform->ShowDialog();*/

	System::Windows::Forms::Application::Run(ds);
	//while (true)
	//{

	//}
	//Console::Read();

}
	