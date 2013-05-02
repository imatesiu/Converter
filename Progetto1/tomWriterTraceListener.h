#pragma once
#using <System.dll>
using namespace  System::Diagnostics;
using namespace  System::Windows::Forms;
using namespace  System;
namespace ApplicationFramework
{
ref class tomWriterTraceListener : public TextWriterTraceListener
{
    
public:
	tomWriterTraceListener(void): TextWriterTraceListener(){};
	tomWriterTraceListener(String ^h): TextWriterTraceListener(h){};
	virtual void WriteLine(String ^h) override;
	virtual void WriteLine(Object ^h)override;
	virtual void Write(String ^h)override;
	virtual void Write(Object ^h)override;
};

}