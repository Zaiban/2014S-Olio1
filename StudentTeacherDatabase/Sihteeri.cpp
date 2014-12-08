#include "Sihteeri.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Sihteeri::Sihteeri() : Tyontekija(), responsibility_("")
{
}
Sihteeri::Sihteeri(string firstName, string address, string phoneNumber, string lastName, string identifier, string salary, string responsibility) :
	Tyontekija(firstName, address, phoneNumber, lastName, identifier, salary), responsibility_(responsibility)
{
}
Sihteeri::Sihteeri(const Sihteeri &org) :
Tyontekija(org), responsibility_(org.responsibility_)
{
}
Sihteeri::~Sihteeri()
{
}

string Sihteeri::getResponsibility() const
{
	return responsibility_;
}
void Sihteeri::setResponsibility(string responsibility)
{
	responsibility_ = responsibility;
}

void Sihteeri::askFields()
{
	Tyontekija::askFields();
	cout << "Type responsibility? ";
	getline(cin, responsibility_);
}

void Sihteeri::print() const
{
	Tyontekija::print();
	cout << "Responsibility: " << responsibility_ << endl;
}