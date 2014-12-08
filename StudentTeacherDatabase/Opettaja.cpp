#include "Opettaja.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Opettaja::Opettaja() : Tyontekija(), fieldOfTeaching_("")
{
}
Opettaja::Opettaja(string firstName, string address, string phoneNumber, string lastName, string identifier, string salary, string fieldOfTeaching) :
	Tyontekija(firstName, address, phoneNumber, lastName, identifier, salary), fieldOfTeaching_(fieldOfTeaching)
{
}
Opettaja::Opettaja(const Opettaja &org) :
Tyontekija(org), fieldOfTeaching_(org.fieldOfTeaching_)
{
}
Opettaja::~Opettaja()
{
}
Opettaja& Opettaja::operator=(const Opettaja &source)
{
	if (this != &source)
	{
		Tyontekija::operator= (source);
		fieldOfTeaching_ = source.fieldOfTeaching_;
	}
	return *this;
}

string Opettaja::getFieldOfTeaching() const
{
	return fieldOfTeaching_;
}
void Opettaja::setFieldOfTeaching(string fieldOfTeaching)
{
	fieldOfTeaching_ = fieldOfTeaching;
}

void Opettaja::askFields()
{
	Tyontekija::askFields();
	cout << "Type field of teaching? ";
	getline(cin, fieldOfTeaching_);
}
void Opettaja::print() const
{
	Tyontekija::print();
	cout << "Field of teaching: " << fieldOfTeaching_ << endl;

}