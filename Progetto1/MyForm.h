#pragma once
#include "pacchettoMissionPlan.h"
#include "utility.h"
#include "struttureDatiMessaggi.h"
#include "Messaggi.h"

namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 79);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 237);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Avvia";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(405, 79);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 237);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Presentazione", L"ACk", L"UnCommand"});
			this->comboBox1->Location = System::Drawing::Point(506, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(212, 13);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(121, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Serialize/Deserialize";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 329);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 377);
			this->label1->TabIndex = 7;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(248, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 325);
			this->label2->TabIndex = 8;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(327, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"-------->";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"INPUT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(402, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"OUTPUT:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(402, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Per la serializzazione scegli il tipo di messaggio";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 715);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //;
				 if(checkBox1->Checked){

					 Messaggi ^pkt1 = gcnew Messaggi();



					 //array<Byte>^bytes = System::Text::Encoding::ASCII->GetBytes("0x"+textBox1->Text);

					 String ^text=textBox1->Text;
					 int len =  text->Length / 2;
					 array<Byte>^bytez = gcnew array<Byte>(len);
					 for (int i = 0; i < bytez->Length; i++)
					 {
						 bytez[i] = Byte::Parse(text->Substring(i *2, 2),System::Globalization::NumberStyles::HexNumber);
					 }




					 pkt1->deserialize(bytez);
					 String ^out = "NID_MESSAGE "+pkt1->getNID_MESSAGE()+";\n";
					 out = out+"L_MESSAGE "+pkt1->getL_MESSAGE()+";";
					 out = out+"T_TRAIN "+pkt1->getT_TRAIN()+";";
					 if(pkt1->get_pacchettoMissionPlan()){
						 out = out+"NID_PACKET "+pkt1->get_pacchettoMissionPlan()->getNID_PACKET()+";";
						 out = out+"L_PACKET "+pkt1->get_pacchettoMissionPlan()->getL_PACKET()+";";
					 }
					 textBox2->Text=pkt1->ToString();



				 }else{int selectedIndex = comboBox1->SelectedIndex;
				 if(selectedIndex==2 ){
					 String ^text=textBox1->Text;
					 array<String^> ^arraystr=text->Split(';');
					 Messaggi ^pkt1 = gcnew Messaggi();
					 pkt1->setNID_MESSAGE(Int32::Parse(arraystr[0]));
					 pkt1->setL_MESSAGE(Int32::Parse(arraystr[1]));
					 pkt1->setT_TRAIN(Int32::Parse(arraystr[2]));
					 pkt1->get_pacchettoCommandData()->setNID_PACKET(Int32::Parse(arraystr[3]));
					 pkt1->get_pacchettoCommandData()->setL_PACKET(Int32::Parse(arraystr[4]));
					 pkt1->get_pacchettoCommandData()->setQ_COMMAND_TYPE(Int32::Parse(arraystr[5]));
					 array<Byte>^bytez = gcnew array<Byte>(pkt1->get_pacchettoCommandData()->getSize());
					 pkt1->serialize(bytez);

					 textBox2->Text=BitConverter::ToString(bytez);

				 }
				 if(selectedIndex==0 ){
					 String ^text=textBox1->Text;
					 array<String^> ^arraystr=text->Split(';');
					 Messaggi ^pkt1 = gcnew Messaggi();
					 pkt1->setNID_MESSAGE(Int32::Parse(arraystr[0]));
					 pkt1->setL_MESSAGE(Int32::Parse(arraystr[1]));
 					 pkt1->setT_TRAIN(Int32::Parse(arraystr[2]));

					 pkt1->get_pacchettoPresentazione()->setNID_PACKET(Int32::Parse(arraystr[3]));
					 pkt1->get_pacchettoPresentazione()->setL_PACKET(Int32::Parse(arraystr[4]));

					 pkt1->get_pacchettoPresentazione()->setM_PORT(Int32::Parse(arraystr[5]));
					 array<Byte>^bytez = gcnew array<Byte>(pkt1->get_pacchettoPresentazione()->getSize());
					 pkt1->serialize(bytez);

					 textBox2->Text=BitConverter::ToString(bytez);

				 }



				 }


			 }
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};



};