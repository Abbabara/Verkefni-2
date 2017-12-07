#include "wages_service.h"


Wages_service::Wages_service()
{
    //ctor
}

void Wages_service::add_salary(Employee_Salary employee){
    //validate_record(employee);
    if(isvalidName(employee)){
        repo.print_employees(employee);
    }
}

bool Wages_service::isvalidName(Employee_Salary& employee){
    string name = employee.get_name();
    for (unsigned int i = 0; i < name.length(); i++) {
        if (!isalpha(name[i])) {
            throw (invalidNameException("invalidate name!"));
        }
    }
    return true;
}



void Wages_service::get_salary_by_ssn_and_year(unsigned int ssn, int year){
    repo.read_file();
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        unsigned int temp_ssn;
        int temp_year;
        temp_ssn = repo.employee_storage[i].get_ssn();
        temp_year = repo.employee_storage[i].get_year();

        if (temp_ssn == ssn && temp_year == year){
            temp_storage.push_back(repo.employee_storage[i]);
        }
    }
    for (unsigned int i = 0; i < temp_storage.size(); i++){
        cout << temp_storage[i];
    }
    temp_storage.clear();
    repo.put_back();
}

void Wages_service::get_salary_by_ssn(unsigned int input){
    repo.read_file();
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        unsigned int temp;
        temp = repo.employee_storage[i].get_ssn();

        if (temp == input){
            temp_storage.push_back(repo.employee_storage[i]);
        }
    }
    for (unsigned int i = 0; i < temp_storage.size(); i++){
        cout << temp_storage[i];
    }
    temp_storage.clear();
    repo.put_back();
}
void Wages_service::get_highest_paid_employee(int year){
    repo.read_file();
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        if(repo.employee_storage[i].get_year() == year){
            unsigned int temp_ssn;
            int checker = 1;
            double add_wage;
            temp_ssn = repo.employee_storage[i].get_ssn();

            for(unsigned int j = 0; j < temp_storage.size(); j++){
                if (temp_ssn == temp_storage[j].get_ssn()){
                    add_wage = temp_storage[j].get_wage();
                    temp_storage[j].set_wage(add_wage + repo.employee_storage[i].get_wage());
                    checker = 0;
                }
            }
            if (checker == 1){
                temp_storage.push_back(repo.employee_storage[i]);
            }
        }
    }
    int location = 0;
    double max_wage = temp_storage[0].get_wage();
    for (unsigned int i = 1; i < temp_storage.size(); i++){
        if (temp_storage[i].get_wage() > max_wage){
            max_wage = temp_storage[i].get_wage();
            location = i;
        }
    }
    cout << "The name of the employee with the highest salary in "
         << year << " is: " << temp_storage[location].get_name() << endl
         << endl;
    temp_storage.clear();
    repo.put_back();
}
