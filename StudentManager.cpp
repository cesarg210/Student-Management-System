#include "StudentManager.h"
#include <fstream>
#include <sstream>

using namespace std;

void StudentManager::ReadStudentCSV(const string& fileName){
    vector<Student*> student;
    
    ifstream file(fileName);        // Opens file       
    string line, ID, lastName, firstName;

    getline(file, line);            // skips line
    while(getline(file, line)) {   

        stringstream ss(line);      // declares variable ss with line to parse

        getline(ss, ID, ',');           // Parse lines
        getline(ss, lastName, ',');
        getline(ss, firstName);

        Student* s = new Student(ID, lastName, firstName);
        student.push_back(s);
    }

}