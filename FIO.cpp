#include "FIO.h"



FIO::FIO() {
	name = new char[20];
	surname = new char[20];
	oname = new char[20];
	strcpy(name, "Ivan");
	strcpy(surname, "Ivanov");
	strcpy(oname, "Ivanovich");

}

FIO::FIO(char* n, char* s, char* o)
{
	name = n;
	surname = s;
	oname = o;
}

istream& operator>>(istream& ifs, FIO o) {

	char* surname = new char[50];
	char* name = new char[50];
	char* oname = new char[50];

	cout << "¬ведите фамилию: ";
	ifs >> surname;

	cout << "¬ведите им€: ";
	ifs>> name;

	cout << "¬ведите отчество : ";
	ifs >> oname;
	return ifs;
}
ostream& operator<<(ostream& out, FIO& f) {
	out << f.surname << endl;
	out << f.name << endl; 
	out << f.oname << endl;
	return out;

}