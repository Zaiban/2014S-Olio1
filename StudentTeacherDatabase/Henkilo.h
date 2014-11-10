#pragma once
#include <string>
using std::string;
class Henkilo
{
public:
	Henkilo();
	Henkilo(string, string, string, string);
	Henkilo(const Henkilo &);
	~Henkilo();
	Henkilo& operator=(const Henkilo &);

	string getFirstName() const;
	string getAddress() const;
	string getPhoneNumber() const;
	string getLastName() const;
	void setFirstName(string);
	void setAddress(string);
	void setPhoneNumber(string);
	void setLastName(string);

	void askFields();
	void print() const;
private:
	string firstName_;
	string address_;
	string phoneNumber_;
	string lastName_;
};

