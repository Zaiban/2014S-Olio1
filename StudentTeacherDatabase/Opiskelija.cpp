#include "Opiskelija.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Opiskelija::Opiskelija() : Henkilo(), studentNumber_("")
{
	cout << "Opiskelija: def. constructor" << endl;
}
Opiskelija::Opiskelija(string firstName, string address, string phoneNumber, string lastName, string studentNumber) : 
	Henkilo(firstName, address, phoneNumber, lastName), studentNumber_(studentNumber)
{
	cout << "Opiskelija: par. constructor" << endl;
}
Opiskelija::Opiskelija(const Opiskelija &org) :
Henkilo(org), studentNumber_(org.studentNumber_)
{
	cout << "Opiskelija: copy" << endl;
}
Opiskelija::~Opiskelija()
{
	cout << "Opiskelija: destructor" << endl;
}
Opiskelija& Opiskelija::operator=(const Opiskelija &source)
{
	cout << "Opiskelija: assignment" << endl;
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