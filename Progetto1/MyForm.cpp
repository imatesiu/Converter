#include "MyForm.h"


int main()
{
	Progetto1::MyForm ^aform = gcnew Progetto1::MyForm();

	 System::Windows::Forms::Application::Run(aform);
}