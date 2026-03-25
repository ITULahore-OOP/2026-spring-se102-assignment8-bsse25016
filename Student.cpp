#include "Student.h"

//constructor
Student::Student(string name, int memberID, double cgpa)
    :UniversityMember(name, memberID), cgpa(cgpa)
{
    cout << "Student constructed!\n";
}

//destructor
Student::~Student()
{
    cout << "Student destructed!\n";
}

//getter
double Student::getCGPA() const
{
    return cgpa;
}

//function
void Student::updateCGPA(double newCGPA)
{
    //validating cgpa
    if(newCGPA < 0)
        newCGPA = 0;
    cgpa = newCGPA;
}

//overriden function
void Student::displayRole() 
{
    //display code specific to Student class
    cout << "Role: Student\n";
}
