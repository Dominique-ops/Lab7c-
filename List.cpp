#include "List.h"


static int counter = 0;


void PrintList(list<Bank>& ls, ostream& os)
{
	for (auto v : ls)
		os << v;
}

void FindElem(list<Bank>& ls, int id)
{

	bool f = false;
	for (auto v : ls)
		if (v.Getsum() == id)
		{
			f = true;
			cout << v;
		}
	if (!f)
		cout << "Данные не найдены" << endl;

}

void SaveList(list<Bank>& ls)
{
	ofstream file("DataBase.txt");
	file << counter << endl;
	for (auto v : ls)
		file << v;
	file.close();
}

void LoadList(list<Bank>& ls)
{
	ifstream file("DataBase.txt");
	file >> counter;
	Bank* test1 = new Bank[counter];
	for (int i = 0; i < counter; i++) {
		file >> (test1[i]);
		ls.push_back(test1[i]);
	}
	file.close();
}

void AddElem(list<Bank>& ls)
{
	Bank* test1 = new Bank();
	cin >> (*test1);
	ls.push_back(*test1);
	counter++;
}

void AddElem(list<Bank>& ls, int ind)
{
	Bank* test1 = new Bank();
	cin >> (*test1);
	list<Bank>::iterator it = ls.begin();
	advance(it, ind);
	ls.insert(it, (*test1));
	counter++;
}

void Sort(list<Bank>& ls)
{
	ls.sort([](Bank w1, Bank w2) { return w1.Getsum() < w2.Getsum(); });
}

void RemoveFirst(list<Bank>& ls)
{
	ls.pop_front();
	counter--;
}

void AddsumEl(list<Bank>& ls) {
	bool f = false;
	cout << "Введите id" << endl;
	int n;
	cin >> n;
	for (auto v : ls)
		if (v.Getid() == n)
		{
			double d;
			cout << "Введите сумму" << endl;
			cin >> d;
			f = true;
			//*v + d;
		}
	if (!f)
		cout << "Данные не найдены" << endl;
}