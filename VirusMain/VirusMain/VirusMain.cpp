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
	Virus *v = new FluVirus();
	v->DoBorn();
	
	system("pause");
    return 0;
}

