#include "Koulu.h"
#include <iostream>

using std::cout; using std::endl;

int main()
{

	Koulu tamkki;
	
	tamkki.addStudyProgram();
	tamkki.addStudyProgram();

	tamkki.addStudentToStudyProgram();
	tamkki.addStudentToStudyProgram();

	tamkki.printStudyPrograms();
	tamkki.printStudyProgramCount();

	tamkki.printStudyProgramStudents();

	system("pause");
	return 0;
}