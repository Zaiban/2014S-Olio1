#pragma once
#include "Henkilo.h"
class Opiskelija :
	public Henkilo
{
public:
	Opiskelija();
	Opiskelija(string, string, string, string, string);
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

