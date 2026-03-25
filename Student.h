#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

//this class derives virtually from UniversityMember, since Student is-a a UniMember
class Student: virtual public UniversityMember
{
    //private data
    private:
    double cgpa;

    //public functions
    public:
    //constructor
    Student(string name, int memberID, double cgpa);
    //destructor
    ~Student();

    //getter
    double getCGPA() const;

    //function
    void updateCGPA(double newCGPA);

    //overriden function
    void displayRole() override;

};
#endif