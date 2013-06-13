#include "pacchettoStatoBlocco.h"
#include "utility.h"

pacchettoStatoBlocco::pacchettoStatoBlocco(void)
{
	NID_PACKET = 0;
	L_PACKET = 0;
	statoBlocco = gcnew stateBlocco();
	N_ITER = 0;
	vStatoBlocco =gcnew List<stateBlocco^>();
}

// metodo che setta N_ITER
void pacchettoStatoBlocco::setN_ITER(int N)
{
	N_ITER = N;
}

// funzione che restituisce la dimensione (ideale, non quella dovuta agli allineamenti 
// fatti dal compilatore) in Byte del messaggio tenendo anche in conto l'eventuale padding
// questa funzione sar� chiamata da chi vorr� serializzare il messaggio, per poter allocare il buffer
int pacchettoStatoBlocco::getSize()
{
	// intero che rappresenta la dimensione in bit
	int size = 0;

	// 38 per la parte fissa
	size += 71;
	// 12 bit per ogni N_ITER
	size += 34 * N_ITER;

	return size;
}

void pacchettoStatoBlocco::serialize(byte *buffer, int offset)
{
 utility::push(buffer, NID_PACKET, 8, offset );
	setL_PACKET(getSize());
 utility::push(buffer, L_PACKET, 13, offset +8);
 utility::push(buffer, statoBlocco->getNID_BLOCCO(), 32, offset + 21);
 utility::push(buffer, statoBlocco->getQ_STATOBLOCCO(), 2, offset + 53);
 utility::push(buffer, N_ITER, 16, offset + 55);
	//mS1_vect = new missionStruct1[N_ITER1];
	int shift = 71;
	for each (stateBlocco^ var in vStatoBlocco)
	{
	 utility::push(buffer, var->getNID_BLOCCO(), 32, offset + shift);
		shift += 32;
	 utility::push(buffer, var->getQ_STATOBLOCCO(), 2, offset + shift);
		shift += 2;
	}

}

void pacchettoStatoBlocco::deserialize(byte *buffer, int offset)
{

	NID_PACKET= utility::pop(buffer,  8, offset );
	L_PACKET= utility::pop(buffer, 13, offset + 8);
	statoBlocco->setNID_BLOCCO( utility::pop(buffer, 32, offset + 21));
	statoBlocco->setQ_STATOBLOCCO( utility::pop(buffer, 2, offset + 53));
	setN_ITER( utility::pop(buffer, 16, offset + 55));
	int shift = 71;
	for(unsigned int i = 0; i < N_ITER; ++i)
	{
		int NID_BLOCCO= utility::pop(buffer, 32, offset + shift);
		shift += 32;
		int Q_STATOBLOCCO= utility::pop(buffer, 2, offset + shift);
		shift += 2;
		vStatoBlocco->Add(gcnew stateBlocco(NID_BLOCCO,Q_STATOBLOCCO));
	}
}



System::String ^pacchettoStatoBlocco::ToString(){
	System::String ^out;

	out = out+"NID_PACKET: "+NID_PACKET+";";
	out = out+"L_PACKET: "+L_PACKET+";";
	out = out+statoBlocco->ToString();
	out = out+"N_ITER: "+N_ITER+";";
	if(vStatoBlocco){
		for each (stateBlocco^ var in vStatoBlocco)
		{
			out = out+var->ToString();

		}
	}
	return out;
}