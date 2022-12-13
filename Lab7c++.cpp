#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "Bank.h"
#include "FIO.h"
#include "List.h"

using namespace std;




int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    list<Bank> ls;
    ifstream file;
    file.open("DataBase.txt");
    if (!file.is_open())
    {
        cout << "Файл не обнаружен, создание новой базы данных!" << endl;
        AddElem(ls);
    }
    else {
        LoadList(ls);
    }
    while (true)
    {
        int  item = 0;
        printf_s("                                     \n");
        printf_s("- Добавить новый счет             1 -\n");
        printf_s("- Информация о счете              2 -\n");
        printf_s("- сортировка по cумме             3 -\n");
        printf_s("- добавить в заданную позицию     4 -\n");
        printf_s("- удалить из начала списка        5 -\n");
        printf_s("- Поиск по номеру счета           6 -\n");
        printf_s("- Добавить к сумме                7 -\n");
        printf_s("- Выйти                           8 -\n");
        printf_s("                                     \n");
        printf_s("- Введите номер функции: ");
        while (scanf_s("%d", &item) != 1 || item > 9 || item < 1) {
            printf_s("- ошибка\n");
            printf_s("                          \n");
            printf_s("- Введите номер функции: ");
            while (fgetc(stdin) != '\n');
        }
        printf_s("                                   \n\n");
        switch (item)
        {
        case 1:
            AddElem(ls);
            break;

        case 2:
            PrintList(ls, cout);
            break;
        case 3:
            Sort(ls);
            break;
        case 4:
            cout << "Введите позицию" << endl;
            int ind;
            cin >> ind;
            AddElem(ls, ind);
            break;
        case 5:
            RemoveFirst(ls);
            break;
        case 6:
            int n;
            cout << "Введите id" << endl;
            cin >> n;
            FindElem(ls, n);
            break;
        case 7:
            // AddsumEl(ls);
            break;
        case 8:
            SaveList(ls);
            exit(0);
            break;
        }

    }
    return 0;
}