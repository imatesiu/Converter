#pragma once
#include "pacchettoMissionPlan.h"
#include "utility.h"
#include "struttureDatiMessaggi.h"
#include "Messaggi.h"
#include "tomWriterTraceListener.h"
#include "Form1.h"
#include "StateCDB.h"
#include "StateItinerario.h"
#include "StateSegnale.h"

namespace Progetto1 {

	using namespace System;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	ApplicationFramework;

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

	private: System::Windows::Forms::ProgressBar^  progressBar1;

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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
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
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(285, 379);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Presentazione", L"ACk", L"UnCommand", L"Comando Itinerari", 
				L"Stato Linea IXL", L"Stato Linea ATC", L"Comando Direzione Blocco"});
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
			this->checkBox1->Size = System::Drawing::Size(77, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Deserialize";
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
			this->label2->Location = System::Drawing::Point(167, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 325);
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
			this->label4->Location = System::Drawing::Point(52, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"INPUT:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(402, 63);
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
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(473, 683);
			this->progressBar1->Maximum = 130;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(217, 23);
			this->progressBar1->Step = 130;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 130;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 715);
			this->Controls->Add(this->progressBar1);
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

				 /* progressBar1->Step = 1;
				 for(int i=0;i<130;i++){
				 progressBar1->PerformStep();
				 Thread::Sleep(5);
				 }

				 progressBar1->Value = 0;*/
				 //Trace::WriteLine( "Entering Main" );
				 if(checkBox1->Checked){

					 Messaggi ^pkt1 = gcnew Messaggi();

					 //array<Byte>^bytes = System::Text::Encoding::ASCII->GetBytes("0x"+textBox1->Text);

					 String ^text=textBox1->Text;
					 if(text->Contains("-"))
						 text= text->Replace("-","");
					 if(text->Contains(" "))
						 text= text->Replace(" ","");
					 int len = ( text->Length / 2)+(text->Length%2)+1;
					 array<Byte>^bytez = gcnew array<Byte>(len);
					 for (int i = 0; i < bytez->Length-1; i++)
					 {
						 String ^str = text->Substring(i *2, 2);
						 int h =str->Length;
						 if(h>1){
							 bytez[i] = Byte::Parse(str,System::Globalization::NumberStyles::HexNumber);
						 }
					 }
					 pkt1->deserialize(bytez);

					 textBox2->Text=pkt1->ToString();

				 }else{
					 try{
						 int selectedIndex = comboBox1->SelectedIndex;

						 String ^text=textBox1->Text;
						 array<String^> ^arraystr=text->Split(';');
						 Messaggi ^pkt1 = gcnew Messaggi();
						 pkt1->setNID_MESSAGE(Int32::Parse(arraystr[0]));
						 pkt1->setL_MESSAGE(Int32::Parse(arraystr[1]));
						 pkt1->setT_TIME(Int32::Parse(arraystr[2]));


						 if(selectedIndex==2 ){
							 //crea Unconditional Command
							 pkt1->get_pacchettoCommandData()->setNID_PACKET(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoCommandData()->setL_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoCommandData()->setQ_COMMAND_TYPE(Int32::Parse(arraystr[5]));
							 if( pkt1->get_pacchettoCommandData()->getQ_COMMAND_TYPE()==5)
								 pkt1->get_pacchettoCommandData()->setNID_OPERATIONAL(Int32::Parse(arraystr[6]));
							 if( pkt1->get_pacchettoCommandData()->getQ_COMMAND_TYPE()==4)
								 pkt1->get_pacchettoCommandData()->setM_GOA_LEVEL(Int32::Parse(arraystr[6]));



						 }
						 if(selectedIndex==0 ){
							 //Crea presentazione
							 pkt1->setNID_ENGINE(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoPresentazione()->setNID_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoPresentazione()->setL_PACKET(Int32::Parse(arraystr[5]));

							 pkt1->get_pacchettoPresentazione()->setM_PORT(Int32::Parse(arraystr[6]));


						 }
						 if(selectedIndex==1 ){
							 //Crea ACK
							 pkt1->setNID_ENGINE(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoAcknowledgement()->setNID_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoAcknowledgement()->setL_PACKET(Int32::Parse(arraystr[5]));
							 pkt1->get_pacchettoAcknowledgement()->setT_TRAIN(Int32::Parse(arraystr[6]));
							 pkt1->get_pacchettoAcknowledgement()->setQ_MISSION_RESPONSE(Int32::Parse(arraystr[7]));

						 }

						 if(selectedIndex==3 ){
							 //Crea Comando Itinerari
							 pkt1->get_pacchettoComandoItinerari()->setNID_PACKET(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoComandoItinerari()->setL_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoComandoItinerari()->setNID_ITIN(Int32::Parse(arraystr[5]));
							 pkt1->get_pacchettoComandoItinerari()->setQ_CMDITIN(Int32::Parse(arraystr[6]));
							 pkt1->get_pacchettoEnd()->setNID_PACKET(255);


						 }
						 if(selectedIndex==4 ){
							 //Stato Linea IXL
							 pkt1->get_pacchettoStatoLineaIXL()->setNID_PACKET(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoStatoLineaIXL()->setL_PACKET(Int32::Parse(arraystr[4]));
							 StateCDB ^sCDB = gcnew StateCDB(Int32::Parse(arraystr[5]),Int32::Parse(arraystr[6]),Int32::Parse(arraystr[7]));
							 pkt1->get_pacchettoStatoLineaIXL()->setCDB(sCDB);
							 pkt1->get_pacchettoStatoLineaIXL()->setN_ITER(Int32::Parse(arraystr[8]));
							 int i = 1;
							 for (int z=0;z<pkt1->get_pacchettoStatoLineaIXL()->getN_ITER();i++){
								 StateCDB ^sCDB = gcnew StateCDB(Int32::Parse(arraystr[8+i]),Int32::Parse(arraystr[9+i]),Int32::Parse(arraystr[10+i]));
								 pkt1->get_pacchettoStatoLineaIXL()->setCDB(sCDB);
								 z++;
							 }
							 i=i+10;
							 pkt1->get_pacchettoStatoItinerario()->setNID_PACKET(Int32::Parse(arraystr[i]));
							 i++;
							 pkt1->get_pacchettoStatoItinerario()->setL_PACKET(Int32::Parse(arraystr[i]));
							 i++;
							 StateItinerario  ^ itin = gcnew StateItinerario();

							 itin->setNID_ITIN(Int32::Parse(arraystr[i]));
							 i++;
							 itin->setQ_STATOITIN(Int32::Parse(arraystr[i]));
							 pkt1->get_pacchettoStatoItinerario()->setItinerario(itin);
							 i++;
							 pkt1->get_pacchettoStatoItinerario()->setN_ITER(Int32::Parse(arraystr[i]));
							 i++;
							 for (int z=0;z<pkt1->get_pacchettoStatoItinerario()->getN_ITER();z++){
								 int NID_ITIN = Int32::Parse(arraystr[i]);
								 i++;
								 int Q_STATOITIN =Int32::Parse(arraystr[i]);
								 i++;
								 StateItinerario  ^ itin = gcnew StateItinerario(NID_ITIN,Q_STATOITIN);
								 pkt1->get_pacchettoStatoItinerario()->setItinerario(itin);
							 }


							 pkt1->get_pacchettoStatoSegnali()->setNID_PACKET(Int32::Parse(arraystr[i]));
							 i++;
							 pkt1->get_pacchettoStatoSegnali()->setL_PACKET(Int32::Parse(arraystr[i]));
							 i++;
							 int NID_SEGN = (Int32::Parse(arraystr[i]));
							 i++;
							 int QSTATO_SEGN = (Int32::Parse(arraystr[i]));
							 i++;
							 StateSegnale ^sSegnale = gcnew StateSegnale(NID_SEGN,QSTATO_SEGN );
							 pkt1->get_pacchettoStatoSegnali()->setstatoSegnale(sSegnale);
							 pkt1->get_pacchettoStatoSegnali()->setN_ITER(Int32::Parse(arraystr[i]));
							 i++;
							 for (int z=0;z<pkt1->get_pacchettoStatoSegnali()->getN_ITER();z++){
								 int setNID_SEGN =Int32::Parse(arraystr[i]);
								 i++;
								 int setQSTATO_SEGN= Int32::Parse(arraystr[i]);
								 i++;
								 StateSegnale ^sSegnal = gcnew StateSegnale(setNID_SEGN,setQSTATO_SEGN );
								 pkt1->get_pacchettoStatoSegnali()->setstatoSegnale(sSegnal);
							 }

							 pkt1->get_pacchettoEnd()->setNID_PACKET(255);

						 }
						 if(selectedIndex==5){
							 //Stato Linea ATC
							 pkt1->get_pacchettoStatoLineaATC()->setNID_PACKET(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoStatoLineaATC()->setL_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoStatoLineaATC()->setNID_OPERATIONAL(Int32::Parse(arraystr[5]));
							 StateCDB ^sCDB = gcnew StateCDB(Int32::Parse(arraystr[6]),Int32::Parse(arraystr[7]),Int32::Parse(arraystr[8]));
							 pkt1->get_pacchettoStatoLineaATC()->setCDB(sCDB);

							 pkt1->get_pacchettoStatoLineaATC()->setN_ITER(Int32::Parse(arraystr[9]));
							 int i = 1;
							 for (int z=0;i<pkt1->get_pacchettoStatoLineaATC()->getN_ITER();i++){
								 StateCDB ^sCDB = gcnew StateCDB(Int32::Parse(arraystr[10+i]),Int32::Parse(arraystr[11+i]),Int32::Parse(arraystr[12+i]));
								 pkt1->get_pacchettoStatoLineaATC()->setCDB(sCDB);
							 }

						 }
						 if(selectedIndex==6 ){
							 //Comando direzione blocco
							 pkt1->get_pacchettoComandoBlocco()->setNID_PACKET(Int32::Parse(arraystr[3]));
							 pkt1->get_pacchettoComandoBlocco()->setL_PACKET(Int32::Parse(arraystr[4]));
							 pkt1->get_pacchettoComandoBlocco()->setNID_BLOCCO(Int32::Parse(arraystr[5]));
							 pkt1->get_pacchettoComandoBlocco()->setQ_CMDBLOCCO(Int32::Parse(arraystr[6]));
							 pkt1->get_pacchettoEnd()->setNID_PACKET(255);

						 }
						 array<Byte>^bytez = pkt1->serialize();


						 String ^hex = BitConverter::ToString(bytez);

						 String ^bin = "";
						 for (int i = 0; i < bytez->Length; i++)
						 {

							 String ^bits =Convert::ToString(bytez[i], 2);
							 if(bits->Length<8){
								 for(int z=bits->Length;z<8;z++){
									 bits="0"+bits;
								 }
							 }
							 bin += bits;
						 }

						 textBox2->Text="HEX: "+hex+"\n\r BIN: "+bin;


					 }catch(Exception ^e){

						 MessageBox::Show(e->Message);
					 }
				 }
			 }
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};



};