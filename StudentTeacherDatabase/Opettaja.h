#pragma once
#include "Tyontekija.h"
class Opettaja :
	public Tyontekija
{
public:
	Opettaja();
	Opettaja(string, string, string, string, string, double, string);
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

