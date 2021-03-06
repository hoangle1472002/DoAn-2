#include "Staff.h"
#include <iostream>
#include <iomanip>
using namespace std;
Staff::Staff(int ID, string FullName, int Age, string Numberphone, string Salary)
{
    this->ID = ID;
    this->FullName = FullName;
    this->Age = Age;
    this->Numberphone = Numberphone;
    this->Salary = Salary;
}

Staff::~Staff()
{
}

int Staff::Get_ID()
{
    return this->ID;
}
void Staff::Set_IDStaff(int ID)
{
    this->ID = ID;
}
void Staff::Input()
{
    cout << "ID : ";
    cin >> this->ID;
    cout << "FullName : ";
    fflush(stdin);
    getline(cin, this->FullName);
    cout << "Age : ";
    cin >> this->Age;
    cout << "Phone : ";
    fflush(stdin);
    getline(cin, this->Numberphone);
    cout << "Salary: ";
    fflush(stdin);
    getline(cin, this->Salary);
    cout << endl;
}

void Staff::Output()
{
    cout << setw(20) << this->ID << setw(20)
         << this->FullName << setw(20) << this->Age << setw(20)
         << this->Numberphone << setw(20) << this->Salary << endl;
}

istream &operator>>(istream &in, Staff &s)
{
    cout << "ID : ";
    in >> s.ID;
    cout << "FullName : ";
    fflush(stdin);
    getline(in, s.FullName);
    cout << "Age : ";
    in >> s.Age;
    cout << "Phone : ";
    in >> s.Numberphone;
    cout << "Salary: ";
    in >> s.Salary;
    cout << endl;
    return in;
}

ostream &operator<<(ostream &out, const Staff &s)
{
    out << setw(20) << s.ID << setw(20)
        << s.FullName << setw(20) << s.Age << setw(20)
        << s.Numberphone << setw(20) << s.Salary << endl;
    return out;
}

bool Staff::operator!=(Staff &s)
{
    if (this->ID != s.ID)
    {
        return true;
    }
    return false;
}

// void Staff::operator=(Staff &s)
// {
//     this->ID = s.ID;
//     this->FullName = s.FullName;
//     this->Age = s.Age;
//     this->Numberphone = s.Numberphone;
//     this->Salary = s.Salary;
// }
