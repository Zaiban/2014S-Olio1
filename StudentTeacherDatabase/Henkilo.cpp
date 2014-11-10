#include "Henkilo.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Henkilo::Henkilo() : firstName_(""), address_(""), phoneNumber_(""), lastName_("")
{
	cout << "Henkilo: def. constructor" << endl;
}
Henkilo::Henkilo(string firstName, string address, string phoneNumber, string lastName) :
	firstName_(firstName), address_(address), phoneNumber_(phoneNumber), lastName_(lastName)
{
	cout << "Henkilo: par. constructor" << endl;
}
Henkilo::Henkilo(const Henkilo &org) :
	firstName_(org.firstName_), address_(org.address_), phoneNumber_(org.phoneNumber_), lastName_(org.lastName_)
{
	cout << "Henkilo: copy" << endl;
}
Henkilo::~Henkilo()
{
	cout << "Henkilo: destructor" << endl;
}
Henkilo& Henkilo::operator= (const Henkilo &source)
{
	cout << "Henkilo: assignment" << endl;
	if (this != &source)
	{
		firstName_ = source.firstName_;
		address_ = source.address_;
		phoneNumber_ = source.phoneNumber_;
		lastName_ = source.lastName_;
	}
	return *this;
}
string Henkilo::getFirstName() const
{
	return firstName_;
}
string Henkilo::getAddress() const
{
	return address_;
}
string Henkilo::getPhoneNumber() const
{
	return phoneNumber_;
}
string Henkilo::getLastName() const
{
	return lastName_;
}
void Henkilo::setFirstName(string firstName)
{
	firstName_ = firstName;
}
void Henkilo::setAddress(string address)
{
	address_ = address;
}
void Henkilo::setPhoneNumber(string phoneNumber)
{
	phoneNumber_ = phoneNumber;
}
void Henkilo::setLastName(string lastName)
{
	lastName_ = lastName;
}

void Henkilo::askFields()
{
	cin.ignore();
	cout << "Type first name? ";
	getline(cin, firstName_);
	cout << "Type address? ";
	getline(cin, address_);
	cout << "Type phone number? ";
	getline(cin, phoneNumber_);
	cout << "Type last name? ";
	getline(cin, lastName_);
}
void Henkilo::print() const
{
	cout << "\nFirst name: " << firstName_ << endl;
	cout << "Address: " << address_ << endl;
	cout << "Phone number: " << phoneNumber_ << endl;
	cout << "Last name: " << lastName_ << endl;
}