#include "SingleTrainInfoForm.h"


SingleTrainInfoForm::SingleTrainInfoForm(Train ^t, KeyListTrain ^k)
{
	train=t;
	key=k;
	init();
	set();

}

void SingleTrainInfoForm::init(){
	this-> components = gcnew System::ComponentModel::Container;
	this->errorProvider = gcnew System::Windows::Forms::ErrorProvider;
	this->tableLayoutPanelItinerari = (gcnew System::Windows::Forms::TableLayoutPanel());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->Labeltrn= (gcnew System::Windows::Forms::Label());
	this->Labelip= (gcnew System::Windows::Forms::Label());
	this->LabelEngineNumber= (gcnew System::Windows::Forms::Label());
	this->LabelPriorita= (gcnew System::Windows::Forms::Label());
	this->textboxPriorita = gcnew System::Windows::Forms::TextBox();
	this->bclose = (gcnew System::Windows::Forms::Button());

	//
	// label TRN
	//

	this->Labeltrn->AutoSize = true;
	this->Labeltrn->Location = System::Drawing::Point(13, 13);
	this->Labeltrn->Name = L"Labeltrn";
	this->Labeltrn->Size = System::Drawing::Size(35, 13);
	this->Labeltrn->TabIndex = 0;
	this->Labeltrn->Text = L"Train Running Number: ";

	// 
	// Labelip
	// 
	this->Labelip->AutoSize = true;
	this->Labelip->Location = System::Drawing::Point(240, 13);
	this->Labelip->Name = L"Labelip";
	this->Labelip->Size = System::Drawing::Size(35, 13);
	this->Labelip->TabIndex = 2;
	this->Labelip->Text = L"IP: ";

	// 
	// LabelEngineNumber
	// 
	this->LabelEngineNumber->AutoSize = true;
	this->LabelEngineNumber->Location = System::Drawing::Point(113, 12);
	this->LabelEngineNumber->Name = L"LabelEngineNumber";
	this->LabelEngineNumber->Size = System::Drawing::Size(35, 13);
	this->LabelEngineNumber->TabIndex = 1;
	this->LabelEngineNumber->Text = L"Engine Number: ";
	// 
	// textboxPriorita
	// 
	this->textboxPriorita->Location = System::Drawing::Point(370, 25);
	this->textboxPriorita->Name = L"textBox1";
	this->textboxPriorita->Size = System::Drawing::Size(100, 20);
	this->textboxPriorita->TabIndex = 3;
	// 
	// LabelPriorita
	// 
	this->LabelPriorita->AutoSize = true;
	this->LabelPriorita->Location = System::Drawing::Point(370, 6);
	this->LabelPriorita->Name = L"label4";
	this->LabelPriorita->Size = System::Drawing::Size(42, 13);
	this->LabelPriorita->TabIndex = 4;
	this->LabelPriorita->Text = L"Priorità:";
	// 
	// button1
	// 
	this->bclose->Location = System::Drawing::Point(410, 381);
	this->bclose->Name = L"button1";
	this->bclose->Size = System::Drawing::Size(75, 23);
	this->bclose->TabIndex = 5;
	this->bclose->Text = L"button1";
	this->bclose->UseVisualStyleBackColor = true;


	// 
	// tableLayoutPanel1
	// 

	this->tableLayoutPanelItinerari->Location = System::Drawing::Point(16, 109);
	this->tableLayoutPanelItinerari->Name = L"tableLayoutPanel1";
	this->tableLayoutPanelItinerari->RowCount = 5;
	this->tableLayoutPanelItinerari->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
	this->tableLayoutPanelItinerari->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
	this->tableLayoutPanelItinerari->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
	this->tableLayoutPanelItinerari->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
	this->tableLayoutPanelItinerari->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
	this->tableLayoutPanelItinerari->TabIndex = 12;
	this->tableLayoutPanelItinerari->Size = System::Drawing::Size(483, 226);

	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(16, 75);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(35, 13);
	this->label5->TabIndex = 6;
	this->label5->Text = L"Lista Itinerari:";


	//this->tableLayoutPanelItinerari->Controls->Add(this->label0, 0, 0);

	//this->tableLayoutPanelItinerari->SetColumnSpan(this->label0, 2);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(511, 416);
	array<System::Windows::Forms::Control^>^temp0 = {label5,Labeltrn,Labelip,LabelEngineNumber,LabelPriorita,textboxPriorita,bclose,tableLayoutPanelItinerari};
	this->Controls->AddRange( temp0 );
	this->AutoSize = true;
	//this->ClientSize = System::Drawing::Size(112, 366);
	//Size = System::Drawing::Size( 150, 150 );
	//this->ForeColor=System::Drawing::Color::Yellow;
	this->ResumeLayout(false);
	this->PerformLayout();
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);






}


void SingleTrainInfoForm::set(){
	this->Name =  train->getPhysicalTrain()->getEngineNumber().ToString();
	this->Text =  train->getPhysicalTrain()->getEngineNumber().ToString();
	this->Labeltrn->Text += train->getTRN().ToString();
	this->LabelEngineNumber->Text += train->getPhysicalTrain()->getEngineNumber().ToString();
	this->Labelip->Text +=train->getPhysicalTrain()->getIpAddress();
	this->textboxPriorita->Text = key->getPriorita().ToString();
	setitinerary();
}

void SingleTrainInfoForm::setitinerary(){
	for each (Fermata ^var in train->getListaItineari())
	{
		if(var->getIditinerarioEntrata()>0){
			this->tableLayoutPanelItinerari->Controls->Add(getTextBox(var->getIditinerarioEntrata().ToString(), 0));
		}
		
		if(var->getIditinerarioUscita()>0){
			this->tableLayoutPanelItinerari->Controls->Add(getTextBox(var->getIditinerarioUscita().ToString(), 1));

		}
		
	
	}
}

System::Windows::Forms::TextBox ^ SingleTrainInfoForm::getTextBox(String ^text, int id){
	// 
	// button
	// 
	System::Windows::Forms::TextBox ^textarea = (gcnew System::Windows::Forms::TextBox());
	textarea->AccessibleRole = System::Windows::Forms::AccessibleRole::Grip;
	textarea->Anchor = System::Windows::Forms::AnchorStyles::Top;

	textarea->BackColor = System::Drawing::Color::Silver;
	
	//button->Location = System::Drawing::Point(91, 3);
	textarea->Name = id.ToString();
	textarea->Size = System::Drawing::Size(75, 23);
	textarea->TabIndex = 0;
	textarea->Text = text;
	
	//textarea->Click += gcnew System::EventHandler(this, &tableLayoutPanelSingleItin::button_Click);

	textarea->TextChanged += gcnew System::EventHandler(this, &SingleTrainInfoForm::textBox_TextChanged);

	return textarea;

}

Void SingleTrainInfoForm::textBox_TextChanged(System::Object^  sender, System::EventArgs^  e){
	TextBox ^textarea =(TextBox^) sender ;
	 if (System::Text::RegularExpressions::Regex::IsMatch("[^0-9]", textarea->Text))
        {
            MessageBox::Show("Please enter only numbers.");
            textarea->Text->Remove(textarea->Text->Length - 1);
        }
	Console::WriteLine("hai provato a cambiare NID_IT:{} di {}",textarea->Text,textarea->Name);
}

    
       
    