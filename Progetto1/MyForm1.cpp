#include "MyForm1.h"

void Progetto1::MyForm1::genera(){

	Dictionary<int,stazione^ >::ValueCollection ^valueColl =
		tabItinerari->getMap()->Values;
	for each (stazione ^station in valueColl)
	{
		tableLayoutPanelSingleItin ^tablel = gcnew tableLayoutPanelSingleItin(station);
		tablel->Location =  System::Drawing::Point(1, 1);
		tablel->Name = "firstControl1";
		//tablel->Size =  System::Drawing::Size(75, 16);
		tablel->TabIndex = 1;
		tablel->Text = "Hello World";
		this->Controls->Add(tablel);
		return;
	}

}