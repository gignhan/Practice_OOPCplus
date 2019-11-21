#include <iostream>
using namespace std;
typedef int *IntPtrType; // khai bao bien con tro 
void main()
{
	IntPtrType ptr_a, ptr_b, *ptr_c; // khai bao bien con tro ma khong can dung *
	ptr_a = new int; // cap phat vung nho tren than vung Heap
	*ptr_a = 3;  // gan 3 vao bien nam o dia chi ptr_a
	ptr_b = ptr_a; // gan dia chi ptr_b = dia chi ptr_a
	cout << *ptr_a << " " << *ptr_b << "\n"; //in ra gia tri ma ptr_a va ptr_b chi vao` 

	ptr_b = new int; // cap phat vung nho cho ptr_b tren than vung Heap
	*ptr_b = 9; // gan gia tri ptr_b = 9
	cout << *ptr_a << " " << *ptr_b << "\n";
	// in gia tri cua con tro ptr_a hien tai la 3 
	//in gia tri cuar con tro ptr_b = 9 moi vua gan o doan tren 
	//-----------------

	*ptr_b = *ptr_a; // gan gia tri cua con tro ptr_b = gia tri cua con tro ptr_a = 3
	cout << *ptr_a << " " << *ptr_b << "\n"; // do chi thay doi gia tri nen se in ra 3 3 

	delete ptr_a;//giai phong vung nho ptr_a 
	ptr_a = ptr_b; // gan dia chi con tro ptr_b cho? vao vao con tro ptr_a
	cout << *ptr_a << " " << *ptr_b << "\n";
	//do ptr_a va ptr_b cung cho? toi 1 dia chi nen in ra 3 3


	ptr_c = &ptr_a; // gan prt_c = dia chi cua ptr_a
	cout << *ptr_c << " " << **ptr_c << "\n";
	//bien cua con tro ptr_c = dia chi cua ptr_a
	//bien cua con tro ptr_a 
	delete ptr_a;// giai phong vung nho ptr_a
	ptr_a = NULL;
	system("pause");
}