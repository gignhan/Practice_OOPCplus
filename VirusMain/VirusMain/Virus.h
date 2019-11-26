#pragma once
class Virus
{
protected: char *m_dna ; int m_resistance;
public:
	Virus();
	Virus(char *, int );
	~Virus();
	char GetM_dna();
	void SetM_dna(char *);
	int GetM_resistance();
	void SetM_resistance(int);
	void LoadADNInformation();
	int ReduceResistance(int);
	virtual void DoBorn() = 0;
	virtual Virus **DoClone() = 0;
	virtual void DoDie() = 0;
	virtual int  initResistance() = 0;



};

