#include "pacchettoCommandData.h"
#include "utility.h"

pacchettoCommandData::pacchettoCommandData(void)
{
	
	data.NID_PACKET = 0;
	data.L_PACKET = 0;
	data.Q_COMMAND_TYPE = 0;
	data.M_GOA_LEVEL = 0;
	data.NID_OPERATIONAL = 0;
}

// questa funzione prende in ingresso un buffer di unsigned int (la cui dimensione deve essere almeno 10, ma il controllo sulla 
// dimensione deve essere fatto all'esterno della funzione) e copia in buffer il contenuto del pacchettoCommandData
void pacchettoCommandData::serializepacchettoCommandData(unsigned int *buffer)
{

	Utility::push(buffer, data.NID_PACKET, 8, 51);
	setL_PACKET(getSize());
	Utility::push(buffer, data.L_PACKET, 13, 59);
	Utility::push(buffer, data.Q_COMMAND_TYPE, 3, 72);
	if(data.Q_COMMAND_TYPE==4){
		Utility::push(buffer, data.M_GOA_LEVEL, 2, 75);
	}
	if(data.Q_COMMAND_TYPE==5){
		Utility::push(buffer, data.NID_OPERATIONAL, 32, 75);

	}

}

void pacchettoCommandData::deserializepacchettoCommandData(unsigned int *buffer)
{

	data.NID_PACKET=Utility::pop(buffer,  8, 51);
	data.L_PACKET=Utility::pop(buffer, 13, 59);
	data.Q_COMMAND_TYPE=Utility::pop(buffer,3, 72);
	if(data.Q_COMMAND_TYPE==4){
		data.M_GOA_LEVEL=Utility::pop(buffer, 2, 75);
	}
	if(data.Q_COMMAND_TYPE==5){
		data.NID_OPERATIONAL=Utility::pop(buffer, 32, 75);

	}
}

pacchettoCommandData::~pacchettoCommandData(void)
{
}
