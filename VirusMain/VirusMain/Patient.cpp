#include "stdafx.h"
#include "Patient.h"


Patient::Patient()
{
	this->m_resistance = 1000 + rand() % 8001;
	this->m_state = 1;
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
			v->SetM_resistance(v->initResistance());
			m_viruslist.push_back(v);
		}
		else
		{
			Virus *v = new DengueVirus();
			v->DoBorn();
			v->SetM_resistance(v->initResistance());
			m_viruslist.push_back(v);
		}
		
	}
	m_state = 1;
}
void Patient::TakeMedicine(int x)
{
	list<Virus*>::iterator it;
	for (it = m_viruslist.begin(); it != m_viruslist.end();) 
	{
		if (m_resistance == 0) DoDie();
		else
		{
			if ((*it)->GetM_resistance() <= x)
			{
				m_viruslist.erase(it);
				x -= (*it)->GetM_resistance();
				it++;
			}
			else
			{
				m_viruslist.push_back(*(*it)->DoClone());
			}
		}

	}

}
void Patient::DoDie()
{
	m_viruslist.clear();
	m_state = 0;
}
int Patient::GetState()
{
	return this->m_state;
}
