#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <iostream>
#include <string>
using namespace std;

class AccessCard
{
    //private data
    private:
    string cardID;
    int accessLevel;

    //public functions
    public:
    //constructor
    AccessCard(string cardID, int accessLevel);

    //Getters
    string getCardID() const;
    int getAccessLevel() const;

    //display function
    void displayCardInfo() const;
};
#endif