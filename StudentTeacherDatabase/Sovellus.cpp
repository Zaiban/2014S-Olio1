#include "Sovellus.h"
#include <iostream>
#include <string>
#include <stdexcept>
using std::cout; using std::endl; using std::string;

Sovellus::Sovellus()
{
}


Sovellus::~Sovellus()
{
}

void Sovellus::aja()
{
	string input;
	int choice;
	while (true)
	{
	cout << "\n1) Lisää koulutusohjelma"
		<< "\n2) Tulosta koulutusohjelmien nimet"
		<< "\n3) Tulosta koulutusohjelmien määrä"
		<< "\n4) Lisää koulutusohjelmaan opettaja"
		<< "\n5) Tulosta koulutusohjelman opettajat"
		<< "\n6) Lisää koulutusohjelmaan opiskelija"
		<< "\n7) Tulosta koulutusohjelman opiskelijat"
		<< "\n8) Poista koulutusohjelma"
		<< "\n9) Poista opettaja"
		<< "\n10) Poista opiskelija"
		<< "\n11) Päivitä koulutusohjelman nimi"
		<< "\n12) Päivitä opettajan tiedot"
		<< "\n13) Päivitä opiskelijan tiedot"
		<< "\n14) Lue tiedot"
		<< "\n15) Tallenna tiedot"
		<< "\n0) Lopeta" << endl;

	cout << "Give input: ";
	std::getline(std::cin, input);
	choice = -1;
	// std::stoi throws invalid_argument if there is no valid int in the input
	try{ choice = std::stoi(input, nullptr); }
	catch (const std::invalid_argument &ia){
		cout << "\nError: invalid input" << endl;
	}

	switch (choice){
	case 1:
		koulu.addStudyProgram();
		break;
	case 2:
		koulu.printStudyPrograms();
		break;
	case 3:
		koulu.printStudyProgramCount();
		break;
	case 4:
		koulu.addTeacherToStudyProgram();
		break;
	case 5:
		koulu.printStudyProgramTeachers();
		break;
	case 6:
		koulu.addStudentToStudyProgram();
		break;
	case 7:
		koulu.printStudyProgramStudents();
		break;
	case 8:
		koulu.removeStudyProgram();
		break;
	case 9:
		koulu.removeTeacherFromStudyProgram();
		break;
	case 10:
		koulu.removeStudentFromStudyProgram();
		break;
	case 11:
		koulu.renameStudyProgram();
		break;
	case 12:
		koulu.updateTeacherInStudyProgram();
		break;
	case 13:
		koulu.updateStudentInStudyProgram();
		break;
	case 14:
		koulu.loadFromCSV();
		break;
	case 15:
		koulu.saveToCSV();
		break;
	case 0:
		return;
	}
	}
}