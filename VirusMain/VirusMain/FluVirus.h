#pragma once
#include"Virus.h"
class FluVirus : public Virus
{
protected: int m_color;
public:
	FluVirus();
	~FluVirus();
	int DoBorn() ;
	int DoClone() ;
	void DoDie() ;
	void initResistance();
};

