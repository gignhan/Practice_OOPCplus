#pragma once
#include "Virus.h"
class DengueVirus :  public Virus
{
protected: char m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn();
	void DoClone();
	void DoDie();
	void initResistance();
};

