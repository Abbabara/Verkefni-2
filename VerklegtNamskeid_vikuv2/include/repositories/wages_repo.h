#ifndef WAGES_REPO_H
#define WAGES_REPO_H

#include "employee_salary.h"
#include <vector>
#include <fstream>
#include <string>

class Wages_repo
{
    public:
        Wages_repo();
        void print_employees(Employee_Salary employee);
        void read_file();

        vector<Employee_Salary> employee_storage;

    private:
        Employee_Salary employee;
};

#endif // WAGES_REPO_H
