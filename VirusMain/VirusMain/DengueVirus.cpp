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

}
void DengueVirus::DoDie()
{

}
void DengueVirus::initResistance()
{

}