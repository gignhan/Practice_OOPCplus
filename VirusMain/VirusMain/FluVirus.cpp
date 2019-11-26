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
FluVirus::FluVirus(const FluVirus & f)
{
	SetM_dna(f.m_dna);
	SetM_resistance( f.m_resistance);
	m_color = f.m_color;
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
	if (m_color == 1) cout << "m_color : red" << endl;
	else cout << "m_color : blue" << endl;
}

Virus ** FluVirus::DoClone()
{
	Virus *v = new FluVirus();
	v = this;
	return &v;
}


void FluVirus::DoDie()
{
	this->m_dna = "";
	this->m_resistance = 0;
	this->m_color = 0;

}
int FluVirus::initResistance()
{
	if (m_color == 0) m_resistance =10 + rand() % 11;
	else m_resistance = 15+ rand() % 6;
	return m_resistance;
}