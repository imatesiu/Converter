#pragma once
#include "tableLayoutPanelAllCDB.h"
#include "messaggi\\StateCDB.h"
#include "messaggi\\Messaggi.h"
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
			tablel = gcnew tableLayoutPanelAllCDB("station", textBox1);
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
		bool SendMessStatoCDBIXL(List< StateCDB^> ^lCDB);
		bool SendMessStatoCDBATC(List< StateCDB^> ^lCDB);
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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"sendStatoCDBIXL";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SendStatoCDBATC";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(333, 473);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(563, 475);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"146.48.84.52";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(614, 459);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"IP dell\'ATS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(330, 457);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Train Running Number";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(751, 474);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"4011";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(751, 455);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Port";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1276, 510);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

			

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 List<StateCDB^> ^lCDB = gcnew List<StateCDB^>();
				 for each ( Object ^ssx in tablel->getTableLayoutPanel()->Controls )
				 {
					 Button ^s  = safe_cast<Button ^>(ssx);
					 int idCDB = int::Parse(s->Name);
					 StateCDB ^sCDB;
					 if(s->BackColor== System::Drawing::Color::Red){
						 sCDB= gcnew StateCDB(idCDB,typeStateCDB::cdbOccupato,0);
					 }
					 if(s->BackColor== System::Drawing::Color::Gray){
						 sCDB= gcnew StateCDB(idCDB,typeStateCDB::cdbLibero,0);
					 }
					 if(s->BackColor== System::Drawing::Color::White){
						 sCDB= gcnew  StateCDB(idCDB,typeStateCDB::cdbImpegnato,0);
					 }
					 lCDB->Add(sCDB);
					 Console::WriteLine(sCDB);
				 }

				 SendMessStatoCDBIXL(lCDB);

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text!=""){
					// String ^stringaidtreno = textBox1->Text;
					 try{
						
						 List<StateCDB^> ^lCDB = gcnew List<StateCDB^>();
						 int k = 0;
						 for each ( Object ^ssx in tablel->getTableLayoutPanel()->Controls )
						 {
							 k++;
							 Button ^s  = safe_cast<Button ^>(ssx);
							 int idCDB = int::Parse(s->Name);
							
							 StateCDB ^sCDB;
							 if(s->BackColor== System::Drawing::Color::Red){
								 int idtreno = int::Parse((String^)s->Tag);
								 sCDB= gcnew StateCDB(idCDB,typeStateCDB::cdbOccupato,0,idtreno,11);
								 lCDB->Add(sCDB);
								 Console::WriteLine(sCDB);
							 }
							 if(s->BackColor== System::Drawing::Color::Green){
								 sCDB= gcnew StateCDB(idCDB,typeStateCDB::cdbLibero,0);
								 lCDB->Add(sCDB);
							 }
							 if(s->BackColor== System::Drawing::Color::White){
								 sCDB= gcnew  StateCDB(idCDB,typeStateCDB::cdbImpegnato,0);
								 lCDB->Add(sCDB);
								 Console::WriteLine(sCDB);
							 }

							 
						 }
						 Console::WriteLine("k {0} ",k);
						 //send message udp from ATC to ATS
						 if(lCDB->Count>0){
							 SendMessStatoCDBATC(lCDB);
						 }
					 }catch(Exception ^e){
						 MessageBox::Show( "You must enter a Number.", "ID Train Number Entry Error",
							 MessageBoxButtons::OK, MessageBoxIcon::Exclamation );

					 }
				 }



			 }
	};
}
