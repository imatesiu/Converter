#pragma once
#include "struttureDatiMessaggi.h"
#include "pacchettoCommandData.h"
#include "pacchettoMissionPlan.h"
#include "pacchettopresentazione.h"
#include "pacchettostatolineaatc.h"
#include "pacchettoAcknowledgement.h"


ref class Messaggi
{
	structuredHeader *head;
	pacchettoCommandData *pkgcd1;
	pacchettoMissionPlan *pkgMP;
	pacchettopresentazione *pgkPres;
	pacchettostatolineaatc *pkgStatoATC;
	pacchettoAcknowledgement *pkgAck;
public:
	Messaggi(void);


	void setNID_MESSAGE(int N){head->NID_MESSAGE = N;
	switch (N)
	{
	case 200 : {set_pacchettoMissionPlan();break;}
	case 201 : { set_pacchettoCommandData();break;}
	case 215 : { set_pacchettoPresentazione();break;}
	case 1 : {set_pacchettoStatoLineaATC();break;}
	case 210 :{set_pacchettoAcknowledgement();break;}


	default:
		break;
	}};
	int getNID_MESSAGE(){return head->NID_MESSAGE;};
	void setL_MESSAGE(int N){head->L_MESSAGE = N;};
	int getL_MESSAGE(){return head->L_MESSAGE;};
	void setT_TRAIN(int N){head->T_TRAIN = N;};
	int getT_TRAIN(){return head->T_TRAIN;};

	void setNID_ENGINE(int N){head->NID_ENGINE = N;};
	int getNID_ENGINE(){return head->NID_ENGINE;};

	void set_pacchettoCommandData(){ pkgcd1 = new pacchettoCommandData;};
	pacchettoCommandData* get_pacchettoCommandData(){ return pkgcd1;};

	void set_pacchettoMissionPlan(){ pkgMP = new pacchettoMissionPlan;};
	pacchettoMissionPlan* get_pacchettoMissionPlan(){ return pkgMP;};

	void set_pacchettoPresentazione(){ pgkPres = new pacchettopresentazione;};
	pacchettopresentazione* get_pacchettoPresentazione(){ return pgkPres;};

	void set_pacchettoStatoLineaATC(){ pkgStatoATC = new pacchettostatolineaatc;};
	pacchettostatolineaatc* get_pacchettoStatoLineaATC(){ return pkgStatoATC;};

	void set_pacchettoAcknowledgement(){ pkgAck = new pacchettoAcknowledgement;};
	pacchettoAcknowledgement* get_pacchettoAcknowledgement(){ return pkgAck;};

	void serialize(unsigned int *buffer);
	void deserialize(unsigned int *buff);

	void serialize(array<System::Byte>^bytez);
	void deserialize(array<System::Byte>^bytez);

	virtual System::String ^ToString() override;

	int getSize(){
		int size = 0;
		// 51 bit per l'header /8 =7
		
		int len =51;
		switch (head->NID_MESSAGE)
		{
		case 200 : {len+=pkgMP->getSize();break;}
		case 201 : {len+=pkgcd1->getSize();break;}
		case 215 : {len+=pgkPres->getSize();break;}
		case 1 : {len+=pkgStatoATC->getSize();break;}
		case 210 :{len+=pkgAck->getSize();break;}


		default:
			break;
		}

		return (len/8)+(len%2);
	};
};

