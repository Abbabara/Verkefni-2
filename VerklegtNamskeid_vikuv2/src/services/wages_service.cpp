#include "wages_service.h"


Wages_service::Wages_service()
{
    //ctor
}

void Wages_service::add_salary(Employee_Salary employee){
    //validate_record(employee);
    repo.print_employees(employee);

}

void Wages_service::validate_record(Employee_Salary& employee){

}

void Wages_service::get_all_for_ssn(){
    //repo.read_file();
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
