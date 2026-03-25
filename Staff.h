#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

//since staff is a UniversityMember, we inherit from base class
class Staff: virtual public UniversityMember
{
    //private data
    private:
    double salary;
    //composing the access card class since staff has-a access card
    AccessCard accessCard;

    //public functions
    public:
    //constructor
    Staff(string name, int memberID, double salary, AccessCard accessCard);
    //destructor
    ~Staff();

    //getter
    double getSalary() const;

    //display functions
    void displayCard() const;

    //overriden function
    void displayRole() override;

};
#endif