#ifndef WAGES_SERVICE_H
#define WAGES_SERVICE_H

#include <vector>
#include "employee_salary.h"
#include "wages_repo.h"

class Wages_service
{
    public:
        Wages_service();
        void add_salary(Employee_Salary employee);
        void validate_record(Employee_Salary& employee);
        void get_all_for_ssn();


    private:

        Wages_repo repo;

};

#endif // WAGES_SERVICE_H
