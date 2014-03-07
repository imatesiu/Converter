#include "MyForm.h"
#include "tomWriterTraceListener.h"
#include "Form1.h"
#include "MyForm1.h"
#include "MyForm2.h"
using namespace System::Diagnostics;
using namespace ApplicationFramework;
//#define TRACE
int main()
{
//	Console::SetBufferSize(Console::WindowWidth, Int16::MaxValue-1);

	//System::Reflection::Assembly^ myAssembly = System::Reflection::Assembly::GetExecutingAssembly();
	// Stream ^myStream = myAssembly->GetManifestResourceStream("CDB.csv");
	 //Stream ^myStream3 = myAssembly->GetManifestResourceStream("IDR_TXT1");
	 //Stream ^myStream1 = myAssembly->GetManifestResourceStream("Converter.ConfigurazioneItinerari.xml");
	 //	 Stream ^myStream2 = myAssembly->GetManifestResourceStream("Progetto1.ConfigurazioneItinerari.xml");
	//	 Stream^ readStream = System::Reflection::Assembly::GetExecutingAssembly()->GetManifestResourceStream("ConfigurazioneItinerari.xml");
//System::Resources::IResourceReader^ reader = gcnew   System::Resources::ResourceReader("Resource.resx");
//System::Resources::IResourceReader^ reader = gcnew   System::Resources::ResourceReader("Converter2.rc");
   //   IDictionaryEnumerator ^en = reader->GetEnumerator();
      
      // Goes through the enumerator, printing out the key and value pairs.
   /*   while (en->MoveNext()) {
          Console::WriteLine();
          Console::WriteLine("Name: {0}", en->Key);
          Console::WriteLine("Value: {0}", en->Value);
      }
      reader->Close();*/
//Trace::WriteLine("Hello world");
	//Progetto1::Form1 ^d = gcnew Progetto1::Form1();
	//			 d->Show();


			//	 	Progetto1::MyForm1 ^ds = gcnew Progetto1::MyForm1();
			//	 ds->Show();

				 	Progetto1::MyForm2 ^ds2 = gcnew Progetto1::MyForm2();
				 ds2->Show();
	//tomWriterTraceListener ^s = gcnew tomWriterTraceListener();
	// Trace::Listeners->Clear();
	// Trace::Listeners->Add(s);
	// Trace::AutoFlush=true;
  
			/*	 Progetto1::MyForm2 ^ds3 = gcnew Progetto1::MyForm2();
				 ds3->Show();*/
	
	Progetto1::MyForm ^aform = gcnew Progetto1::MyForm();
	//aform->ShowDialog();

	System::Windows::Forms::Application::Run(aform);
	//while (true)
	//{

	//}
	//Console::Read();

}
	