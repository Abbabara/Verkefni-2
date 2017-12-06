#ifndef WAGESUI_H
#define WAGESUI_H

#include <string>
#include <iostream>
#include "wages_service.h"
#include "employee_salary.h"

using namespace std;

class WagesUI
{
    public:
        WagesUI();
        void menu();
        void check_input(char input);
        Employee_Salary add_record();

    private:
        Wages_service wages_service;
        int stop;
};

#endif // WAGESUI_H
