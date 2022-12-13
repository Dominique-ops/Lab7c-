#include "Bank.h"


Bank::Bank() {
    FIO();
    id = 1;
    sum = 100;

}

Bank::Bank(int x, int deposid, FIO d) {
    id = x;
    sum = deposid;
    client = d;

}

int Bank::Getid() {
    return id;
}

double Bank::Getsum() {
    return sum;
}

char* Bank::Getname() {
    return client.name;
}


char* Bank::Getsurname() {
    return client.surname;
}

char* Bank::Getoname() {
    return client.oname;
}

istream& operator>>(istream& is, Bank& o) {
    is >> o.client;
    cout << "¬ведите номер счета: ";
    is >> o.id;
    cout << "¬ведите сумму депозита: ";
    is >> o.sum;
    return is;
}

ostream& operator<<(ostream& out, Bank& o) {
    out << o.client << endl;
    out << o.id << endl;
    out << o.sum << endl;

    return out;
}