#pragma once
#include "struttureDatiMessaggi.h"
#include "pacchettoCommandData1.h"
#include "pacchettoMissionPlan.h"
#include "pacchettopresentazione.h"
#include "pacchettostatolineaatc.h"
#include "pacchettoAcknowledgement.h"


ref class Messaggi
{
	structuredHeader *head;
	pacchettoCommandData1 *pkgcd1;
	pacchettoMissionPlan *pkgMP;
	pacchettopresentazione *pgkPres;
	pacchettostatolineaatc *pkgStatoATC;
	pacchettoAcknowledgement *pkgAck;
public:
	Messaggi(void);


	void setNID_MESSAGE(int N){head->NID_MESSAGE = N;};
	int getNID_MESSAGE(){return head->NID_MESSAGE;};
	void setL_MESSAGE(int N){head->L_MESSAGE = N;};
	int getL_MESSAGE(){return head->L_MESSAGE;};
	void setT_TRAIN(int N){head->T_TRAIN = N;};
	int getT_TRAIN(){return head->T_TRAIN;};

	void setNID_ENGINE(int N){head->NID_ENGINE = N;};
	int getNID_ENGINE(){return head->NID_ENGINE;};

	void set_pacchettoCommandData1(){ pkgcd1 = new pacchettoCommandData1;};
	pacchettoCommandData1* get_pacchettoCommandData1(){ return pkgcd1;};

	void set_pacchettoMissionPlan(){ pkgMP = new pacchettoMissionPlan;};
	pacchettoMissionPlan* get_pacchettoMissionPlan(){ return pkgMP;};

	void set_pacchettoPresentazione(){ pgkPres = new pacchettopresentazione;};
	pacchettopresentazione* get_pacchettoPresentazione(){ return pgkPres;};

	void set_pacchettoStatoLineaATC(){ pkgStatoATC = new pacchettostatolineaatc;};
	pacchettostatolineaatc* get_pacchettoStatoLineaATC(){ return pkgStatoATC;};

	void set_pacchettoAcknowledgement(){ pkgAck = new pacchettoAcknowledgement;};
	pacchettoAcknowledgement* get_pacchettoAcknowledgement(){ return pkgAck;};

	void serialize(byte *buffer);
	void deserialize(byte *buff);
};

