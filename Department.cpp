#include "Department.h"

//constructor
Department::Department(string departmentName)
    :departmentName(departmentName)
{
    memberCount = 0;
    cout << "Department constructed!\n";
}

//adding member
void Department::addMember(UniversityMember* member)
{
    if(memberCount < 50 && member != nullptr)
    {
        //adding it after validation
        this->members[memberCount] = member;
        memberCount++;
    }
    else
    {
        cout << "University members are at macs capacity!\n";
    }
}

//display function
void Department::displayAllRoles() const
{
    //displaying info of whatever class calls this function
    for(int i = 0 ; i < memberCount ; i++)
    {
        //this will call the function of that derived class which is being pointed to
        //by the base class pointer.
        members[i]->displayRole();
    }
}