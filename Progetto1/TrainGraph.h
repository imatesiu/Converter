#pragma once
#include "TabellaOrario.h"
#include "Event.h"
namespace Progetto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Sockets;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace System::Diagnostics::CodeAnalysis;

	/// <summary>
	/// Riepilogo per TrainGraph
	/// </summary>
	[ExcludeFromCodeCoverage]
	public ref class TrainGraph : public System::Windows::Forms::Form, IObserver<Event<StateCDB^>^>
	{
		TabellaOrario ^tabOrario;
		IDisposable ^unsubscriber;
		bool _shouldStop;
		delegate void GoNext(StateCDB ^cdb);
		GoNext^ myDelegate;
		
		static array<String^> ^cdbstazionamento = gcnew cli::array< System::String^  >(25) {L"13301", L"13302", L"14301", L"14302", L"15301", 
			L"15302", L"11301", L"11302", L"12301", L"12302", L"12303", L"10301", L"10302", L"406", L"407", L"418", L"419",L"504", L"16301", L"16302", 
			L"16303", L"17301", L"17302", L"17303", L"17304"};
		static array<String^> ^stazi = gcnew array<String^>(12){"","Via Accademia","Piazza Universit�","Via Verdi","Vicolo Corto","Vicolo Stretto","Viale Monterosa","Piazza Dante","Via Marco Polo","Via Roma","Viale dei Giardini","Parco della Vittoria"};
		static array<int> ^stoff = gcnew array<int>(12){1,13000,14000,15000,10000,505,11000,12000,400,410,16000,17000};
		//static List<String^> ^liststzoff = gcnew  List<String^> (stoff);
	public:
		TrainGraph(TabellaOrario^T)
		{   tabOrario=T;
		InitializeComponent();
		myDelegate = gcnew GoNext(this,&TrainGraph::invokeNext);
		this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &TrainGraph::TrainGraph_FormClosing);
		_shouldStop=false;
		Dictionary<int, List<Fermata^>^>::KeyCollection ^keys = tabOrario->get_TabellaOrario()->Keys;

		for each (int key in keys )
		{
			//if(key>=1173){
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = key.ToString()+"P";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;//StepLine;
			series1->BorderWidth = 3;
			series1->MarkerSize = 15;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Star10;
			series1->ToolTip = "#VALX{T} : #SERIESNAME";
			

			//series2->ChartArea = L"ChartArea1";
			//series2->Legend = L"Legend1";
			series2->Name = key.ToString()+"R";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;//StepLine;
			series2->BorderWidth = 3;
			series2->MarkerSize = 15;
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Star10;
			series2->ToolTip = "#VALX{T} : #SERIESNAME";
			
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
				//array<String^> ^stazi = gcnew array<String^>(12){"","Parco della Vittoria","Viale dei Giardini","Via Roma","Via Marco Polo","Piazza Dante","Viale Monterosa","Vicolo Corto","Vicolo Stretto","Via Accademia","Piazza Universit�","Via Verdi"};

				for each (String ^var in stazi)
				{
					if(var->Equals(nomestazione)){
						break;
					}
					i++;
				}


			//	series1->Points->AddXY(setOrario(var->getOrarioArrivo()),i);
				series1->Points->AddXY(setOrario(var->getOrarioPartenza()),i);
			//	series2->Points->AddXY(setOrario(var->getOrarioArrivo()),i);
				series2->Points->AddXY(setOrario(var->getOrarioPartenza()),i);
				//	series1->Points->AddXY(1,555);

				//series1->Points->AddXY("ciao",setOrario(var->getOrarioArrivo()));
				//	series1->Points->AddXY(i,setOrario(var->getOrarioPartenza()));

			}

			//series1->Points->AddXY();
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series1);

		}

		//	}	
		//
		//TODO: aggiungere qui il codice del costruttore.
		//
		}
		void invokeNext(StateCDB ^scdb){
			int cdb =	scdb->getNID_CDB();
			int trn = scdb->getNID_OPERATIONAL();
			if(cdb>0 && trn>0){
				int x=1;
				bool _bandiera=false;
				for (int i = 1; i <stoff->Length; i++)
				{ //406", L"407", L"418", L"419
					if(cdb>10000){
						int modulo = (cdb%stoff[i]);
						if(modulo==301 || modulo==302 || modulo==303 || modulo==304 ){
							
							_bandiera=true;
							break;
						}
					}else{
						if(cdb==407){
							x=8;
							_bandiera=true;
							break;
						}
					}


					x++;
				}
				x++;
				//this->chart1->Series[trn.ToString()+"R"]->Points;
				if(_bandiera){
				double old =0;
				for each (System::Windows::Forms::DataVisualization::Charting::DataPoint ^var in this->chart1->Series[trn.ToString()+"R"]->Points)
				{
					
					if(old!=0){
						var->XValue+=old;
					}
					if(var->YValues[0]==x){
						double date = Convert::ToSingle(DateTime::Now.ToOADate());
						old = date-var->XValue;
						var->XValue = date;
						
					}
					
				}
			}
			}
			
		};
		virtual void Subscribe(IObservable<Event<StateCDB^>^> ^provider){
			if (provider != nullptr) 
				unsubscriber = provider->Subscribe(this);	
		};

		virtual void OnCompleted(){

			Unsubscribe();

		};
		virtual void OnError(Exception ^e){

			Unsubscribe();

		};
		virtual void OnNext(Event<StateCDB^> ^value){
			if(this->InvokeRequired){
			this->Invoke(myDelegate,value->getEvent());
			}else{
				this->invokeNext(value->getEvent());
			}
		};
		virtual void Unsubscribe(){
			delete unsubscriber;
		};
		void RequestStop()
		{
			_shouldStop = true;
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
			this->chart1->BackColor = System::Drawing::Color::DimGray;
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisX->LabelStyle->Format = L"T";
			chartArea1->AxisX->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->LineWidth = 3;
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::White;
			chartArea1->AxisY->Interval = 1;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->IntervalOffset = 1;
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisY->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->LineWidth = 3;
			chartArea1->AxisY->Maximum = 12;
			chartArea1->AxisY->Minimum = 1;
			chartArea1->BackColor = System::Drawing::Color::Gray;
			chartArea1->CursorX->Interval = 0.5;
			chartArea1->CursorX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Hours;
			chartArea1->CursorX->IsUserEnabled = true;
			chartArea1->CursorX->IsUserSelectionEnabled = true;
			chartArea1->CursorX->SelectionColor = System::Drawing::Color::Lime;
			chartArea1->CursorY->IsUserEnabled = true;
			chartArea1->CursorY->IsUserSelectionEnabled = true;
			chartArea1->CursorY->SelectionColor = System::Drawing::Color::Lime;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(1, 1);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(1298, 720);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Customize += gcnew System::EventHandler(this, &TrainGraph::chart1_Customize);
			this->chart1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TrainGraph::chart1_MouseClick);
			this->chart1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TrainGraph::chart1_MouseMove);
			// 
			// TrainGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1276, 716);
			this->Controls->Add(this->chart1);
			this->Name = L"TrainGraph";
			this->Text = L"TrainGraph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TrainGraph_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 if(_shouldStop){
					 e->Cancel=false;
				 }else{
					 e->Cancel=true;
					 this->Visible=false;
				 }
			 }
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

				 //array<String^> ^stazi = gcnew array<String^>(12){"Parco della Vittoria","Viale dei Giardini","Via Roma","Via Marco Polo","Piazza Dante","Viale Monterosa","Vicolo Corto","Vicolo Stretto","Via Accademia","Piazza Universit�","Via Verdi"};
				 //array<String^> ^stazi = gcnew array<String^>(12){"","Via Accademia","Piazza Universit�","Via Verdi","Vicolo Corto","Vicolo Stretto","Viale Monterosa","Piazza Dante","Via Marco Polo","Via Roma","Viale dei Giardini","Parco della Vittoria"};
				 int count = 1;
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

				 /*	 double cursorX = this->chart1->ChartAreas["ChartArea1"]->AxisX->PixelPositionToValue(e->Location.X);
				 DateTime td = setOrario(cursorX);
				 int cursorY = Convert::ToInt32(this->chart1->ChartAreas["ChartArea1"]->AxisY->PixelPositionToValue(e->Location.Y));
				 toolTip1->SetToolTip(chart1,td+" "+cursorY);*/
				 // Call HitTest
   System::Windows::Forms::DataVisualization::Charting::HitTestResult ^result =this->chart1->HitTest( e->X, e->Y );

   // Reset Data Point Attributes
  /* for each( System::Windows::Forms::DataVisualization::Charting::DataPoint ^point in Chart1.Series[0].Points )
   {
   point->BackSecondaryColor = Color::Black;
   point->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::None;
   point->BorderWidth = 1;
   }*/

   // If the mouse if over a data point
   if(result->ChartElementType == System::Windows::Forms::DataVisualization::Charting::ChartElementType::DataPoint)
   {
      // Find selected data point
      System::Windows::Forms::DataVisualization::Charting::DataPoint ^point = this->chart1->Series[result->Series->Name]->Points[result->PointIndex];
	    Console::WriteLine(result->Series->Name);
		 Console::WriteLine(point);
      // Change the appearance of the data point
     /* point->Color = Color::White;
      point->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Percent25;
      point->BorderWidth = 2;*/
   }
   else
   {
      // Set default cursor
      this->Cursor = Cursors::Default;
   }

			 }
	private: System::Void chart1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				  double cursorX = this->chart1->ChartAreas["ChartArea1"]->AxisX->PixelPositionToValue(e->Location.X);
				  DateTime td = DateTime::FromOADate(cursorX);
				 int cursorY = Convert::ToInt32(this->chart1->ChartAreas["ChartArea1"]->AxisY->PixelPositionToValue(e->Location.Y));
				 Console::WriteLine("X:{0} Y:{1}",td,cursorY);

			 }
};
}