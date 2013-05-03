#include "pacchettopresentazione.h"
#include "utility.h"

pacchettopresentazione::pacchettopresentazione(void)
{
	data.NID_PACKET = 0;
	data.L_PACKET = 0;
	data.M_PORT =0;
	
}

// metodo per la serializzazion del messaggio
// il buffer di unsigned int deve essere stato precedentemente correttamente allocato.
void pacchettopresentazione::serialize(unsigned int *buffer)
{
	//Utility::push(buffer, data.NID_ENGINE, 24, 51);
	Utility::push(buffer, data.NID_PACKET, 8, 75);
	setL_PACKET(getSize());
	Utility::push(buffer, data.L_PACKET, 13, 83);
	Utility::push(buffer, data.M_PORT, 32, 96);
	
}

// metodo per la deserializzazion del messaggio
// il buffer di unsigned int deve essere stato precedentemente correttamente allocato.
void pacchettopresentazione::deserialize(unsigned int *buff)
{
	
	
	//data.NID_ENGINE = Utility::pop(buff, 24, 51);
	data.NID_PACKET = Utility::pop(buff, 8, 75);
	data.L_PACKET = Utility::pop(buff, 13, 83);
	data.M_PORT = Utility::pop(buff, 32, 96);
	
}

pacchettopresentazione::~pacchettopresentazione(void)
{
}
