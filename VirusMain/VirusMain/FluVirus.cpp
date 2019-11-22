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
	m_color = rand() % 2 +1 ;
}

void FluVirus::DoClone()
{
	list<FluVirus>lf;
	lf.push_back(*m_dna);
	lf.push_back(m_resistance);
	lf.push_back(m_color);
	for (int i = 0; i < lf.size(); i++)
		cout << lf[i] << "\t";
}
void FluVirus::DoDie()
{

}
void FluVirus::initResistance()
{

}