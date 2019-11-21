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
	for (int i = 0; i< st1.size(); i++)
		showStudent(st1[i]);
		
}
void display()
{
	cout << "ID\t FULL NAME \t\t SCORE" << endl;
	showStudent();
}
void SaveToFile(string path) {
	fstream f;
	f.open(path, ios::out);
	if (f.fail()) cout << " file does not exist" << endl;
	else {
		int a;
		for (int i = 0; i < st1.size(); i++) {
			f << " " << st1[i]->ID <<" "<< st1[i]->name<<" " <<st1[i]->score ;// write to file
		}
	}
	f.close();
	cout << " Done ! " << endl;
}
void LoadFromFile(string path) {
	fstream f;
	f.open(path, ios::in);
	if (f.fail()) 
		f << " no open file " << endl;
	else {
		string y; int x; float z;
		while (!f.eof()) {//eof() tra ve true neu ket thuc file
			f >> x;
			cout << x;
			f >> y;
			cout << "\t" << y;
			f >> z;
			cout << "\t\t" << z << endl;
		}
		f.close();
		cout << "Done! " << endl;
	}
}
void main()
{
	Student *st=new Student;
	int choose; 
	cout << "-----------------MENU------------------"<<endl;
	cout << "\t 1. Input "<<endl;
	cout << "\t 2. Display" << endl;
	cout << "\t 3. Save to file " << endl;
	cout << "\t 4. Load from file " << endl;
	cout << "\t 0. Exit" << endl;
	cout << "----------------------------------------"<<endl;
	cout << " Choose :"; cin >> choose;
	if (choose == 1)
	{
		addStudent(st);
		display();
		SaveToFile("Text.txt");


	}
	else
		if (choose == 2) display();
		else
			if (choose == 3) LoadFromFile("Text.txt");
	system("pause");

}

