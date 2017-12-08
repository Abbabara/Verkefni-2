#include "wages_service.h"


Wages_service::Wages_service()
{
    //ctor
}

void Wages_service::add_salary(Employee_Salary employee){
    if(isvalidName(employee) && isvalidSsn(employee) && isvalidMonth(employee) && isvalidYear(employee) && isvalidWage(employee)){
        repo.read_file2();
        int checker = 1, month = employee.get_month(), year = employee.get_year();
        string ssn = employee.get_ssn();
        for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
            if (month == repo.employee_storage[i].get_month() && year == repo.employee_storage[i].get_year()
                && ssn == repo.employee_storage[i].get_ssn()){
                repo.employee_storage[i].set_wage(employee.get_wage());
                checker = 0;
            }
        }
        repo.put_back();
        /*if (checker == 1){
         repo.print_employees(employee);
         }*/
        for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
            cout << repo.employee_storage[i];
        }
    }
}

bool Wages_service::isvalidName(Employee_Salary& employee){
    string name = employee.get_name();
    for (unsigned int i = 0; i < name.length(); i++) {
        if (!(isalpha(name[i]) || name[i] == ' ')) {
            throw (invalidNameException("invalid name!"));
        }
    }
    return true;
}

bool Wages_service::isvalidSsn(Employee_Salary& employee){
    string ssn = employee.get_ssn();
    
    for (unsigned int i = 0; i < ssn.length(); i++) {
        if (!isdigit(ssn[i])) {
            throw (invalidSsnException("invalid Ssn!"));
        }
    }
    if (!(ssn.length() == 10)){
        throw (invalidSsnException("invalid Ssn!"));
    }
    /*
     string sday;
     sday[0] = '\0';
     for (int i = 0; i < 2 ; i++) {
     sday[i] = ssn[i];
     }
     sday[0] = ssn[0];
     sday[1] = ssn[1];
     cout << sday << endl;
     int dayint = atoi(sday.c_str());
     
     string smonth;
     smonth[0] = '\0';
     for (int i = 2; i < 4 ; i++) {
     smonth[i-2] = ssn[i];
     }
     smonth[0] = ssn[2];
     smonth[1] = ssn[3];
     cout << smonth << endl;
     int monthint = atoi(smonth.c_str());
     
     string twonumbers;
     twonumbers[0] = '\0';
     for (int i = 6; i < 8 ; i++) {
     twonumbers[i-6] = ssn[i];
     }
     cout << twonumbers << endl;
     int twonumbersint = atoi(twonumbers.c_str());
     cout << twonumbersint << endl;
     cout << dayint << endl;
     cout << monthint << endl;
     
     if (dayint < 01 || dayint > 31 || monthint < 01 || monthint > 12 || twonumbersint < 20){
     throw (invalidSsnException("invalid Ssn3!"));
     }
     */
    return true;
}

bool Wages_service::isvalidMonth(Employee_Salary& employee) {
    int month = employee.get_month();
    if (month < 1 || month > 12) {
        throw (invalidMonthException("invalid month!"));
    }
    return true;
}

bool Wages_service::isvalidYear(Employee_Salary& employee) {
    int year = employee.get_year();
    if (year < 2000 || year > 2018) {
        throw (invalidYearException("invalid Year!"));
    }
    return true;
}

bool Wages_service::isvalidWage(Employee_Salary& employee) {
    int wage = employee.get_wage();
    if ( wage < 0) {
        throw (invalidWageException("invalid Wage!"));
    }
    return true;
}


void Wages_service::get_salary_by_ssn_and_year(string ssn, int year){
    repo.read_file();
    int temp_wage = 0;
    int temp_year;
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        string temp_ssn;
        
        temp_ssn = repo.employee_storage[i].get_ssn();
        temp_year = repo.employee_storage[i].get_year();
        
        if (temp_ssn == ssn && temp_year == year){
            temp_storage.push_back(repo.employee_storage[i]);
        }
    }
    for (unsigned int i = 0; i < temp_storage.size(); i++){
        temp_wage += temp_storage[i].get_wage();
    }
    cout << "Total wage for this employee in " << temp_year << " is: " << temp_wage << endl;
    temp_storage.clear();
    repo.put_back();
}


void Wages_service::get_salary_by_ssn(string input){
    repo.read_file();
    
    for (unsigned int i = 0; i < repo.employee_storage.size(); i++){
        string temp;
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
            string temp_ssn;
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
