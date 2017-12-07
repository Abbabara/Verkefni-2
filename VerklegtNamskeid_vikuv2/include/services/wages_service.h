#ifndef WAGES_SERVICE_H
#define WAGES_SERVICE_H

#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include "employee_salary.h"
#include "wages_repo.h"
#include "invalidNameException.h"
#include "invalidSsnException.h"
#include "invalidMonthException.h"
#include "invalidYearException.h"
#include "invalidWageException.h"

class Wages_service
{
public:
    Wages_service();
    void add_salary(Employee_Salary employee);
    void get_all_for_ssn();
    void get_salary_by_ssn(string input);
    void get_salary_by_ssn_and_year(string ssn, int year);
    void get_highest_paid_employee(int year);
    vector<Employee_Salary> temp_storage;
    
private:
    Wages_repo repo;
    bool isvalidName(Employee_Salary& employee);
    bool isvalidSsn(Employee_Salary& employee);
    bool isvalidMonth(Employee_Salary& employee);
    bool isvalidYear(Employee_Salary& employee);
    bool isvalidWage(Employee_Salary& employee);
    
};

#endif // WAGES_SERVICE_H
