#include "MyForm2.h"

bool Progetto1::MyForm2::SendMessStatoCDBIXL(List< StateCDB^> ^lCDB){
	try{
		Messaggi ^MessStatoCDBIXL = gcnew Messaggi();


		MessStatoCDBIXL->setNID_MESSAGE(101);
		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoSegnali()->setNID_PACKET(101);

		MessStatoCDBIXL->get_pacchettoStatoSegnali()->setL_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoSegnali()->setfirststatoSegnale(gcnew stateSegnale(12,2));

		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoBlocco()->setNID_PACKET(101);
		stateItinerario ^primoit =gcnew stateItinerario();
		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setfirstItinerario(primoit);

		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setN_ITER(0);


		StateCDB ^CItin = lCDB[0];
		lCDB->RemoveAt(0);
		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setfirstCDB(CItin);

		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setN_ITER(lCDB->Count);
		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setlastCDB(lCDB);

		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse(textBox2->Text);
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, 23002);

		array<Byte>^sendBytes=	MessStatoCDBIXL->serialize();



		s->SendTo( sendBytes, ep);


		return true;

	}catch ( Exception^ eException ) 
	{

		Console::WriteLine( "Errore "+eException->Message);
		return false;
	}
}


bool Progetto1::MyForm2::SendMessStatoCDBATC(List< StateCDB^> ^lCDB, int idtreno){
	try{
		Messaggi ^MessStatoCDBATC = gcnew Messaggi();


		MessStatoCDBATC->setNID_MESSAGE(1);
		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setNID_PACKET(1);
		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setNID_OPERATIONAL(idtreno);

		StateCDB ^CDBFirst = lCDB[0];
		lCDB->RemoveAt(0);
		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setfirstCDB(CDBFirst);

		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setN_ITER(lCDB->Count);
		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setlastCDB(lCDB);

		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse(textBox2->Text);
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, 23002);

		array<Byte>^sendBytes=	MessStatoCDBATC->serialize();



		s->SendTo( sendBytes, ep);


		return true;

	}catch ( Exception^ eException ) 
	{

		Console::WriteLine( "Errore "+eException->Message);
		return false;
	}
}
