#include "UniversityMember.h"

//constructor and destructor
UniversityMember::UniversityMember(string name, int memberID)
    :name(name), memberID(memberID)
{
    cout << "University Member constructed!\n";
}

UniversityMember::~UniversityMember() 
{
    cout << "University Member destructed!\n";
}

//Getters
string UniversityMember::getName() const
{
    return name;
}

int UniversityMember::getMemberID() const
{
    return memberID;
}
