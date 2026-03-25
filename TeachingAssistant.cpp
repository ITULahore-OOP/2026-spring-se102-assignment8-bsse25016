#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, 
AccessCard accessCard, int workingHours)
    :UniversityMember(name, memberID),
    Student(name, memberID, cgpa),
    Staff(name, memberID, salary, accessCard),
    workingHours(workingHours)
{
    cout << "ta constructed!\n";
}

//destructor
TeachingAssistant::~TeachingAssistant()
{
    cout << "ta destructed!\n";
}

//overriden function
void TeachingAssistant::displayRole()
{
    //displaying role for ta
    cout << "Role: Teaching Assistant\n";
}

//overloaded methods
void TeachingAssistant::gradeAssignment(int score)
{
    //grading using score
    cout << "numeric score: " << score << "/100\n";

}

void TeachingAssistant::gradeAssignment(string letterGrade)
{
    //grading using letterGrade
    cout << "letter grade: " << letterGrade << "\n";
}
