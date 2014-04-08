#pragma once
#include "TabellaOrario.h"
namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Riepilogo per TrainGraph
	/// </summary>
	public ref class TrainGraph : public System::Windows::Forms::Form
	{
		TabellaOrario ^tabOrario;
	public:
		TrainGraph(TabellaOrario^T)
		{   tabOrario=T;
		InitializeComponent();
	
		Dictionary<int, List<Fermata^>^>::KeyCollection ^keys = tabOrario->get_TabellaOrario()->Keys;
	
		for each (int key in keys )
		{
			//if(key>=1173){
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = key.ToString();
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->BorderWidth = 3;
			series1->MarkerSize = 15;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Star10;
			//series1->Points[0]->AxisLabel = "9-10";
		//	series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			
			
			List<Fermata^>^ ListFer= tabOrario->getFermateFor(key);
			for each (Fermata ^var in ListFer)
			{
				//series1->Points->AddXY(var->getnameStazione(),setOrario(var->getOrarioArrivo()));
				//series1->Points->AddXY(var->getnameStazione(),setOrario(var->getOrarioPartenza()));
			//	String ^ nomestazione = var->getIdStazione().ToString();
				String ^ nomestazione = var->getnameStazione();
				int i = 1;
				//array<String^> ^stazi = gcnew array<String^>(12){"","Parco della Vittoria","Viale dei Giardini","Via Roma","Via Marco Polo","Piazza Dante","Viale Monterosa","Vicolo Corto","Vicolo Stretto","Via Accademia","Piazza Università","Via Verdi"};
				array<String^> ^stazi = gcnew array<String^>(12){"","Via Accademia","Piazza Università","Via Verdi","Vicolo Corto","Vicolo Stretto","Viale Monterosa","Piazza Dante","Via Marco Polo","Via Roma","Viale dei Giardini","Parco della Vittoria"};
				for each (String ^var in stazi)
				{
					if(var->Equals(nomestazione)){
						break;
					}
					i++;
				}


				series1->Points->AddXY(setOrario(var->getOrarioArrivo()),i);
			//	series1->Points->AddXY(setOrario(var->getOrarioPartenza()),nomestazione);
			//	series1->Points->AddXY(1,555);
				
				//series1->Points->AddXY("ciao",setOrario(var->getOrarioArrivo()));
			//	series1->Points->AddXY(i,setOrario(var->getOrarioPartenza()));
				
			}

			//series1->Points->AddXY();
			this->chart1->Series->Add(series1);
			
		}
			
	//	}	
			//
			//TODO: aggiungere qui il codice del costruttore.
			//
		}

	protected:
		/// <summary>
		/// Liberare le risorse in uso.
		/// </summary>
		~TrainGraph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->IsInterlaced = true;
			chartArea1->AxisX->LabelStyle->Format = L"T";
			chartArea1->AxisX->LineWidth = 3;
			chartArea1->AxisY->Interval = 1;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->IntervalOffset = 1;
			chartArea1->AxisY->LineWidth = 3;
			chartArea1->AxisY->Maximum = 12;
			chartArea1->AxisY->Minimum = 1;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(1298, 1008);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Customize += gcnew System::EventHandler(this, &TrainGraph::chart1_Customize);
			this->chart1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TrainGraph::chart1_MouseMove);
			// 
			// TrainGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1322, 1032);
			this->Controls->Add(this->chart1);
			this->Name = L"TrainGraph";
			this->Text = L"TrainGraph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	DateTime Progetto1::TrainGraph::setOrario(double o){
	if(o>0){
		Double times = o*30;
		TimeSpan sinceMidnight = TimeSpan::FromSeconds(times);
		DateTime orarioSupporto = DateTime::ParseExact("00:00:00", "HH:mm:ss",  System::Globalization::CultureInfo::InvariantCulture);
		DateTime 	TimeStampNextEvent= orarioSupporto+sinceMidnight;
		return TimeStampNextEvent;
	}
}

private: System::Void chart1_Customize(System::Object^  sender, System::EventArgs^  e) {

		 	//array<String^> ^stazi = gcnew array<String^>(12){"Parco della Vittoria","Viale dei Giardini","Via Roma","Via Marco Polo","Piazza Dante","Viale Monterosa","Vicolo Corto","Vicolo Stretto","Via Accademia","Piazza Università","Via Verdi"};
			array<String^> ^stazi = gcnew array<String^>(12){"","Via Accademia","Piazza Università","Via Verdi","Vicolo Corto","Vicolo Stretto","Viale Monterosa","Piazza Dante","Via Marco Polo","Via Roma","Viale dei Giardini","Parco della Vittoria"};
			int count = 0;
			System::Windows::Forms::DataVisualization::Charting::ChartArea ^ch=	this->chart1->ChartAreas["ChartArea1"];
			for each(System::Windows::Forms::DataVisualization::Charting::CustomLabel ^lbl in ch->AxisY->CustomLabels)
        {
            lbl->Text = stazi[count];
            
			if(count<11){count++;
			}else{
				break;
			}
			
        }    
		
		

		 }
private: System::Void chart1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 int cursorX = Convert::ToInt32(this->chart1->ChartAreas["ChartArea1"]->AxisX->PixelPositionToValue(e->Location.X));
			 int cursorY = Convert::ToInt32(this->chart1->ChartAreas["ChartArea1"]->AxisY->PixelPositionToValue(e->Location.Y));
			 toolTip1->SetToolTip(chart1,cursorY.ToString()+" "+cursorX.ToString());
		 }
};
}
