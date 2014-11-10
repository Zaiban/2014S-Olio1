#pragma once
#include "Henkilo.h"
class Tyontekija :
	public Henkilo
{
public:
	Tyontekija();
	Tyontekija(string, string, string, string, string, double);
	Tyontekija(const Tyontekija &);
	~Tyontekija();
	Tyontekija& operator=(const Tyontekija &);

	string getIdentifier() const;
	double getSalary() const;
	void setIdentifier(string);
	void setSalary(double);

	void askFields();
	void print() const;
private:
	string identifier_;
	double salary_;
};

