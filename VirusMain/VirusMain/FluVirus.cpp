#include "stdafx.h"
#include "FluVirus.h"


FluVirus::FluVirus()
{
	this->m_color = 0;
}

FluVirus::FluVirus(int x)
{
	this->m_color = x;
}
FluVirus::~FluVirus()
{
	cout << "FluVirus is die" << endl;
}
int FluVirus::GetM_color()
{
	return this->m_color;
}
void FluVirus::SetM_color(int x) 
{
	this->m_color = x;
}
void FluVirus::DoBorn()
{
	LoadADNInformation();
	m_color = 0 + rand() % 2 ;
}

void FluVirus::DoClone()
{
	FluVirus *v = new FluVirus();;
	v->m_dna = this->m_dna;
	v->m_resistance = this->m_resistance;
	v->m_color = this->m_color;
}
void FluVirus::DoDie()
{
	this->m_dna = "";
	this->m_resistance = 0;
	this->m_color = 0;
}
void FluVirus::initResistance()
{
	if (m_color == 0) m_resistance =10 + rand() % 11;
	else m_resistance = 15+ rand() % 6;
}