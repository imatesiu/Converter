#include "tomWriterTraceListener.h"


//ApplicationFramework::tomWriterTraceListener::tomWriterTraceListener(void): TraceListener()
//{

//}
void ApplicationFramework::tomWriterTraceListener::init(void){
		textBox=  (gcnew System::Windows::Forms::TextBox());
		textBox->Location =  System::Drawing::Point(15, 53);
		textBox->Multiline = true;
		textBox->Name = L"textBox2";
		textBox->Size = System::Drawing::Size(687, 638);
		textBox->TabIndex = 4;
		//textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
		textBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;

		form = gcnew Form();
		form->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			form->ClientSize = System::Drawing::Size(730, 715);
			form->Controls->Add(textBox);
			form->Name = L"Message Log Monitor";
			form->Text = L"Message Log Monitor";
			form->ResumeLayout(false);
			form->PerformLayout();
			form->Visible=true;
			Console::WriteLine("Ciao");
	
	};

void ApplicationFramework::tomWriterTraceListener::WriteLine(String ^h){
	// TextWriterTraceListener::WriteLine(h);
	Write(h+"\r\n");
};
void ApplicationFramework::tomWriterTraceListener::WriteLine(Object ^h){
	WriteLine(h->ToString()+"\r\n");
};
void ApplicationFramework::tomWriterTraceListener::Write(String ^h){
	if (textBox==nullptr){
		init();
	}
	textBox->Text+= h;};
void ApplicationFramework::tomWriterTraceListener::Write(Object ^h){
	Write(h->ToString());
};