#pragma once
#include "Virus.h"
class Patient
{
protected: int m_resistance, m_state; list<Virus*> m_viruslist;
public:
	Patient();
	~Patient();
	void DoStart();
	void TakeMedicine();
	void DoDie();
	void GetState();

};

