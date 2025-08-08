#include "Student.h"
#include "StudentManager.h"
#include <iostream>
#include <string>

using namespace std;
StudentManager student;

int main(){
    
    student.ReadStudentCSV("Student.csv");

    cout << "compile success" << endl;
    return 0;
}