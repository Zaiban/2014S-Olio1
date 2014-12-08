#pragma once
#include "Henkilo.h"
class Opiskelija :
	public Henkilo
{
public:
	Opiskelija();
	Opiskelija(string firstName, string address, string phoneNumber, string lastName, string studentNumber);
	Opiskelija(const Opiskelija &);
	~Opiskelija();
	Opiskelija& operator=(const Opiskelija &);

	string getStudentNumber() const;
	void setStudentNumber(string);

	void askFields();
	void print() const;
private:
	string studentNumber_;
};

