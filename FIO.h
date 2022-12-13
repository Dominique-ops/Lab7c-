#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
class FIO
{
private:
	friend class Bank;
	char* surname;
	char* name;
	char* oname;
public:
	FIO();
	FIO(char*, char*, char*);

	FIO operator =(FIO& other) {
		surname = other.surname;
		name = other.name;
		oname = other.oname;
		return(*this);
	}

	friend istream& operator>>(istream& ifs, FIO o);
	friend ostream& operator<<(ostream&, FIO&);
};