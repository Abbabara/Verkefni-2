#include "wagesui.h"

WagesUI::WagesUI()
{
    //ctor
}

void WagesUI::menu(){
    char input;
    while (input != '5'){
        cout << "Please choose an action with the corresponding number: " << endl
             << "-------------------------------------------------------" << endl
             << "1. Add a salary record." << endl
             << "2. Get all salary records for an employee." << endl
             << "3. Get a total salary for a given employee on a given year." << endl
             << "4. Get the highest paid employee for a given year." << endl
             << "5. To quit"
             << endl
             << "Input: ";
        cin >> input;
        check_input(input);
    }
}

void WagesUI::check_input(char input){
    if (input == '1'){

        try {
        wages_service.add_salary(add_record());
        }
        catch(invalidNameException e) {
            cout << e.getMessage() << endl;
        }

    }
    else if (input == '2'){
        unsigned int input;
        cout << "Enter the SSN of the employee: ";
        cin >> input;
        cout << endl;
        wages_service.get_salary_by_ssn(input);
    }
    else if (input == '3'){
        unsigned int ssn;
        int year;
        cout << "Enter the SSN of the employee: ";
        cin >> ssn;
        cout << "Enter the year you want to see: ";
        cin >> year;
        cout << endl;
        wages_service.get_salary_by_ssn_and_year(ssn, year);
    }
    else if (input == '4'){
        int year;
        cout << "Please input the year you want to check: ";
        cin >> year;
        wages_service.get_highest_paid_employee(year);
    }
    else if (input == '5'){
        cout << endl << "Have a nice day :D" << endl;
    }
    else{
        cout << "Invalid input !" << endl;
    }
}

Employee_Salary WagesUI::add_record(){
    string name;
    int month, year;
    unsigned int ssn;
    double wage;

    cout << "Enter the name of the employee: ";
    cin >> ws;
    getline (cin, name);
    cout << "Enter the social security number of the employee: ";
    cin >> ssn;
    cout << "Enter the month (as a digit): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter this months salary: ";
    cin >> wage;
    cout << endl;

    Employee_Salary employee(name, ssn, month, year, wage);

    return employee;
}
