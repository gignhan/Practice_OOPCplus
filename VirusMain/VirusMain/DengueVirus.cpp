#include "stdafx.h"
#include "DengueVirus.h"


DengueVirus::DengueVirus()
{
	for (int i = 0; i < 4; i++)
		m_protein[i] = ' ';
}


DengueVirus::~DengueVirus()
{
}

void DengueVirus::DoBorn()
{
	LoadADNInformation();
	int x = 1 + rand() % 3;
	if (x == 1)
	{
		m_protein[1] = {'N'};
		m_protein[2] = { 'S' };
		m_protein[1] = { '3' };
	}
	if (x == 2)
	{
		m_protein[1] = { 'N' };
		m_protein[2] = { 'S' };
		m_protein[1] = { '5' };
	}
	if (x == 3)
	{
		m_protein[1] = { 'E' };
	}
}
void DengueVirus::DoClone()
{
	DengueVirus *v = new DengueVirus();
	v->m_dna = this->m_dna;
	v->m_resistance = this->m_resistance;
	for (int i = 0; i < 4; i++)
	{
		v->m_protein[i] = m_protein[i];
	}
}
void DengueVirus::DoDie()
{
	this->m_dna = "";
	this->m_resistance = 0;
	for (int i = 0; i < 4; i++)
		this->m_protein[i] = NULL;


}
void DengueVirus::initResistance()
{
	if (m_protein[3] == '3') m_resistance = 1+ rand() % 10;
	if (m_protein[3] == '5') m_resistance = 11 + rand() % 10;
	if (m_protein[1] == 'E') m_resistance = 21 + rand() % 10;
}