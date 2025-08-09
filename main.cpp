#include "Student.h"
#include "StudentManager.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    StudentManager studentManager;
    studentManager.ReadStudentCSV("Student.csv");
    studentManager.DisplayStudents();


    return 0;
}