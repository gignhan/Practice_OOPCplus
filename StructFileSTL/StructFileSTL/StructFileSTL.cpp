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
	Student *s1 = new Student;
	cout << "Enter ID   :"; cin >> s1->ID;
	cin.ignore();
	cout << "Enter name :";
	getline(cin, s1->name);
	do {
		cout << "Enter Score (0 -> 10): "; cin >> s1->score;
	} while (s1->score < 0 || s1->score>10);
	//check ID 
	for (int i = 0; i < st1.size();)
	{
		s->ID = st1[i]->ID;
		if (s1->ID == s->ID)
		{
			cout << "Enter again ID :";
			cin >> s1->ID;
		}
		else i++;
	}
	st1.push_back(s1);

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
		for (int i = 0; i < st1.size(); i++) {
			f<< st1[i]->ID <<" "<< st1[i]->name<<" " <<st1[i]->score<<endl ;// write to file
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
		st1.clear();
		string y; int x; float z; 
		while (!f.eof()) {//eof() tra ve true neu ket thuc file
			Student *s1 = new Student;
			f >> x; s1->ID = x;
			f >> y; s1->name = y;
			f >> z; s1->score = z;
			st1.push_back(s1);
		}
		f.close();
		cout << "Done! " << endl;
	}
}
void Menu()
{
	cout << "-----------------MENU------------------" << endl;
	cout << "\t 1. Input " << endl;
	cout << "\t 2. Display" << endl;
	cout << "\t 3. Save to file " << endl;
	cout << "\t 4. Load from file " << endl;
	cout << "\t 0. Exit" << endl;
	cout << "----------------------------------------" << endl;
}
int main()
{
	Student *st=new Student;
	int choose; 
	Menu();
	do {
		system("cls");
		Menu();
		cout << " Choose :"; cin >> choose; 
		if (choose == 1) addStudent(st);
		else if (choose == 2) display();
		else if (choose == 3) SaveToFile("Text.txt");
		else if (choose == 4) LoadFromFile("Text.txt");
		else if (choose == 0) return 0;
		else choose = 5;
		system("pause");
	} while (choose != 0);
	
	system("pause");
}

