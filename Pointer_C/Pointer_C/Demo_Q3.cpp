#include <iostream>
using namespace std;
void main() {
	int *a = new int;
	delete a;
	double *arr = new double[5];
	delete[] arr;
}