#include "stdafx.h"
#include "Virus.h"


Virus::Virus()
{
	this->m_dna = new char();
	m_dna = "";
	m_resistance = 0;
}
Virus::Virus(char *x, int y)
{
	this->m_dna = new char();
	this->m_dna = x;
	this->m_resistance = y;
}

Virus::~Virus()
{
	cout << "Virus is die"<< endl;
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
void Virus::LoadADNInformation()
{
	fstream f;
	f.open("ATGX.bin", ios::in);// open file to read
	if (f.fail())//file no exists , f.fail() return true , file exists 
		f << " No open file " << endl;
	else {
		char s; char *c = new char();
		while (!f.eof()) 
		{
			f >> s;
			*c = s;
			m_dna = c;
			cout << *m_dna;
		}
		cout << endl;
		f.close();
	}
}
int Virus::ReduceResistance(int x)
{
	m_resistance -= x;
	if(m_resistance <= 0) return m_resistance =0;
	else return m_resistance;
	
}

