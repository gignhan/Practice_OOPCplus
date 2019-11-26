#pragma once
#include "Virus.h"
class DengueVirus :  public Virus
{
protected: char m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn();
	Virus** DoClone();
	void DoDie();
	int initResistance();
};

