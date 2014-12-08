#pragma once
#include "Henkilo.h"
class Tyontekija :
	public Henkilo
{
public:
	Tyontekija();
	Tyontekija(string, string, string, string, string, string);
	Tyontekija(const Tyontekija &);
	~Tyontekija();
	Tyontekija& operator=(const Tyontekija &);

	string getIdentifier() const;
	string getSalary() const;
	void setIdentifier(string);
	void setSalary(string);

	void askFields();
	void print() const;
private:
	string identifier_;
	string salary_;
};

