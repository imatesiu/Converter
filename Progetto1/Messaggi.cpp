#include "Messaggi.h"
#include "utility.h"


Messaggi::Messaggi(void)
{
	head = new structuredHeader;
	head->NID_MESSAGE = 0;
	head->L_MESSAGE = 0;
	head->T_TRAIN = 0;
	head->NID_ENGINE=0;
}


void Messaggi::serialize(byte *buffer)
{
	push(buffer, head->NID_MESSAGE, 8, 0);
	push(buffer, head->L_MESSAGE, 11, 8);
	push(buffer, head->T_TRAIN, 32, 19);
	switch (head->NID_MESSAGE)
	{
	case 200 : {get_pacchettoMissionPlan()->serializeMissionPlanPkt(buffer);}
	case 201 : {get_pacchettoCommandData1()->serializepacchettoCommandData(buffer);}
	case 215 : {push(buffer, head->NID_ENGINE, 24, 51);
		get_pacchettoPresentazione()->serialize(buffer);}
	case 1 : {get_pacchettoStatoLineaATC()->serialize(buffer);}
	case 210 :{push(buffer, head->NID_ENGINE, 24, 51);
		get_pacchettoAcknowledgement()->serialize(buffer);}


	default:
		break;
	}

}

void Messaggi::serialize(array<System::Byte>^bytez){
	int len=0;
	switch (head->NID_MESSAGE)
	{
	case 200 : {len=pkgMP->getSize();}
	case 201 : {len=pkgcd1->getSize();}
	case 215 : {len=pgkPres->getSize();}
	case 1 : {len=pkgStatoATC->getSize();}
	case 210 :{len=pkgAck->getSize();}


	default:
		break;
	}
	byte *buffer = new byte[len];
	for(int i = 0; i < len; ++i)
		buffer[i] = 0;
	serialize(buffer);

	for(int i = 0; i < len; ++i)
		bytez[i] = buffer[i];
	
}

void Messaggi::deserialize(byte *buffer)
{
	head->NID_MESSAGE= pop(buffer, 8, 0);
	head->L_MESSAGE=pop(buffer,11, 8);
	head->T_TRAIN=pop(buffer, 32, 19);
	switch (head->NID_MESSAGE)
	{
	case 200 : {set_pacchettoMissionPlan();
		pkgMP->deserializeMissionPlanPkt(buffer);
			   }
	case 201 : {set_pacchettoCommandData1();
		pkgcd1->deserializepacchettoCommandData(buffer);
			   }

	case 215 : {head->NID_ENGINE = pop(buffer, 24, 51);
		set_pacchettoPresentazione();
		pgkPres->deserialize(buffer);
			   }

	case 1 : {set_pacchettoStatoLineaATC();
		pkgStatoATC->deserialize(buffer);
			 }

	case 210 : {head->NID_ENGINE = pop(buffer, 24, 51);
		set_pacchettoAcknowledgement();
		pkgAck->deserialize(buffer);

			   }
	default:
		break;
	}

}
void Messaggi::deserialize(array<System::Byte>^bytez){
	
	byte *buffer = new byte[bytez->Length];
	for(int i = 0; i < bytez->Length; ++i)
		buffer[i] = bytez[i];
	
	deserialize(buffer);
	
	//
}
