#pragma once
#using <System.dll>
using namespace  System::Diagnostics;
using namespace  System::Windows::Forms;
using namespace  System;
namespace ApplicationFramework
{
ref class tomWriterTraceListener : public TextWriterTraceListener
{
    System::Windows::Forms::TextBox^  textBox;
	 System::Windows::Forms::Form ^  form;

public:
	tomWriterTraceListener(void): TextWriterTraceListener(){init();};

	tomWriterTraceListener( System::Windows::Forms::TextBox^  tb): TextWriterTraceListener(){textBox=tb;};
	tomWriterTraceListener(String ^h): TextWriterTraceListener(h){};
	void  init(void);
	virtual void WriteLine(String ^h) override;
	virtual void WriteLine(Object ^h)override;
	virtual void Write(String ^h)override;
	virtual void Write(Object ^h)override;
};

}