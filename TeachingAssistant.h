#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"

//since teaching assistant is both student and staff, it must inherit from both
class TeachingAssistant: public Student, public Staff
{
    //private data
    private:
    int workingHours;

    //public functions
    public:
    //constructor
    TeachingAssistant(string name, int memberID, double cgpa, double salary, 
    AccessCard accessCard, int workingHours);
    //destructor
    ~TeachingAssistant();

    //overriden function
    void displayRole() override;

    //overloaded methods
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);

};
#endif