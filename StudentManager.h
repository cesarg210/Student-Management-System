#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "Student.h"
#include <vector>
#include <string>

using namespace std;

class StudentManager{

    public:
        void ReadStudentCSV(const string& fileName);
        string UpdateStudentCSV(string ID, string lastName, string firstName);
    private: 
        vector<Student*> students;    
};
#endif