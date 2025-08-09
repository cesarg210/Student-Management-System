#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include <vector>
#include <string>
class Student;      // Foward delcaration to break include loop, since Student.h already includes StudentManager

using namespace std;

class StudentManager{

    public:

        ~StudentManager();
        void ReadStudentCSV(const string& fileName);
        string UpdateStudentCSV(string ID, string lastName, string firstName);
        const vector<Student*>& GetStudents() const;
        void DisplayStudents() const;
        

    private: 
        vector<Student*> students;    
};
#endif