// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyPoint.h"

int main()
{
	MyPoint M ;
	M.Dislay();
	int x, y;
	cout << "Enter Point :\n";
	cout << "X : "; cin >> x;
	cout << "Y : "; cin >> y;
	MyPoint M1(x, y);
	M1.Dislay();
	//MyPoint M1(x, y);
	cout << M.Distance(M1)<<endl;
	system("pause");
    return 0;
}

