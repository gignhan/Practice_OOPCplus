#pragma once
#include "Virus.h"
#include"DengueVirus.h"
#include"FluVirus.h"
class Patient
{
protected: int m_resistance, m_state; list<Virus*> m_viruslist;
public:
	Patient();
	~Patient();

	void DoStart();
	void TakeMedicine(int);
	void DoDie();
	int GetState();

};

