#include "MyForm.h"
#include "tomWriterTraceListener.h"
using namespace System::Diagnostics;
#define TRACE
int main()
{
	
  
   Trace::WriteLine( "Entering Main" );
  // Trace::TraceInformation("Hello world");
	Progetto1::MyForm ^aform = gcnew Progetto1::MyForm();

	 System::Windows::Forms::Application::Run(aform);

	 
}