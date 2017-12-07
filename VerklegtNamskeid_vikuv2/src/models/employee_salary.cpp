#include "employee_salary.h"

Employee_Salary::Employee_Salary(){

}

Employee_Salary::Employee_Salary(string name, unsigned int ssn, int month, int year, double wage){
    this->name = name;
    this->ssn = ssn;
    this->month = month;
    this->year = year;
    this->wage = wage;
}

string Employee_Salary::get_name(){
    return this->name;
}

unsigned int Employee_Salary::get_ssn(){
    return this->ssn;
}

int Employee_Salary::get_month(){
    return this->month;
}

int Employee_Salary::get_year(){
    return this->year;
}

double Employee_Salary::get_wage(){
    return this->wage;
}

void Employee_Salary::set_helper(bool check){
    helper = check;
}

void Employee_Salary::set_wage(double wage){
    this->wage = wage;
}

Employee_Salary& Employee_Salary::operator = (Employee_Salary& right_side){
    Employee_Salary temp;
    temp.name = right_side.name;

    return temp;
}

ostream& operator << (ostream& out, Employee_Salary& employee){
    if (employee.helper){
        out << "Name: " << employee.name << endl;
    }
    else{
        out << employee.name << " ";
    }
    if (employee.helper){
        out << "Ssn:  " << employee.ssn << endl;
    }
    else{
        out << employee.ssn << " ";
    }
    if (employee.helper){
        out << "Month:" << employee.month << endl;
    }
    else{
        out << employee.month << " ";
    }
    if (employee.helper){
        out << "Year: " << employee.year << endl;
    }
    else{
        out << employee.year << " ";
    }
    if (employee.helper){
        out << "Wages:" << employee.wage << endl;
    }
    else{
        out << employee.wage << " ";
    }
    out << endl;

    return out;
}

istream& operator >> (istream& in, Employee_Salary& employee){
    in >> employee.name >> employee.ssn >> employee.month >> employee.year >> employee.wage;

    return in;
}

