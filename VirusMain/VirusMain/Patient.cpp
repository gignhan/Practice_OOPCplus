#include "stdafx.h"
#include "Patient.h"


Patient::Patient()
{
	m_resistance = 1000 + rand()%8001;
}


Patient::~Patient()
{
}
void Patient::DoStart()
{
	int x = 10 + rand() % 11;
	for (int i = 0; i < x; i++)
	{
		int k = rand() % 2;
		if (k == 1) {
			Virus *v = new FluVirus();
			v->DoBorn();
			m_viruslist.push_back(v);
		}
		else
		{
			Virus *v = new DengueVirus();
			v->DoBorn();
			m_viruslist.push_back(v);
		}
		
	}
	m_state = 1;
}
void Patient::TakeMedicine()
{

}
void Patient::DoDie()
{

}
void Patient::GetState()
{

}
