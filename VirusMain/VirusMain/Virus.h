#pragma once
class Virus
{
protected: char *m_dna; int m_resistance;
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
	virtual int DoBorn() = 0;
	virtual int DoClone() = 0;
	virtual void DoDie() = 0;
	virtual void  initResistance() = 0;
	friend istream &operator >> (istream &is, Virus & v);
	friend ostream &operator << (ostream &os, Virus & v);


};

