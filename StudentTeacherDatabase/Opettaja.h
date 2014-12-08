#pragma once
#include "Tyontekija.h"
class Opettaja :
	public Tyontekija
{
public:
	Opettaja();
	Opettaja(string firstName, string address, string phoneNumber, string lastName, string identifier, string salary, string fieldOfTeaching);
	Opettaja(const Opettaja &);
	~Opettaja();
	Opettaja& operator=(const Opettaja &);

	string getFieldOfTeaching() const;
	void setFieldOfTeaching(string);

	void askFields();
	void print() const;
private:
	string fieldOfTeaching_;
};

