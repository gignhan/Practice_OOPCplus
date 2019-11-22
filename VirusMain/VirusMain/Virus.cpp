#include "stdafx.h"
#include "Virus.h"


Virus::Virus()
{
	this->m_dna = "GTAX";
	this->m_resistance = 0;
}
Virus::Virus(char *x, int y)
{
	this->m_dna = x;
	this->m_resistance = y;
}

Virus::~Virus()
{
}

char Virus::GetM_dna()
{
	return *m_dna;
}
void Virus::SetM_dna(char *x)
{
	this->m_dna = x;
}
int Virus::GetM_resistance()
{
	return this->m_resistance;
}
void Virus::SetM_resistance(int x)
{
	this->m_resistance = x;
}

