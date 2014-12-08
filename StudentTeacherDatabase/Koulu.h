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

	// Asks USER to input the name for a new Study Program
	void addStudyProgram();
	// Prints the list of all Study Programs
	void printStudyPrograms() const;
	// Asks USER to select a Study Program
	// AND input data for a new Student
	void addStudentToStudyProgram();
	// Asks USER to select a Study Program
	// AND input data for a new Teacher
	void addTeacherToStudyProgram();
	// Prints the current amount of Study Programs
	void printStudyProgramCount() const;
	// Asks USER to select a Study Program
	// AND prints the list of all students on it
	void printStudyProgramStudents() const;
	// Asks USER to select a Study Program
	// AND prints the list of all teachers on it
	void printStudyProgramTeachers() const;
	// Asks USER the name of a Study Program
	// IF the Study Program exists it is then REMOVED
	void removeStudyProgram();
	// Asks USER the name of a Study Program AND Student number
	// IF the Study Program exists AND Student with the Student number exists,
	// the Student is REMOVED
	void removeStudentFromStudyProgram();
	// Asks USER the name of a Study Program AND Teacher identifier
	// IF the Study Program exists AND Teacher with the identIFier exists,
	// the Teacher is REMOVED
	void removeTeacherFromStudyProgram();
	// Asks USER the name of a Study Program
	// IF the Study Program exists, USER is asked to RENAME the Study Program
	void renameStudyProgram();
	// Asks USER the name of a Study Program AND Teacher identifier
	// IF the Study Program exists AND Teacher with the identifier exists,
	// USER is asked to UPDATE Teacher data
	void updateTeacherInStudyProgram();
	// Asks USER the name of a Study Program AND Student number
	// IF the Study Program exists AND Student with the Student number exists,
	// USER is asked to UPDATE Student data
	void updateStudentInStudyProgram();
	// Loads data from CSV files
	void loadFromCSV();
	// Saves data to CSV files
	void saveToCSV();

private:
	string name_;
	vector <Koulutusohjelma>studyPrograms_;
};

