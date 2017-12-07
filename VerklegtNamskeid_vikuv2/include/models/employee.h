#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee(string name, string ssn);
        string get_name();
        string get_ssn();

        friend ostream& operator << (ostream& out, Employee& employee);
    private:
        string name;
        string ssn;
};

#endif // EMPLOYEE_H
