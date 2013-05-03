#pragma once
#include "struttureDatiMessaggi.h"



class pacchettoCommandData
{
	commandData data;
public:
	pacchettoCommandData(void);
	// funzione che restituisce la dimensione (ideale, non quella dovuta agli allineamenti 
	// fatti dal compilatore) in unsigned int del messaggio tenendo anche in conto l'eventuale padding
	// questa funzione sar� chiamata da chi vorr� serializzare il messaggio, per poter allocare il buffer
	int getSize(){
		//header 51 mess +24 fissi o+2 o +32
		if(getQ_COMMAND_TYPE()==5){
			return 56;
		}
		if(getQ_COMMAND_TYPE()==4){
			return 26;
		}
		return 24;};
	// funzioni di interfaccia per l'accesso in scrittura e lettura dei campi dati della struttura commandData
	
	void setNID_PACKET(int NID){data.NID_PACKET = NID;};
	int getNID_PACKET(){return data.NID_PACKET;};
	void setL_PACKET(int L){data.L_PACKET = L;};
	int getL_PACKET(){return data.L_PACKET;};
	void setQ_COMMAND_TYPE(int Q){data.Q_COMMAND_TYPE = Q;};
	int getQ_COMMAND_TYPE(){return data.Q_COMMAND_TYPE;};
	void setM_GOA_LEVEL(int M){data.M_GOA_LEVEL = M;};
	int getM_GOA_LEVEL(){return data.M_GOA_LEVEL;};
	void setNID_OPERATIONAL(int NID){data.NID_OPERATIONAL = NID;};
	int getNID_OPERATIONAL(){return data.NID_OPERATIONAL;};
	// questa funzione prende in ingresso un buffer di unsigned int (la cui dimensione deve essere almeno 20, ma il controllo sulla 
	// dimensione deve essere fatto all'esterno della funzione) e copia nei primi 12 unsigned int del buffer il contenuto dell'header
	// e nei successivi 8 unsigned int il contenuto del pacchettoCommandData
	void serializepacchettoCommandData(unsigned int *buffer);
	void deserializepacchettoCommandData(unsigned int *buff);
	~pacchettoCommandData(void);

	System::String ^ToString(){
		System::String ^out = "NID_PACKET "+getNID_PACKET()+";\n";
	out = out+"L_PACKET "+getL_PACKET()+";";
	out = out+"Q_COMMAND_TYPE "+getQ_COMMAND_TYPE()+";";

	if(getM_GOA_LEVEL()!=0 && getQ_COMMAND_TYPE() ==4)
	out = out+"M_GOA_LEVEL "+getM_GOA_LEVEL()+";";
	 if(getNID_OPERATIONAL()!=0 && getQ_COMMAND_TYPE() ==5)
	out = out+"NID_OPERATIONAL "+getNID_OPERATIONAL()+";";
	 return out;
	 
	}

};

