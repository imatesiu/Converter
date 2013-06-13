#pragma once
#include "utility.h"
#include "stateCDB.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Collections;


ref class pacchettostatolineaatc
{
	unsigned int NID_PACKET;
	unsigned int L_PACKET ;
	unsigned int NID_OPERATIONAL ;
	 stateCDB ^pstato;
	unsigned int N_ITER ;
	// questo vettore verr� allocato con la new quando sar� noto il valore di N_ITER
	List< stateCDB^> ^pstato1;
public:
	pacchettostatolineaatc();
	
	
	
public:
	// funzione che restituisce la dimensione (ideale, non quella dovuta agli allineamenti 
	// fatti dal compilatore) in byte del messaggio tenendo anche in conto l'eventuale padding
	// questa funzione sar� chiamata da chi vorr� serializzare il messaggio, per poter allocare il buffer
	int getSize();
	void serialize(byte *buff);
	void deserialize(byte *buff);
	
	// funzioni di interfaccia set e get per ogni campo dati del pacchetto
	

	void setNID_PACKET(int NID){NID_PACKET = NID;};
	int getNID_PACKET(){return NID_PACKET;};
	void setL_PACKET(int L){L_PACKET = L;};
	int getL_PACKET(){return L_PACKET;};

	void setNID_OPERATIONAL(int NID){NID_OPERATIONAL = NID;};
	int getNID_OPERATIONAL(){return NID_OPERATIONAL;};

	void setN_ITER(int N);
	int getN_ITER(){return N_ITER;};

	void setfirstCDB(stateCDB ^scdb){pstato=scdb;};
	stateCDB ^getfirstCDB(){return pstato;};

	void setlastCDB(List< stateCDB^> ^all){pstato1=all;};
	List< stateCDB^> ^getlastCDB(){return pstato1;};

	void setlastCDB( stateCDB^ one){pstato1->Add(one);};
	



	/*void setNID_CDB(int index, int NID);
	int getNID_CDB(int index);
	void setQ_DEVIATIOIO(int index, int Q);
	int getQ_DEVIATIOIO(int index);
	void setQ_STATOCDB(int index, int Q);
	int getQ_STATOCDB(int index);*/

	System::String^ toPrint();

};

