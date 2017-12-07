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
    repo.read_file();
}

void Wages_service::get_salary_by_ssn(unsigned int input){
    repo.read_file();
    cout << "1.0" << endl;
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        cout << "1.1" << endl;

        unsigned int temp;
        temp = repo.employee_storage[i].get_ssn();
        cout << temp << endl;

        if (temp == input){
            temp_storage[i] = repo.employee_storage[i];
            cout << "1" << endl;
        }
    }
    for (unsigned int i = 0; i < temp_storage.size(); i++){
        cout << temp_storage[i];
        cout << "2" << endl;
    }
}
