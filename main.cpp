#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Student student;
    student.ReadStudentCSV("Student.csv");
    cout << "compile success" << endl;
    return 0;
}