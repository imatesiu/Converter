#pragma once
#include "tableLayoutPanelSingleItin.h"
#include "tabellaItinerari.h"
namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			this->SuspendLayout();
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1135, 675);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	};

	
}
