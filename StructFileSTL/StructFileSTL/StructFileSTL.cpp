// StructFileSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



struct Student
{
	int ID;
	string name;
	float score;

};
void showStudent(struct Student *st)
{
	cout << st->ID<<"\t"<<st->name<<"\t"<<st->score;
}
void addStudent(struct Student *st)
{
	cout << "Enter ID   :"; cin >> st->ID;
	cout << "Enter name :"; cin >> st->name;
	cout << "Enter Score: "; cin >> st->score;
	cout << endl;
}
int main()
{
	struct Student st;
	addStudent(&st);
	showStudent(&st);

	
	system("pause");
	return 0;
}

