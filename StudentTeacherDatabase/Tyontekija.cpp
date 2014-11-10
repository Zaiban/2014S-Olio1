#include "Tyontekija.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Tyontekija::Tyontekija() :Henkilo(), identifier_(""), salary_(0)
{
	cout << "Tyontekija: def. constructor" << endl;
}
Tyontekija::Tyontekija(string firstName, string address, string phoneNumber, string lastName, string identifier, double salary) : 
	Henkilo(firstName, address, phoneNumber, lastName), identifier_(identifier), salary_(salary)
{
	cout << "Tyontekija: par. constructor" << endl;
}
Tyontekija::Tyontekija(const Tyontekija &org) :
Henkilo(org), identifier_(org.identifier_), salary_(org.salary_)
{
	cout << "Tyontekija: copy" << endl;
}
Tyontekija::~Tyontekija()
{
	cout << "Tyontekija: destructor" << endl;
}
Tyontekija& Tyontekija::operator=(const Tyontekija &source)
{
	cout << "Tyontekija: assignment" << endl;
	if (this != &source)
	{
		Henkilo::operator= (source);
		identifier_ = source.identifier_;
		salary_ = source.salary_;
	}
	return *this;
}

string Tyontekija::getIdentifier() const
{
	return identifier_;
}
double Tyontekija::getSalary() const
{
	return salary_;
}
void Tyontekija::setIdentifier(string identifier)
{
	identifier_ = identifier;
}
void Tyontekija::setSalary(double salary)
{
	salary_ = salary;
}

void Tyontekija::askFields()
{
	string salary;
	Henkilo::askFields();
	cout << "Type identifier? ";
	getline(cin, identifier_);
	cout << "Type salary? ";
	getline(cin, salary);
	salary_ = atof(salary.c_str());
}

void Tyontekija::print() const
{
	Henkilo::print();
	cout << "Identifier: " << identifier_ << endl;
	cout << "Salary: " << salary_ << endl;
}