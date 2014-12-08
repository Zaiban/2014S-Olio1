#include "Henkilo.h"
#include <iostream>
using std::cout; using std::endl; using std::cin;

Henkilo::Henkilo() : firstName_(""), address_(""), phoneNumber_(""), lastName_("")
{
}
Henkilo::Henkilo(string firstName, string address, string phoneNumber, string lastName) :
	firstName_(firstName), address_(address), phoneNumber_(phoneNumber), lastName_(lastName)
{
}
Henkilo::Henkilo(const Henkilo &org) :
	firstName_(org.firstName_), address_(org.address_), phoneNumber_(org.phoneNumber_), lastName_(org.lastName_)
{
}
Henkilo::~Henkilo()
{
}
Henkilo& Henkilo::operator= (const Henkilo &source)
{
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
	cout << "Type first name? ";
	std::getline(cin, firstName_);
	cout << "Type address? ";
	std::getline(cin, address_);
	cout << "Type phone number? ";
	std::getline(cin, phoneNumber_);
	cout << "Type last name? ";
	std::getline(cin, lastName_);
}
void Henkilo::print() const
{
	cout << "\nFirst name: " << firstName_ << endl;
	cout << "Address: " << address_ << endl;
	cout << "Phone number: " << phoneNumber_ << endl;
	cout << "Last name: " << lastName_ << endl;
}