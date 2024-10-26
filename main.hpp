#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

void writeFile(string);
void readFile(string);

void writeFile(string filename){
    ofstream ofs;
    int numEmployee, eID, salary;
    string eName, dName;

    ofs.open(filename);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    cout << "How many employees? ";
    cin >> numEmployee;
    ofs << numEmployee << "\n";

    for (int i=0; i < numEmployee; i++){
        cout << "Employee ID: ";
        cin >> eID;

        cout << "Employee Name: ";
        cin >> eName;

        cout << "Department Name: ";
        cin >> dName;

        cout << "Salary: ";
        cin >> salary;

        ofs << eID << "\t" << eName << "\t" << dName << "\t" << salary << "\n";
    }
    ofs.close();
}
