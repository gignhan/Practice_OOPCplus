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
