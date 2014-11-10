#pragma once
#include "Koulutusohjelma.h"
class Koulu
{
public:
	Koulu();
	Koulu(string);
	Koulu(const Koulu&);
	Koulu& operator=(const Koulu &);
	~Koulu();
	string getName() const;
	void setName(string);

	// Asks user to input the name for a new study program
	void addStudyProgram();
	// Prints the list of all study programs
	void printStudyPrograms() const;
	// Asks user to select a study program
	// and input data for a new student
	void addStudentToStudyProgram();
	// Asks user to select a study program
	// and input data for a new teacher
	void addTeacherToStudyProgram();
	// Prints the current amount of study programs
	void printStudyProgramCount() const;
	// Asks user to select a study program
	// and prints the list of all students on it
	void printStudyProgramStudents() const;
	// Asks user to select a study program
	// and prints the list of all teachers on it
	void printStudyProgramTeachers() const;

private:
	string name_;
	vector <Koulutusohjelma>studyPrograms_;
};

