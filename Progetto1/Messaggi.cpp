#include "Messaggi.h"
#include "utility.h"


Messaggi::Messaggi(void)
{
	head = new structuredHeader;
	head->NID_MESSAGE = 0;
	head->L_MESSAGE = 0;
	head->T_TRAIN = 0;
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
	case 215 : {get_pacchettoPresentazione()->serialize(buffer);}
	case 1 : {get_pacchettoStatoLineaATC()->serialize(buffer);}



	default:
		break;
	}

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

	case 215 : {set_pacchettoPresentazione();
		pgkPres->deserialize(buffer);
			   }

	case 1 : {set_pacchettoStatoLineaATC();
		pkgStatoATC->deserialize(buffer);
			 }
	default:
		break;
	}

}
