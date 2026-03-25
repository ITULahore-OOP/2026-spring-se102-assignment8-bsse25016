#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <string>
#include <iostream>
using namespace std;

//this is our abstract base class
class UniversityMember
{
    //private data
    private:
    string name;
    int memberID;

    //public functions
    public:
    //constructor and destructor
    UniversityMember(string name, int memberID);
    virtual ~UniversityMember();

    //Getters
    string getName() const;
    int getMemberID() const;

    //pure virtual function
    virtual void displayRole() = 0;
};
#endif