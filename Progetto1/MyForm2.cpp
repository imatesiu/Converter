#include "MyForm2.h"

bool Progetto1::MyForm2::SendMessStatoCDBIXL(List< StateCDB^> ^lCDB){
	try{
		Messaggi ^MessStatoCDBIXL = gcnew Messaggi();


		MessStatoCDBIXL->setNID_MESSAGE(101);
		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setItinerario(gcnew StateItinerario());

		MessStatoCDBIXL->get_pacchettoStatoItinerario()->setN_ITER(0);

		MessStatoCDBIXL->get_pacchettoStatoSegnali()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoSegnali()->setstatoSegnale(gcnew StateSegnale(12,2));

		MessStatoCDBIXL->get_pacchettoStatoBlocco()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoBlocco()->setStatoBlocco(gcnew StateBlocco());
		


		

		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setNID_PACKET(101);
		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setN_ITER(lCDB->Count-1);
		MessStatoCDBIXL->get_pacchettoStatoLineaIXL()->setCDB(lCDB);

		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse(textBox2->Text);
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, int::Parse(textBox3->Text));

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

		
		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setCDB(lCDB);

		MessStatoCDBATC->get_pacchettoStatoLineaATC()->setN_ITER(lCDB->Count-1);
		
		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse(textBox2->Text);
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, int::Parse(textBox3->Text));

		array<Byte>^sendBytes=	MessStatoCDBATC->serialize();



		s->SendTo( sendBytes, ep);


		return true;

	}catch ( Exception^ eException ) 
	{

		Console::WriteLine( "Errore "+eException->Message);
		return false;
	}
}
