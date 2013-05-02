#include "tomWriterTraceListener.h"


//ApplicationFramework::tomWriterTraceListener::tomWriterTraceListener(void): TraceListener()
//{
	
//}


 void ApplicationFramework::tomWriterTraceListener::WriteLine(String ^h){
	 TextWriterTraceListener::WriteLine(h);
	 MessageBox::Show( h);};
	 void ApplicationFramework::tomWriterTraceListener::WriteLine(Object ^h){//TraceListener::WriteLine(h);
	 };
	 void ApplicationFramework::tomWriterTraceListener::Write(String ^h){};
	 void ApplicationFramework::tomWriterTraceListener::Write(Object ^h){};