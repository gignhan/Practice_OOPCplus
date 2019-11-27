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
			cout << "Resistance of Virus: "<<v->GetM_resistance()<<endl;
			m_viruslist.push_back(v);
		}
		else
		{
			Virus *v = new DengueVirus();
			v->DoBorn();
			v->SetM_resistance(v->initResistance());
			cout << "Resistance of Virus: " << v->GetM_resistance()<<endl;
			m_viruslist.push_back(v);
		}
		
	}
	this->m_state = 1;
}
void Patient::TakeMedicine(int x)
{
	list<Virus*>::iterator it;
	for ( it = m_viruslist.begin(); it != m_viruslist.end();) 
	{
		//int a = (*it)->GetM_resistance();
		//system("pause");
		if ((*it)->ReduceResistance(x)==0)
		{
			it = m_viruslist.erase(it);
		}
		else
		{
			if((*it)->ReduceResistance(x)>0) m_viruslist.push_back(*(*it)->DoClone());
			it++;
		}
	}

	if (m_viruslist.empty())
	{
		cout << "Patient Alive" << endl;
		m_state = 0;
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
