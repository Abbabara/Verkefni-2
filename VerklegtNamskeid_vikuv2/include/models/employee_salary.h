#ifndef EMPLOYEE_SALARY_H
#define EMPLOYEE_SALARY_H

#include <iostream>
#include <string>

using namespace std;

class Employee_Salary
{
    public:
        Employee_Salary();
        Employee_Salary(string name, string ssn, int month, int year, double wage);
        string get_name();
        string get_ssn();
        int get_month();
        int get_year();
        double get_wage();
        void set_helper(bool check);

        friend ostream& operator << (ostream& out, Employee_Salary& employee);
        friend istream& operator >> (istream& in, Employee_Salary& employee);
    private:
        string name;
        string ssn;
        int month;
        int year;
        double wage;
        bool helper;
};

#endif // EMPLOYEE_SALARY_H
