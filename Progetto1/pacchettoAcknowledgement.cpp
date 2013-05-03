#include "pacchettoAcknowledgement.h"
#include "utility.h"

pacchettoAcknowledgement::pacchettoAcknowledgement(void)
{
	
	//data.NID_PACKET = 0;
	data.L_PACKET = 0;
	data.T_TRAIN = 0;
	data.Q_MISSION_RESPONSE = 0;
}

// metodo per la serializzazion del messaggio
// il buffer di unsigned int deve essere stato precedentemente correttamente allocato.
void pacchettoAcknowledgement::serialize(unsigned int *buffer)
{
	
	//Utility::push(buffer, data.NID_ENGINE, 24, 51);
	Utility::push(buffer, data.NID_PACKET, 8, 75);
	setL_PACKET(getSize());
	Utility::push(buffer, data.L_PACKET, 13, 83);
	Utility::push(buffer, data.T_TRAIN, 32, 96);
	Utility::push(buffer, data.Q_MISSION_RESPONSE, 1, 128);
}

// metodo per la deserializzazion del messaggio
// il buffer di unsigned int deve essere stato precedentemente correttamente allocato.
void pacchettoAcknowledgement::deserialize(unsigned int *buff)
{
	
	//data.NID_ENGINE = Utility::pop(buffer, 24, 51);
	data.NID_PACKET = Utility::pop(buff, 8, 75);
	data.L_PACKET = Utility::pop(buff, 13, 83);
	data.T_TRAIN = Utility::pop(buff, 32, 96);
	data.Q_MISSION_RESPONSE = Utility::pop(buff, 1, 128);
}

pacchettoAcknowledgement::~pacchettoAcknowledgement(void)
{
	
}
