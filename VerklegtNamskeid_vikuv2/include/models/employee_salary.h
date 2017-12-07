#ifndef EMPLOYEE_SALARY_H
#define EMPLOYEE_SALARY_H

#include <iostream>
#include <string>

using namespace std;

class Employee_Salary
{
    public:
        Employee_Salary();
        Employee_Salary(string name, unsigned int ssn, int month, int year, double wage);
        string get_name();
        unsigned int get_ssn();
        int get_month();
        int get_year();
        double get_wage();
        void set_helper(bool check);
        Employee_Salary& operator = (Employee_Salary& right_side);

        friend ostream& operator << (ostream& out, Employee_Salary& employee);
        friend istream& operator >> (istream& in, Employee_Salary& employee);

    private:
        string name;
        unsigned int ssn;
        int month;
        int year;
        double wage;
        bool helper;
};

#endif // EMPLOYEE_SALARY_H
