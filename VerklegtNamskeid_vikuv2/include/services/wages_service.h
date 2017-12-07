#ifndef WAGES_SERVICE_H
#define WAGES_SERVICE_H

#include <vector>
#include <string>
#include <algorithm>
#include "employee_salary.h"
#include "wages_repo.h"

class Wages_service
{
    public:
        Wages_service();
        void add_salary(Employee_Salary employee);
        void validate_record(Employee_Salary& employee);
        void get_all_for_ssn();
        void get_salary_by_ssn(unsigned int input);
        void get_salary_by_ssn_and_year(unsigned int ssn, int year);
        void get_highest_paid_employee(int year);
        vector<Employee_Salary> temp_storage;

    private:
        Wages_repo repo;

};

#endif // WAGES_SERVICE_H
