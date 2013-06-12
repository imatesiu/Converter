#pragma once
#include "tableLayoutPanelSingleItin.h"
#include "tabellaItinerari.h"
#include "stateItinerario.h"
#include "Messaggi.h"


namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
using namespace System::Net::Sockets;

	/// <summary>
	/// Riepilogo per MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		tabellaItinerari ^tabItinerari;
	public:

		MyForm1(void)
		{
			InitializeComponent();

			tabItinerari = gcnew tabellaItinerari();
			tabItinerari->leggifileconfigurazioneItinerari("..\\FileConfigurazione\\ConfigurazioneItinerari.xml");
			genera();

			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		void genera();
	private: bool SendMessStatoIXL(List< stateItinerario^> ^listI);
	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(808, 830);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(876, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"GeneraStatoItinerari";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 898);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 List< stateItinerario^> ^listI = gcnew List< stateItinerario^>();

				 for each ( tableLayoutPanelSingleItin ^c in tableLayoutPanel1->Controls )
				 {
					 int i=0;
					  int offset =0;
					 for each ( Object ^ssx in c->getTableLayoutPanel()->Controls )
					 {
						
						 if(i==0){
							 Label ^l  = (Label ^ )ssx;
							 offset = int::Parse(l->Name);

						 }
						 if(i>1){
							 Button ^s  = (Button ^ )ssx;
						 stateItinerario^ itin = gcnew stateItinerario();
						 itin->setNID_ITIN(int::Parse(s->Name)+offset);
						 if(s->BackColor== System::Drawing::Color::Red){
							 itin->setQ_STATOITIN(1);
						 }else{

							 itin->setQ_STATOITIN(0);
						 }

						 listI->Add(itin);
						 Console::WriteLine(itin);
						 }

						 i++;
					 }


				 }

				 SendMessStatoIXL(listI);

			 }
	};

	

}
