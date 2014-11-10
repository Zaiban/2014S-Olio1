#pragma once
#include <string>
#include <vector>
#include "Opiskelija.h"
#include "Opettaja.h"
using std::string; using std::vector;
class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(string);
	~Koulutusohjelma();

	string getName() const;
	vector<Opiskelija> getStudents() const;
	vector<Opettaja> getTeachers() const;
	void setName(string);
	void setStudents(vector<Opiskelija>);
	void setTeachers(vector<Opettaja>);

	void addStudent();
	void addTeacher();
	void printStudents() const;
	void printTeachers() const;
private:
	string name_;
	vector<Opiskelija> students_;
	vector<Opettaja> teachers_;
};

