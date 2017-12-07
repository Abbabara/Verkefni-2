#include "employee.h"

Employee::Employee(string name, string ssn){
    this->name = name;
    this->ssn = ssn;
}

string Employee::get_name(){
    return this->name;
}

string Employee::get_ssn(){
    return this->ssn;
}

ostream& operator << (ostream& out, Employee& employee){
    out << "Name: " << employee.name << endl
        << "Ssn: " << employee.ssn << endl;

    return out;
}
