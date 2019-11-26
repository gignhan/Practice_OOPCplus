// VirusMain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Virus.h"
#include"FluVirus.h"
int main()
{
	//Virus v;
	//v.LoadADNInformation();
	//v.SetM_resistance(20);
	//v.SetM_dna("A");
	//cout << v.GetM_dna() << ", " << v.GetM_resistance() << endl;
	//Virus *v = new FluVirus();
	//v->DoBorn();
	Patient p;
	char t;
	p.DoStart();
	while (p.GetState() == 1)
	{
		cout << "Take Medicine (0 = NO, 1 = YES)"; cin >> t;
		if (t == 1)
		{
			int min = 1;
			int max = 60;
			int medicine_resistance = min + (rand() % (int)(max - min + 1));
				p.TakeMedicine(medicine_resistance);

		}
	}
	system("pause");
    return 0;
}

