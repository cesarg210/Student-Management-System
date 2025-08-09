#include "Student.h"
#include "StudentManager.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student() : ID("NA"), lastName("NA"), firstName("NA"){}    // Default Constructor

Student::Student(string ID, string lastName, string firstName) : ID(ID), lastName(lastName), firstName(firstName){} // Constructor

void Student::SetStudent(string ID, string lastName, string firstName){

    this-> ID = ID;
    this->lastName = lastName;
    this->firstName = firstName;

}

string Student::GetStudentID(){
    
    return ID;
}

string Student::GetStudentLast(){

    return lastName;
}

string Student::GetStudentFirst(){

    return firstName;
}

