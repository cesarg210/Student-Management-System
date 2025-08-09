#include "StudentManager.h"
#include "Student.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

StudentManager::~StudentManager(){      // Deconstructor
    for(auto s : students){
        delete s;
    }
}

void StudentManager::ReadStudentCSV(const string& fileName){
    
    ifstream file(fileName);        // Opens file       
    string line, ID, lastName, firstName;

    getline(file, line);            // skips line
    while(getline(file, line)) {   

        stringstream ss(line);      // declares variable ss with line to parse

        getline(ss, ID, ',');           // Parse lines
        getline(ss, lastName, ',');
        getline(ss, firstName);

        Student* s = new Student(ID, lastName, firstName);
        students.push_back(s);
    }

}

const vector<Student*>& StudentManager::GetStudents() const{
    return students;
}

void StudentManager::DisplayStudents() const{
    
    cout << setw(10) << "ID " << setw(20) << "First Name" << setw(20) << "Last Name" << endl;
    cout << setw(55)<< setfill('-') << " " << setfill(' ') << endl;

    for (auto s : students) {
        
        cout << setw(10) << s->GetStudentID() << setw(20) << s->GetStudentFirst() << setw(20) << s->GetStudentLast() << endl;
        cout << setw(55) << setfill('-') << " " << setfill(' ') << endl;
             
    }
}
