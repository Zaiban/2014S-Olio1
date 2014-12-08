#include "Koulu.h"
#include <iostream>
#include <vector>
#include <fstream>
using std::cout; using std::cin; using std::endl;

Koulu::Koulu() : name_("")
{
}
Koulu::Koulu(string name) : name_(name)
{
}
Koulu::Koulu(const Koulu &org) : name_(org.name_)
{
}
Koulu& Koulu::operator=(const Koulu &source)
{
	if (this != &source)
	{
		name_ = source.name_;
	}
	return *this;
}
Koulu::~Koulu()
{
}
string Koulu::getName() const
{
	return name_;
}
void Koulu::setName(string name)
{
	name_ = name;
}

void Koulu::addStudyProgram()
{
	string name;
	cout << "Input the name of the Study Program to add: ";
	std::getline(cin, name);
	studyPrograms_.push_back(Koulutusohjelma(name));

}
void Koulu::printStudyPrograms() const
{
	cout << "\n-Study Programs-" << endl;
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		cout << studyPrograms_.at(i).getName() << endl;
	}
}
void Koulu::addStudentToStudyProgram()
{
	string name;
	cout << "\nInput the name of the study program"
		<< "\nwhere you want to add the new Student: ";
	std::getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			studyPrograms_.at(i).addStudent();
			cout << "Student added" << endl;
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;

}
void Koulu::addTeacherToStudyProgram()
{
	string name;
	cout << "\nInput the name of the study program"
		<< "\nwhere you want to add the new Teacher: ";
	std::getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			studyPrograms_.at(i).addTeacher();
			cout << "Teacher added" << endl;
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;
}
void Koulu::printStudyProgramCount() const
{
	cout << "Number of study programs: " << studyPrograms_.size() << endl;
}
void Koulu::printStudyProgramStudents() const
{
	string name;
	cout << "\nInput the name of the study program"
		<< "\nthe list of students on that program is then printed: ";
	getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			studyPrograms_.at(i).printStudents();
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;
}
void Koulu::printStudyProgramTeachers() const
{
	string name;
	cout << "\nInput the name of the study program"
		<< "\nthe list of teachers on that program is then printed: ";
	getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			studyPrograms_.at(i).printTeachers();
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;
}
void Koulu::removeStudyProgram()
{
	string name;
	cout << "Input the name of the Study Program to remove: ";
	std::getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			studyPrograms_.erase(studyPrograms_.begin()+i);
			cout << "Study Program " << name << " removed" << endl;
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;
}
void Koulu::removeStudentFromStudyProgram()
{
	string name;
	string studentNumber;
	cout << "Input the name of the Study Program where the Student is removed ";
	std::getline(cin, name);
	cout << "Input the student number of the Student to be removed ";
	std::getline(cin, studentNumber);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			std::vector<Opiskelija> students;
			students = studyPrograms_.at(i).getStudents();
			for (unsigned j = 0; j < students.size(); j++)
			{
				if (students.at(j).getStudentNumber() == studentNumber)
				{
					studyPrograms_.at(i).removeStudent(j);
					cout << "Student number " << studentNumber << " removed" << endl;
					return;
				}
			}
		}
	}
	cout << "\nError: Study Program and/or Student Number not found" << endl;
}
void Koulu::removeTeacherFromStudyProgram()
{
	string name;
	string identifier;
	cout << "Input the name of the Study Program where the Teacher is removed ";
	std::getline(cin, name);
	cout << "Input the Teacher identifier of the Teacher to be removed ";
	std::getline(cin, identifier);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			std::vector<Opettaja> teachers;
			teachers = studyPrograms_.at(i).getTeachers();
			for (unsigned j = 0; j < teachers.size(); j++)
			{
				if (teachers.at(j).getIdentifier() == identifier)
				{
					studyPrograms_.at(i).removeTeacher(j);
					cout << "Teacher identifier " << identifier << " removed" << endl;
					return;
				}
			}
		}
	}
	cout << "\nError: Study Program and/or Teacher identifier not found" << endl;
}
void Koulu::renameStudyProgram()
{
	string name;
	cout << "Input the name of the Study Program to rename: ";
	std::getline(cin, name);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			cout << "Input a new name for the Study Program: ";
			std::getline(cin, name);
			studyPrograms_.at(i).setName(name);
			cout << "Study Program renamed" << endl;
			return;
		}
	}
	cout << "\nError: Study Program not found" << endl;
}
void Koulu::updateStudentInStudyProgram()
{
	string name;
	string studentNumber;
	cout << "Input the name of the Study Program where the Student is updated ";
	std::getline(cin, name);
	cout << "Input the student number of the Student to be updated ";
	std::getline(cin, studentNumber);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			std::vector<Opiskelija> students;
			students = studyPrograms_.at(i).getStudents();
			for (unsigned j = 0; j < students.size(); j++)
			{
				if (students.at(j).getStudentNumber() == studentNumber)
				{
					studyPrograms_.at(i).updateStudent(j);
					cout << "Student number " << studentNumber << " updated" << endl;
					return;
				}
			}
		}
	}
	cout << "\nError: Study Program and/or Student Number not found" << endl;
}
void Koulu::updateTeacherInStudyProgram()
{
	string name;
	string identifier;
	cout << "Input the name of the Study Program where the Student is updated ";
	std::getline(cin, name);
	cout << "Input the Teacher identifier of the Teacher to be updated ";
	std::getline(cin, identifier);
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		if (studyPrograms_.at(i).getName() == name)
		{
			std::vector<Opettaja> teachers;
			teachers = studyPrograms_.at(i).getTeachers();
			for (unsigned j = 0; j < teachers.size(); j++)
			{
				if (teachers.at(j).getIdentifier() == identifier)
				{
					studyPrograms_.at(i).updateTeacher(j);
					cout << "Teacher identifier " << identifier << " updated" << endl;
					return;
				}
			}
		}
	}
	cout << "\nError: Study Program and/or Teacher identifier not found" << endl;
}
void Koulu::loadFromCSV()
{
	std::ifstream file;
	string data;
	vector<string> tokenized;

	file.open("Koulutusohjelma.csv");
	if (file.is_open())
	{
		while (std::getline(file, data))
		{
			studyPrograms_.push_back(Koulutusohjelma(data));
		}
	}
	else std::cerr << "Error: Could not open file" << endl;
	file.close();

	file.open("Opiskelija.csv");
	if (file.is_open())
	{
		while (std::getline(file, data))
		{
			while (true)
			{
				if (data.find(";") != string::npos)
				{
					tokenized.push_back(data.substr(0, data.find(";")));
					data.erase(0, data.find(";") + 1);
				}
				else
				{
					tokenized.push_back(data);
					break;
				}	
			}
			for (unsigned i = 0; i < studyPrograms_.size(); i++)
			{
				if (tokenized.at(0) == studyPrograms_.at(i).getName())
				{
					studyPrograms_.at(i).pushStudent(Opiskelija(tokenized[1], tokenized[3],
						tokenized[4], tokenized[2], tokenized[5]));
				}
			}
			tokenized.clear();
		}
	}
	else std::cerr << "Error: Could not open file" << endl;
	file.close();

	file.open("Opettaja.csv");
	if (file.is_open())
	{
		while (std::getline(file, data))
		{
			while (true)
			{
				if (data.find(";") != string::npos)
				{
					tokenized.push_back(data.substr(0, data.find(";")));
					data.erase(0, data.find(";") + 1);
				}
				else
				{
					tokenized.push_back(data);
					break;
				}
			}
			for (unsigned i = 0; i < studyPrograms_.size(); i++)
			{
				if (tokenized.at(0) == studyPrograms_.at(i).getName())
				{
					studyPrograms_.at(i).pushTeacher(Opettaja(tokenized[1], tokenized[3],
						tokenized[4], tokenized[2], tokenized[5], tokenized[6], tokenized[7]));
				}
			}
			tokenized.clear();
		}
	}
	else std::cerr << "Error: Could not open file" << endl;
	file.close();
}
void Koulu::saveToCSV()
{
	std::ofstream file;
	vector<Opiskelija> students;
	vector<Opettaja> teachers;

	file.open("Koulutusohjelma.csv");
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		file << studyPrograms_.at(i).getName() << endl;
	}
	file.close();

	file.open("Opiskelija.csv");
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		students = studyPrograms_.at(i).getStudents();

		for (unsigned j = 0; j < students.size(); j++)
		{
			file << studyPrograms_.at(i).getName() << ";";
			file << students.at(j).getFirstName() << ";";
			file << students.at(j).getLastName() << ";";
			file << students.at(j).getAddress() << ";";
			file << students.at(j).getPhoneNumber() << ";";
			file << students.at(j).getStudentNumber() << endl;
		}
		
	}
	file.close();

	file.open("Opettaja.csv");
	for (unsigned i = 0; i < studyPrograms_.size(); i++)
	{
		teachers = studyPrograms_.at(i).getTeachers();
		
		for (unsigned j = 0; j < teachers.size(); j++)
		{
			file << studyPrograms_.at(i).getName() << ";";
			file << teachers.at(j).getFirstName() << ";";
			file << teachers.at(j).getLastName() << ";";
			file << teachers.at(j).getAddress() << ";";
			file << teachers.at(j).getPhoneNumber() << ";";
			file << teachers.at(j).getIdentifier() << ";";
			file << teachers.at(j).getSalary() << ";";
			file << teachers.at(j).getFieldOfTeaching() << endl;
		}
	}
	file.close();
	
}