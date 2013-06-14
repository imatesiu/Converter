#pragma once
ref class stateItinerario
{
	unsigned int NID_ITIN;
	unsigned int Q_STATOITIN ;
public:
	stateItinerario(void);
	stateItinerario(int N, int Q){NID_ITIN=N;Q_STATOITIN=Q;};
	void setNID_ITIN( int N){NID_ITIN=N;};
	int getNID_ITIN(){return NID_ITIN;};
	void setQ_STATOITIN( int Q){
		if((Q>=0) & (Q<2)){
			Q_STATOITIN=Q;
		}else{
			Q_STATOITIN=3;
		}
	};
	int getQ_STATOITIN(){return Q_STATOITIN;};
	int Size(){return 34;}
	
	
	
	virtual System::String ^ToString() override;
};
