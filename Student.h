#ifndef STUDENT_H
#include <vector>
#include <string>
using namespace std;

class Student {

    public:

        string ReadStudentCSV(string ID, string lastName, string firstName);
        string UpdateStudentCSV(string ID, string lastName, string firstName);

    private:

        string ID;
        string lastName;
        string firstName;
        vector<Student*>student;

};


#endif