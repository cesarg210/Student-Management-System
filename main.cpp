#include "Student.h"
#include "StudentManager.h"
#include <iostream>
#include <string>

using namespace std;


int main(){
    StudentManager studentManager;
    Student student;
    studentManager.ReadStudentCSV("Student.csv");
    
    cout << "compile success" << endl;
    studentManager.DisplayStudents();




    return 0;
}