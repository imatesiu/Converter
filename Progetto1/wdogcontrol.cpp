#include "wdogcontrol.h"


wdogcontrol::wdogcontrol(void)
{

	InitializeComponent();
}

void wdogcontrol::InitializeComponent(){
	components = gcnew System::ComponentModel::Container;
	errorProvider = gcnew System::Windows::Forms::ErrorProvider;
	this->label0 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	// 
	// label0
	// 
	this->label0->AutoSize = true;
	this->label0->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->label0->ForeColor = System::Drawing::Color::Blue;
	this->label0->Location = System::Drawing::Point(1, 0);
	this->label0->Name = L"label0";
	this->label0->Size = System::Drawing::Size(15, 19);
	this->label0->TabIndex = 1;
	this->label0->Text = L"I";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::Red;
	this->label1->Location = System::Drawing::Point(13, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(18, 19);
	this->label1->TabIndex = 2;
	this->label1->Text = L"S";
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->label2->ForeColor = System::Drawing::Color::Green;
	this->label2->Location = System::Drawing::Point(28, 0);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(18, 19);
	this->label2->TabIndex = 3;
	this->label2->Text = L"T";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::Color::Gold;
	this->label3->Location = System::Drawing::Point(43, 0);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(15, 19);
	this->label3->TabIndex = 4;
	this->label3->Text = L"I";

	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->label4->ForeColor = System::Drawing::Color::Red;
	this->label4->Location = System::Drawing::Point(55,0);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(18, 19);
	this->label4->TabIndex = 5;
	this->label4->Text = L"A";

	// Add the controls to the user control.
//	array<System::Windows::Forms::Control^>^temp0 = {label0,label1,label2,label3,label4};
	//Controls->AddRange( temp0 );
	this->Controls->Add(this->label0);	
	this->Controls->Add(this->label1);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->label4);

	// Size the user control.
	this->Location =   System::Drawing::Point(72, 113);
	this->AutoSize = true;
	//this->ClientSize = System::Drawing::Size(112, 366);
	//Size = System::Drawing::Size( 150, 150 );
	//this->ForeColor=System::Drawing::Color::Yellow;
	this->ResumeLayout(false);
	this->PerformLayout();
}

void wdogcontrol::onNext(){
	if(label0->ForeColor== System::Drawing::Color::Blue){
		label1->ForeColor = System::Drawing::Color::Blue;
		label2->ForeColor = System::Drawing::Color::Red;
		label3->ForeColor = System::Drawing::Color::Green;
		label0->ForeColor = System::Drawing::Color::Gold;

	}else{
		if(label0->ForeColor== System::Drawing::Color::Red){
			label0->ForeColor = System::Drawing::Color::Blue;
			label1->ForeColor = System::Drawing::Color::Red;
			label2->ForeColor = System::Drawing::Color::Green;
			label3->ForeColor = System::Drawing::Color::Gold;
		}else{

			if(label0->ForeColor== System::Drawing::Color::Green){
				label3->ForeColor = System::Drawing::Color::Blue;
				label0->ForeColor = System::Drawing::Color::Red;
				label1->ForeColor = System::Drawing::Color::Green;
				label2->ForeColor = System::Drawing::Color::Gold;
			}else{
				if(label0->ForeColor== System::Drawing::Color::Gold){
					label2->ForeColor = System::Drawing::Color::Blue;
					label3->ForeColor = System::Drawing::Color::Red;
					label0->ForeColor = System::Drawing::Color::Green;
					label1->ForeColor = System::Drawing::Color::Gold;
				}
			}
		}
	}
}