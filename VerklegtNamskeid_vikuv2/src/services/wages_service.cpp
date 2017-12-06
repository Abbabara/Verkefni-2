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
