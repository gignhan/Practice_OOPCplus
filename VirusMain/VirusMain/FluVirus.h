#pragma once
#include"Virus.h"

class FluVirus : public Virus
{
protected: int m_color;
public:
	FluVirus();
	FluVirus(int);
	FluVirus(const FluVirus &);
	~FluVirus();
	int GetM_color();
	void SetM_color(int);
	void DoBorn() ;
	Virus **DoClone() ;
	void DoDie() ;
	int initResistance();

};

