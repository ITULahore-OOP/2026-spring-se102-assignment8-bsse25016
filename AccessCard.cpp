#include "AccessCard.h"

//constructor
AccessCard::AccessCard(string cardID, int accessLevel)
    : cardID(cardID), accessLevel(accessLevel)
{
    cout << "access card constructed!\n";
}

//Getters
string AccessCard::getCardID() const
{
    return cardID;
}

int AccessCard::getAccessLevel() const
{
    return accessLevel;
}

//display function
void AccessCard::displayCardInfo() const
{
    cout << "Card ID: " << cardID << "\n";
    cout << "access Level: " << accessLevel << "\n";
}