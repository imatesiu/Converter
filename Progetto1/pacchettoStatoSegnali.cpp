#include "pacchettoStatoSegnali.h"
#include "utility.h"

pacchettoStatoSegnali::pacchettoStatoSegnali(void)
{
	data.NID_PACKET = 0;
	data.L_PACKET = 0;
	data.statoSegnale.NID_SEGN = 0;
	data.statoSegnale.Q_STATOSEGN = 0;
	data.N_ITER = 0;
	data.vStatoSegnale = nullptr;
}

// metodo che setta N_ITER ed alloca conseguentemente il vettore vGuasto
void pacchettoStatoSegnali::setN_ITER(int N)
{
	data.N_ITER = N;
	data.vStatoSegnale = new segnale[N];
	for(int i = 0; i < N; ++i)
	{
		data.vStatoSegnale[i].NID_SEGN = 0;
		data.vStatoSegnale[i].Q_STATOSEGN = 0;
	}
}

// in questi metodi index rappresenta l'indice del segnale di cui si vogliono leggere/scrivere le caratteristiche
// se index � 0, il metodo modificher� i dati relativi al primo segnale, altrimenti modificher� i dati 
// relativi agli altri segnali.
void pacchettoStatoSegnali::setNID_SEGN(int index, int N)
{
	if(index == 0)
		data.statoSegnale.NID_SEGN = N;
	else
		data.vStatoSegnale[index - 1].NID_SEGN = N;
}

int pacchettoStatoSegnali::getNID_SEGN(int index)
{
	if(index == 0)
		return data.statoSegnale.NID_SEGN;
	else
		return data.vStatoSegnale[index - 1].NID_SEGN;
}

void pacchettoStatoSegnali::setQSTATO_SEGN(int index, int Q)
{
	if(index == 0)
		data.statoSegnale.Q_STATOSEGN = Q;
	else
		data.vStatoSegnale[index - 1].Q_STATOSEGN = Q;
}

int pacchettoStatoSegnali::getQSTATO_SEGN(int index)
{
	if(index == 0)
		return data.statoSegnale.Q_STATOSEGN;
	else
		return data.vStatoSegnale[index - 1].Q_STATOSEGN;
}

// funzione che restituisce la dimensione (ideale, non quella dovuta agli allineamenti 
// fatti dal compilatore) in Byte del messaggio tenendo anche in conto l'eventuale padding
// questa funzione sar� chiamata da chi vorr� serializzare il messaggio, per poter allocare il buffer
int pacchettoStatoSegnali::getSize()
{
	// intero che rappresenta la dimensione in bit
	int size = 0;
	
	// 38 per la parte fissa
	size += 71;
	// 12 bit per ogni N_ITER
	size += 37 * data.N_ITER;

	return size;
}

void pacchettoStatoSegnali::serialize(byte *buffer, int offset)
{
	push(buffer, data.NID_PACKET, 8, offset);
	setL_PACKET(getSize());
	push(buffer, data.L_PACKET, 13, offset +8);
	push(buffer, data.statoSegnale.NID_SEGN, 32, offset + 21);
	push(buffer, data.statoSegnale.Q_STATOSEGN, 2, offset + 53);
	push(buffer, data.N_ITER, 16, offset + 55);
	//data.mS1_vect = new missionStruct1[data.N_ITER1];
	int shift = 71;
	for(unsigned int i = 0; i < data.N_ITER; ++i)
	{
		push(buffer, data.vStatoSegnale[i].NID_SEGN, 32, offset + shift);
		shift += 32;
		push(buffer, data.vStatoSegnale[i].Q_STATOSEGN, 5, offset + shift);
		shift += 5;
	}
}

void pacchettoStatoSegnali::deserialize(byte *buffer, int offset)
{
	data.NID_PACKET=pop(buffer,  8, offset );
	data.L_PACKET=pop(buffer, 13, offset + 8);
	data.statoSegnale.NID_SEGN=pop(buffer, 32, offset + 21);
	data.statoSegnale.Q_STATOSEGN=pop(buffer, 2, offset + 53);
	setN_ITER(pop(buffer, 16, offset + 55));
	int shift = 71;
	for(unsigned int i = 0; i < data.N_ITER; ++i)
	{
		data.vStatoSegnale[i].NID_SEGN=pop(buffer, 32, offset + shift);
		shift += 32;
		data.vStatoSegnale[i].Q_STATOSEGN=pop(buffer, 5, offset + shift);
		shift += 5;
	}
}


pacchettoStatoSegnali::~pacchettoStatoSegnali(void)
{
	delete [] data.vStatoSegnale;
}


System::String ^pacchettoStatoSegnali::ToString(){
		System::String ^out;

	out = out+"NID_PACKET: "+data.NID_PACKET+";";
	out = out+"L_PACKET: "+data.L_PACKET+";";
	out = out+"NID_SEGN: "+data.statoSegnale.NID_SEGN+";";
	out = out+"Q_STATOSEGN: "+data.statoSegnale.Q_STATOSEGN+";";
	out = out+"N_ITER: "+data.N_ITER+";";
	if(data.vStatoSegnale){
			for(unsigned int i=0;i<data.N_ITER;i++){
				out = out+"NID_SEGN: "+data.vStatoSegnale[i].NID_SEGN+";";
				out = out+"Q_STATOITIN: "+data.vStatoSegnale[i].Q_STATOSEGN+";";

			}
		}
	 return out;
}