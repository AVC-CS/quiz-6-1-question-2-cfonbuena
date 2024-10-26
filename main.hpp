#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int writeFile(string);
int readFile(string);

int writeFile(string filename){
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
    return numEmployee;
}

int readFile(string filename){
    ifstream ifs;
    int numEmployee, eID, salary, total = 0;
    double avg;
    string eName, dName;

    ifs.open(filename);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    ifs >> numEmployee;

    for (int i=0; i<numEmployee; i++){
        ifs >> eID >> eName >> dName >> salary;
        total = total + salary;
        cout << eID << "\t" << eName << "\t" << dName << "\t" << salary << "\n";
    }
    avg = total / numEmployee;
    cout << "Total: " << total << endl;
    cout << "Average: " << avg;
    return numEmployee;
}