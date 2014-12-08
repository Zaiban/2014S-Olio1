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
	void setName(const string &name);

	void addStudent();
	void addTeacher();
	void pushStudent(const Opiskelija &student);
	void pushTeacher(const Opettaja &teacher);
	void printStudents() const;
	void printTeachers() const;
	void removeStudent(unsigned position);
	void removeTeacher(unsigned position);
	void updateStudent(unsigned position);
	void updateTeacher(unsigned position);
	void loadFromCSV();
	void saveToCSV();
private:
	string name_;
	vector<Opiskelija> students_;
	vector<Opettaja> teachers_;
};

