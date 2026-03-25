#include "Staff.h"

//constructor
Staff::Staff(string name, int memberID, double salary, AccessCard accessCard)
    :UniversityMember(name, memberID),
     salary(salary), accessCard(accessCard)
{
    cout << "Staff constructed!\n";
}

//destructor
Staff::~Staff()
{
    cout << "Staff destructed!\n";
}

//getter
double Staff::getSalary() const
{
    return salary;
}

//display functions
void Staff::displayCard() const
{
    //displaying card
    cout << "Card ID: " << accessCard.getCardID() << "\n";
    cout << "Card access Level: " << accessCard.getAccessLevel() << "\n";
}

//overriden function
void Staff::displayRole()
{
    //displaying staff role
    cout << "Role: Staff\n";

}