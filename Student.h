#ifndef STUDENT_H
#define STUDENT_H
#include <vector>
#include <string>
using namespace std;

class Student {

    public:

        Student();  // Constructor
        Student(string ID, string lastName, string firstName);

        void SetStudent(string ID, string lastName, string firstName);
        string GetStudentID();
        string GetStudentLast();
        string GetStudentFirst();
        
        
    private:

        string ID;
        string lastName;
        string firstName;
       static vector<Student*> student;

};


#endif