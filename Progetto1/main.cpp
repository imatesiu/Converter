#include "MyForm.h"
#include "tomWriterTraceListener.h"

using namespace System::Diagnostics;
using namespace ApplicationFramework;
//#define TRACE
int main()
{
	
	// tomWriterTraceListener ^s = gcnew tomWriterTraceListener();
	// Trace::Listeners->Clear();
	// Trace::Listeners->Add(s);
	// Trace::AutoFlush=true;
  
	//Trace::WriteLine("Hello world");
	Progetto1::MyForm ^aform = gcnew Progetto1::MyForm();

	//aform->ShowDialog();
	System::Windows::Forms::Application::Run(aform);
	//while (true)
	//{

	//}
	//Console::Read();
}