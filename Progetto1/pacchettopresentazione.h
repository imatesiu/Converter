#pragma once
#include "struttureDatiMessaggi.h"

/*-----------------------------------------------------------------------------------------------
L'ATS riceve dal treno dei messaggi di 
-------------------------------------------------------------------------------------------------*/

class pacchettopresentazione
{
	presentation data;
public:
	pacchettopresentazione(void);
	// funzione che restituisce la dimensione in bit
	int getSize(){return 53;};
	// funzioni di interfaccia set e get per ogni campo dati del pacchetto
	
	
	void setNID_PACKET(int N){data.NID_PACKET = N;};
	int getNID_PACKET(){return data.NID_PACKET;};
	void setL_PACKET(int L){data.L_PACKET = L;};
	int getL_PACKET(){return data.L_PACKET;};
	void setM_PORT(int Q){data.M_PORT = Q;};
	int getM_PORT(){return data.M_PORT;};
	// metodi per la serializzazione e deserializzazione del messaggio
	// il buffer di byte deve essere stato precedentemente correttamente allocato.
	void serialize(unsigned char *buff);
	void deserialize(unsigned char *buff);
	~pacchettopresentazione(void);

	System::String ^ ToString(){
		System::String ^out;

	out = out+"NID_PACKET: "+data.NID_PACKET+";";
	out = out+"L_PACKET: "+data.L_PACKET+";";
	out = out+"M_PORT: "+data.M_PORT+";";
	 return out;
	};
};

