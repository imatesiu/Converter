#pragma once
#include "stazione.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::IO;
ref class tableLayoutPanelAllCDB : public System::Windows::Forms::UserControl
{
	System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	System::Windows::Forms::Label^  label0;
	System::ComponentModel::IContainer^ components;
	System::Windows::Forms::ErrorProvider^ errorProvider;
	String ^namefile;
	int rigae;
	int rigau;
public:
	tableLayoutPanelAllCDB(String ^namef);

	void init();
	TableLayoutPanel ^getTableLayoutPanel(){return tableLayoutPanel1;};
	Button^ getButton(String ^textbutton);
	void addbutton(String ^namebutton, int riga, int colonna);
	//void addbuttonUscita(String ^namebutton, int id);
	Void button_Click(System::Object^  sender, System::EventArgs^  e);
	void paint(stazione ^station);
	void read(String ^file);
};

