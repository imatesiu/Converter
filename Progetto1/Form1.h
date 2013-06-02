#pragma once
#include "wdogcontrol.h"

namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			this->wdogs =( gcnew wdogcontrol());
			//this->wdogs->BackColor = System::Drawing::Color::Blue;
			this->Location =  System::Drawing::Point(72, 113);
			this->wdogs->Name = "firstControl1";
			this->wdogs->Size =  System::Drawing::Size(75, 16);
			this->wdogs->TabIndex = 8;
			this->wdogs->Text = "Hello World";
			InitializeComponent();
			this->Controls->Add(this->wdogs);
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
			//riempidatagrid();







		}

	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  rpovaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quiToolStripMenuItem;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label11;
			 System::Windows::Forms::Label^  label0;
			 System::Windows::Forms::Label^  label1;
			 System::Windows::Forms::Label^  label2;
			 System::Windows::Forms::Label^  label3;

			 wdogcontrol ^wdogs;
	private: System::Windows::Forms::Button^  button1;





	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->rpovaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->rpovaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(704, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// rpovaToolStripMenuItem
			// 
			this->rpovaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->quiToolStripMenuItem});
			this->rpovaToolStripMenuItem->Name = L"rpovaToolStripMenuItem";
			this->rpovaToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->rpovaToolStripMenuItem->Text = L"rpova";
			// 
			// quiToolStripMenuItem
			// 
			this->quiToolStripMenuItem->Name = L"quiToolStripMenuItem";
			this->quiToolStripMenuItem->Size = System::Drawing::Size(91, 22);
			this->quiToolStripMenuItem->Text = L"qui";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::LawnGreen;
			this->linkLabel1->Location = System::Drawing::Point(476, 206);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(27, 13);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"ISTI";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(12, 293);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 19);
			this->label11->TabIndex = 6;
			this->label11->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(592, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
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
			this->label3->ForeColor = System::Drawing::Color::YellowGreen;
			this->label3->Location = System::Drawing::Point(43, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"I";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 421);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label0);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		/*		void riempidatagrid(void){
		TabellaOrario ^tabella;
		tabella= gcnew TabellaOrario;
		tabella->leggiTabellaOrario("..\\FileConfigurazione\\TabellaOrario.xml");

		Console::WriteLine(tabella->ToString());
		dataGridView1->ColumnCount = 7;
		dataGridView1->RowCount = tabella->get_TabellaOrario()->Count*8;
		int colonna=0;
		int riga=0;
		dataGridView1->Columns[ 0 ]->Name = "Id_Treno";
		dataGridView1->Columns[ 1 ]->Name = "None Stazione";
		dataGridView1->Columns[ 2 ]->Name = "Orario Arrivo";
		dataGridView1->Columns[ 3 ]->Name = "Orario Partenza";
		dataGridView1->Columns[ 4 ]->Name = "BinProg";
		dataGridView1->Columns[ 5 ]->Name = "TempoMAPorte";
		dataGridView1->Columns[ 6 ]->Name = "LatoAPorte";

		for each( KeyValuePair<int , List<Fermata^>^> kvp in tabella->get_TabellaOrario() )
		{

		String ^po=kvp.Key+"\n\r";
		dataGridView1->Rows[riga]->Cells[0]->Value=po;


		for each (Fermata ^dvar in kvp.Value)
		{
		dataGridView1->Rows[riga]->Cells[1]->Value=dvar->getIdStazione();
		TimeSpan Arrivo = TimeSpan::FromSeconds(dvar->getOrarioArrivo()*30);
		dataGridView1->Rows[riga]->Cells[2]->Value= Arrivo.ToString();
		TimeSpan Partenza = TimeSpan::FromSeconds(dvar->getOrarioPartenza()*30);
		dataGridView1->Rows[riga]->Cells[3]->Value=Partenza.ToString();
		dataGridView1->Rows[riga]->Cells[4]->Value=dvar->getBinarioProgrammato();
		dataGridView1->Rows[riga]->Cells[5]->Value=dvar->gettempoMinimoAperturaPorte();
		dataGridView1->Rows[riga]->Cells[6]->Value=dvar->getLatoAperturaPorte();
		riga++;
		}

		}

		}*/
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 wdogs->onNext();



			 }
	};


}
