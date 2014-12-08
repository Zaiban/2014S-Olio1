#include "Opiskelija.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Opiskelija::Opiskelija() : Henkilo(), studentNumber_("")
{
}
Opiskelija::Opiskelija(string firstName, string address, string phoneNumber, string lastName, string studentNumber) : 
	Henkilo(firstName, address, phoneNumber, lastName), studentNumber_(studentNumber)
{
}
Opiskelija::Opiskelija(const Opiskelija &org) :
Henkilo(org), studentNumber_(org.studentNumber_)
{
}
Opiskelija::~Opiskelija()
{
}
Opiskelija& Opiskelija::operator=(const Opiskelija &source)
{
	if (this != &source)
	{
		Henkilo::operator= (source);
		studentNumber_ = source.studentNumber_;
	}
	return *this;
}

string Opiskelija::getStudentNumber() const
{
	return studentNumber_;
}
void Opiskelija::setStudentNumber(string studentNumber)
{
	studentNumber_ = studentNumber;
}

void Opiskelija::askFields()
{
	Henkilo::askFields();
	cout << "Type student number? ";
	getline(cin, studentNumber_);
}

void Opiskelija::print() const
{
	Henkilo::print();
	cout << "Student number: " << studentNumber_ << endl;
}