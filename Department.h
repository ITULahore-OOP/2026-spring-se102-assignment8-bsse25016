#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

class Department
{
    //private data
    private:
    string departmentName;
    //pointer to denote aggregation
    UniversityMember* members[50];
    int memberCount; //<-for keeping track of currently added members

    //public function
    public:
    //constructor
    Department(string departmentName);

    //adding member
    void addMember(UniversityMember* member);

    //display function
    void displayAllRoles() const;

};
#endif