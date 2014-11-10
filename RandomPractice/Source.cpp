#include "Suorakaide.h"
#include "Ympyra.h"
#include <iostream>

using std::cout; using std::endl;

int main()
{

	Ympyra circle(1);
	Suorakaide box(2,3);

	cout << circle.area() << endl;
	cout << box.area() << endl;

	Kuvio *p_circle = &circle;
	Kuvio *p_box = &box;

	cout << p_circle->area() << endl;
	cout << p_box->area() << endl;

	


	system("pause");
	return 0;
}