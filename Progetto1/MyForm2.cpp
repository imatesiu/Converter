#include "MyForm2.h"

bool Progetto1::MyForm2::SendMessStatoCDBIXL(List< StateCDB^> ^lCDB){
	try{
		Messaggi ^MessStatoCDBIXL = gcnew Messaggi();


		MessStatoCDBIXL->setNID_MESSAGE(MessIXL::StatoLineaIXL);
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


void Progetto1::MyForm2::serializzeNetWork(List< StateCDB^> ^lCDB) {
	for each (StateCDB ^cdbvar in lCDB)
	{
		array<Byte>^sendBytes = gcnew array<Byte>(128);
		utility::push(sendBytes, 180, 8, 0); //nid_msg
		utility::push(sendBytes, 112, 10, 8); //L_msg
		utility::push(sendBytes, 5555, 32, 18); //T_msg
		utility::push(sendBytes, cdbvar->getNID_ENGINE(), 32, 50); //nid_op
		utility::push(sendBytes, cdbvar->getNID_CDB(), 32, 82);//nid_cdb

		Socket ^s = gcnew Socket(System::Net::Sockets::AddressFamily::InterNetwork, System::Net::Sockets::SocketType::Dgram,
			System::Net::Sockets::ProtocolType::Udp);

		IPAddress ^broadcast = IPAddress::Parse("127.0.0.1");
		IPEndPoint ^ep = gcnew IPEndPoint(broadcast, int::Parse("302"));
		s->SendTo( sendBytes, ep);

	}
}


bool Progetto1::MyForm2::SendMessStatoCDBATC(List< StateCDB^> ^lCDB){
	try{
		Messaggi ^MessStatoCDBATC = gcnew Messaggi();


		MessStatoCDBATC->setNID_MESSAGE(MessATC::StatoLineaATC);
		MessStatoCDBATC->get_pacchettoPositionDataATC()->setNID_PACKET(0);


		MessStatoCDBATC->get_pacchettoPositionDataATC()->setCDB(lCDB);

		MessStatoCDBATC->get_pacchettoPositionDataATC()->setN_ITER(lCDB->Count-1);

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
