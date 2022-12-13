#pragma once
#include "Bank.h"
#include <list>

void PrintList(list<Bank>&, ostream&);

void FindElem(list<Bank>& ls, int id);
void SaveList(list<Bank>& ls);
void LoadList(list<Bank>& ls);
void AddElem(list<Bank>& ls);
void AddElem(list<Bank>& ls, int ind);
void Sort(list<Bank>& ls);
void AddsumEl(list<Bank>& ls);
void RemoveFirst(list<Bank>& ls);