// StructFileSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
list <string> ls;
struct Student
{
	int ID;
	string name;
	float score;

};
int main()
{
	list <string> Student;

    return 0;
}
void addStudent( struct Student st, list <Student> lst)
{
	cout << "Enter ID :"; cin >> st.ID;
	cout << "Enter Name :"; cin >> st.name;
	cout << "Enter Score :"; cin >> st.score;
	lst.push_back(st);

}
