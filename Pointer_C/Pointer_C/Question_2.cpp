#include"Question_2.h"
#include <iostream>
using namespace std;
void main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *p = a;
	int *p2 = new int;
	delete p;
	delete[] a; // release array
	delete p2;

}