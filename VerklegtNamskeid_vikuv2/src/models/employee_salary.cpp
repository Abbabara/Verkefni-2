#include "employee_salary.h"

Employee_Salary::Employee_Salary(){
    
}

Employee_Salary::Employee_Salary(string name,string ssn, int month, int year, double wage){
    this->name = name;
    this->ssn = ssn;
    this->month = month;
    this->year = year;
    this->wage = wage;
}

string Employee_Salary::get_name(){
    return this->name;
}

string Employee_Salary::get_ssn(){
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

Employee_Salary Employee_Salary::operator = (Employee_Salary& right_side){
    Employee_Salary temp;
    for (unsigned int i = 0; i < right_side.name.size(); i++){
        temp.name[i] = right_side.name[i];
    }
    for (unsigned int i = 0; i < right_side.ssn.size(); i++){
        temp.ssn[i] = right_side.ssn[i];
    }
    temp.month = right_side.month;
    temp.year = right_side.year;
    temp.wage = right_side.wage;
    
    return temp;
}

ostream& operator << (ostream& out, Employee_Salary& employee){
    if (employee.helper){
        out << "Name: " << employee.name << endl
            << "Ssn:  " << employee.ssn << endl
            << "Month:" << employee.month << endl
            << "Year: " << employee.year << endl
            << "Wages:" << employee.wage << endl;
        out << endl;
    }
    else{
        out << employee.name << ", "
            << employee.ssn << " "
            << employee.month << " "
            << employee.year << " "
            << employee.wage;
    }
    
    return out;
}

istream& operator >> (istream& in, Employee_Salary& employee){
    getline(in, employee.name, ',')
    >> employee.ssn >> employee.month >> employee.year >> employee.wage;
    
    return in;
}

