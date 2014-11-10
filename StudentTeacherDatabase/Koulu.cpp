#include "Koulu.h"
#include <iostream>
using std::cout; using std::cin; using std::endl;

Koulu::Koulu() : name_("")
{
}
Koulu::Koulu(string name) : name_(name)
{
}
Koulu::Koulu(const Koulu &org) : name_(org.name_)
{
}
Koulu& Koulu::operator=(const Koulu &source)
{
	if (this != &source)
	{
		name_ = source.name_;
	}
	return *this;
}
Koulu::~Koulu()
{
}
string Koulu::getName() const
{
	return name_;
}
void Koulu::setName(string name)
{
	name_ = name;
}

void Koulu::addStudyProgram()
{
	string name;
	cout << "Input the name of the Study Program: ";
	getline(cin, name);
	studyPrograms_.push_back(Koulutusohjelma(name));

}
void Koulu::printStudyPrograms() const
{
	cout << "\n-Study Programs-" << endl;
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		cout << "[" << i << "] " << studyPrograms_.at(i).getName() << endl;
	}
}
void Koulu::addStudentToStudyProgram()
{
	int selection;
	printStudyPrograms();
	cout << "\nInput the number of the study program"
		<< "\nwhere you want to add the new Student: ";
	cin >> selection;
	if (selection >= 0 && selection <= studyPrograms_.size())
	{
		studyPrograms_.at(selection).addStudent();
	}
	else
		cout << "Invalid input" << endl;
}
void Koulu::addTeacherToStudyProgram()
{
	int selection;
	printStudyPrograms();
	cout << "Input the number of the study program"
		<< "\nwhere you want to add the new Teacher: ";
	cin >> selection;
	if (selection >= 0 && selection <= studyPrograms_.size())
	{
		studyPrograms_.at(selection).addTeacher();
	}
	else
		cout << "Invalid input" << endl;
}
void Koulu::printStudyProgramCount() const
{
	cout << "Number of study programs: " << studyPrograms_.size() << endl;
}
void Koulu::printStudyProgramStudents() const
{
	int selection;
	cout << "\nInput the number of the study program"
		<< "\nthe list of students on that program is then printed: ";
	cin >> selection;
	if (selection >= 0 && selection <= studyPrograms_.size())
	{
		studyPrograms_.at(selection).printStudents();
	}
	else
		cout << "Invalid input" << endl;
}
void Koulu::printStudyProgramTeachers() const
{
	int selection;
	cout << "\nInput the number of the study program"
		<< "\nthe list of teachers on that program is then printed: ";
	cin >> selection;
	if (selection >= 0 && selection <= studyPrograms_.size())
	{
		studyPrograms_.at(selection).printTeachers();
	}
	else
		cout << "Invalid input" << endl;
}