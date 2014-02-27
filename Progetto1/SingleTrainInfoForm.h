#pragma once
#include "KeyListTrain.h"
#include "Train.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class SingleTrainInfoForm : public System::Windows::Forms::UserControl
{
	Train ^train;
	KeyListTrain ^key;
	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelItinerari;
	System::Windows::Forms::Label^  label5;
	System::Windows::Forms::Label^  Labeltrn;
	System::Windows::Forms::Label^  Labelip;
	System::Windows::Forms::Label^  LabelEngineNumber;
	System::Windows::Forms::Label^  LabelPriorita;
	System::Windows::Forms::TextBox ^textboxPriorita;
	System::Windows::Forms::Button ^ bclose;
	System::ComponentModel::IContainer^ components;
	System::Windows::Forms::ErrorProvider^ errorProvider;
public:
	SingleTrainInfoForm(Train ^t, KeyListTrain ^ k);
	void init();
	void set();
	System::Windows::Forms::TextBox ^getTextBox(String ^text, int id);
	Void textBox_TextChanged(System::Object^  sender, System::EventArgs^  e);
	void setitinerary();
};

