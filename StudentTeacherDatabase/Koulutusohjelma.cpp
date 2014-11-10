#include "Koulutusohjelma.h"
#include <iostream>
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
void Koulutusohjelma::setName(string name)
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