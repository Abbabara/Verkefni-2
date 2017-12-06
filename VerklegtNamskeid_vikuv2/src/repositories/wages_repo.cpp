#include "wages_repo.h"

Wages_repo::Wages_repo()
{
    //ctor
}

void Wages_repo::print_employees(Employee_Salary employee){
    employee.set_helper(false);
    ofstream fout;
    fout.open("employee_records", ios::app);

    if(fout.is_open()){
        fout << employee;
        fout.close();
    }
}
void Wages_repo::read_file(){
    ifstream fin;
    fin.open("employee_records");
    cout << "2" << endl;
    if(fin.is_open()){
        while(!fin.eof()){
            cout << "3" << endl;
            fin >> employee;
            cout << employee << endl;
            employee_storage.push_back(employee);
            cout << "5" << endl;
        }
        fin.close();
    }
    for (unsigned int i = 0; i < employee_storage.size(); i++){
        cout << employee_storage[i] << endl;
    }
}

