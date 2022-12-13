#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include "FIO.h"
using namespace std;

class Bank {
private:
    FIO client;
    int id;
    double sum;
public:
    Bank();
    Bank(int, int, FIO);
    Bank(Bank*);
    //static void addperson(Bank*);
   // static void saveperson(Bank*);
    //static void loadperson(Bank*);
    //static void display(Bank*);
    int Getid();
    double Getsum();
    char* Getname();
    char* Getsurname();
    char* Getoname();
    friend istream& operator>>(istream&, Bank&);
    friend ostream& operator<<(ostream&, Bank&);


    Bank operator+(double value)
    {
        this->sum += value;
    }

};