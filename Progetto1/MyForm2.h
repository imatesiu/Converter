#pragma once
#include "tableLayoutPanelAllCDB.h"
#include "stateCDB.h"
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
	/// Riepilogo per MyForm2
	/// </summary>
	 ref class MyForm2 : public System::Windows::Forms::Form
	{
		tableLayoutPanelAllCDB ^tablel;

	public:
		MyForm2(void)
		{
			InitializeComponent();
			tablel = gcnew tableLayoutPanelAllCDB("station");
			tablel->Location =  System::Drawing::Point(1, 1);
			tablel->Name = "firstControl1";
			//tablel->Size =  System::Drawing::Size(75, 16);
			tablel->TabIndex = 1;
			tablel->Text = "Hello World";

			Controls->Add(tablel);
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}
		bool SendMessStatoCDBIXL(List< stateCDB^> ^lCDB);
	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"sendStatoCDB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1342, 510);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 List<stateCDB^> ^lCDB = gcnew List<stateCDB^>();
				 for each ( Object ^ssx in tablel->getTableLayoutPanel()->Controls )
				 {
					 Button ^s  = safe_cast<Button ^>(ssx);
					 int idCDB = int::Parse(s->Name);
					 stateCDB ^sCDB;
					 if(s->BackColor== System::Drawing::Color::Red){
						 sCDB= gcnew stateCDB(idCDB,1,0);
					 }
					 if(s->BackColor== System::Drawing::Color::Green){
						 sCDB= gcnew stateCDB(idCDB,0,0);
					 }
					 if(s->BackColor== System::Drawing::Color::Yellow){
						 sCDB= gcnew  stateCDB(idCDB,2,0);
					 }
					 lCDB->Add(sCDB);
				 }

				 SendMessStatoCDBIXL(lCDB);

			 }
	};
}
