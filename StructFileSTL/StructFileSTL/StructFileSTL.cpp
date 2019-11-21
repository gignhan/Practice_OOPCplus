// StructFileSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



struct Student
{
	int ID;
	string name;
	float score;

};
vector<Student*> st1 ;

void showStudent(Student *st)
{
	cout << st->ID<<"\t"<<st->name<<"\t\t"<<st->score<<endl;
}
bool checkId(Student *s)
{
	for (int i = 0; i < st1.size(); i++)
		if (s->ID == st1[i]->ID)
			return true;
	return false;
}
void addStudent(Student *s)
{

		cout << "Enter ID   :"; cin >> s->ID;
		//if (checkId(s)) { cout << "Enter ID :"; cin >> s->ID; }
		cin.ignore();
		cout << "Enter name :"; 
		getline(cin, s->name);
		do {
			cout << "Enter Score (0 -> 10): "; cin >> s->score;
		} while (s->score < 0 || s->score>10);
		st1.push_back(s);

}
void showStudent()
{
	//for (int i = 0; i< st1.size(); i++)
		showStudent(st1[1]);
		showStudent(st1[2]);
}
void main()
{
	Student *st=new Student;
	addStudent(st);
	int a; 
	cout << "enter 1 input :"; cin >> a;
	if (a == 1) addStudent(st);
	showStudent();
	system("pause");

}

