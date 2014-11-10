#pragma once
#include "Tyontekija.h"
class Sihteeri :
	public Tyontekija
{
public:
	Sihteeri();
	Sihteeri(string, string, string, string, string, double, string);
	Sihteeri(const Sihteeri &);
	~Sihteeri();

	string getResponsibility() const;
	void setResponsibility(string);

	void askFields();
	void print() const;
private:
	string responsibility_;
};

