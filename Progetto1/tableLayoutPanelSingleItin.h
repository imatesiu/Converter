#pragma once
#include "stazione.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class tableLayoutPanelSingleItin : public System::Windows::Forms::UserControl
{
	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	System::Windows::Forms::Label^  label0;
	System::ComponentModel::IContainer^ components;
	System::Windows::Forms::ErrorProvider^ errorProvider;
	int rigae;
	int rigau;
public:
	tableLayoutPanelSingleItin(stazione ^station);
	void init(String ^nome);
	Button^ getButton(String ^textbutton);
	void addbuttonEntrata(String ^namebutton);
	void addbuttonUscita(String ^namebutton);
	Void button_Click(System::Object^  sender, System::EventArgs^  e);
	void paint(stazione ^station);
};

