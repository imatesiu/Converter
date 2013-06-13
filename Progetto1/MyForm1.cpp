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

		tableLayoutPanel1->Controls->Add(tablel);
		//return;
	}

}

bool Progetto1::MyForm1::SendMessStatoIXL(List< stateItinerario^> ^listI, List<stateCDB^> ^listCItin){
	try{
		Messaggi ^MessStatoIXL = gcnew Messaggi();


		MessStatoIXL->setNID_MESSAGE(101);
		MessStatoIXL->get_pacchettoStatoItinerario()->setNID_PACKET(101);
		MessStatoIXL->get_pacchettoStatoSegnali()->setNID_PACKET(101);

		MessStatoIXL->get_pacchettoStatoSegnali()->setL_PACKET(101);
		MessStatoIXL->get_pacchettoStatoSegnali()->setfirststatoSegnale(gcnew stateSegnale(12,2));

		MessStatoIXL->get_pacchettoStatoLineaIXL()->setNID_PACKET(101);
		MessStatoIXL->get_pacchettoStatoBlocco()->setNID_PACKET(101);
		stateItinerario ^primoit = listI[0];
		MessStatoIXL->get_pacchettoStatoItinerario()->setfirstItinerario(primoit);
		listI->RemoveAt(0);
		MessStatoIXL->get_pacchettoStatoItinerario()->setN_ITER(listI->Count);
		MessStatoIXL->get_pacchettoStatoItinerario()->setlastItinerario(listI);
		if(listCItin->Count>1){
		stateCDB ^CItin = listCItin[0];
		listCItin->RemoveAt(0);
		MessStatoIXL->get_pacchettoStatoLineaIXL()->setfirstCDB(CItin);
		
		MessStatoIXL->get_pacchettoStatoLineaIXL()->setN_ITER(listCItin->Count);
		MessStatoIXL->get_pacchettoStatoLineaIXL()->setlastCDB(listCItin);
		}else{
			MessStatoIXL->get_pacchettoStatoLineaIXL()->setN_ITER(0);

		}
		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse("146.48.84.52");
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, 23002);

		array<Byte>^sendBytes=	MessStatoIXL->serialize();



		s->SendTo( sendBytes, ep);


		return true;

	}catch ( Exception^ eException ) 
	{

		Console::WriteLine( "Errore "+eException->Message);
		return false;
	}
}

List<stateCDB^> ^Progetto1::MyForm1::listCdBItin(int idstazione,int iditineraio){
	if(tabItinerari->getMap()->ContainsKey(idstazione)){
		if(tabItinerari->getMap()[idstazione]->getItinerariid()->ContainsKey(iditineraio)){
			Itinerario ^itin = tabItinerari->getMap()[idstazione]->getItinerariid()[iditineraio];
			return itin->getLCDB();
		}

	}


}

void Progetto1::MyForm1::setCdBItin(List<stateCDB^> ^listCdB, int stato){
	for each (stateCDB ^cdb in listCdB)
	{
		cdb->setQ_STATOCDB(stato);
	}


}