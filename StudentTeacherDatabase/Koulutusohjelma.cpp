#include "Koulutusohjelma.h"
#include <iostream>
#include <fstream>
using std::cout; using std::endl;

Koulutusohjelma::Koulutusohjelma() :name_(""), students_(), teachers_()
{
}
Koulutusohjelma::Koulutusohjelma(string name) : name_(name), students_(), teachers_()
{

}
Koulutusohjelma::~Koulutusohjelma()
{
}
string Koulutusohjelma::getName() const
{
	return name_;
}
vector<Opiskelija> Koulutusohjelma::getStudents() const
{
	return students_;
}
vector<Opettaja> Koulutusohjelma::getTeachers() const
{
	return teachers_;
}
void Koulutusohjelma::setName(const string &name)
{
	name_ = name;
}

void Koulutusohjelma::addStudent()
{
	Opiskelija adder;
	adder.askFields();
	students_.push_back(adder);
}
void Koulutusohjelma::addTeacher()
{
	Opettaja adder;
	adder.askFields();
	teachers_.push_back(adder);
}
void Koulutusohjelma::pushStudent(const Opiskelija &student)
{
	students_.push_back(student);
}
void Koulutusohjelma::pushTeacher(const Opettaja &teacher)
{
	teachers_.push_back(teacher);
}
void Koulutusohjelma::printStudents() const
{
	cout << "-Students-" << endl;
	for (unsigned i = 0; i < students_.size(); i++)
		students_.at(i).print();
}
void Koulutusohjelma::printTeachers() const
{
	cout << "-Teachers-" << endl;
	for (unsigned i = 0; i < teachers_.size(); i++)
		teachers_.at(i).print();
}
void Koulutusohjelma::removeStudent(unsigned position)
{
	if (position < students_.size())
		students_.erase(students_.begin() + position);
	else
		cout << "Error: invalid position" << endl;
}
void Koulutusohjelma::removeTeacher(unsigned position)
{
	if (position < teachers_.size())
		teachers_.erase(teachers_.begin() + position);
	else
		cout << "Error: invalid position" << endl;
}
void Koulutusohjelma::updateStudent(unsigned position)
{
	if (position < students_.size())
		students_.at(position).askFields();
	else
		cout << "Error: invalid position" << endl;
}
void Koulutusohjelma::updateTeacher(unsigned position)
{
	if (position < teachers_.size())
		teachers_.at(position).askFields();
	else
		cout << "Error: invalid position" << endl;
}