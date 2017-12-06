#include "wages_repo.h"

Wages_repo::Wages_repo()
{
    //ctor
}

void Wages_repo::print_employees(Employee_Salary employee){
    employee.set_helper(false);
    ofstream fout;
    fout.open("employee_records.txt", ios::app);

    if(fout.is_open()){
        fout << employee;
        fout.close();
    }
}
void Wages_repo::read_file(){
    ifstream fin;
    fin.open("employee_records.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            fin >> employee;
            employee_storage.push_back(employee);
        }
        fin.close();
    }
    for (unsigned int i = 0; i < employee_storage.size(); i++){
        cout << employee_storage[i] << endl;
    }
}

