#include "TutoringSession.h"   

//default constructor
TutoringSession::TutoringSession() 
{
    sessionID = 0;
    durationMinutes = 0;
}

//constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta,
     Student* student)
     :sessionID(sessionID), durationMinutes(durationMinutes),
     ta(ta), student(student)
{
    cout << "Tutoring Session constructed!\n";
}

//getter
double TutoringSession::getDuration() const
{
    return durationMinutes;
}

//display function
void TutoringSession::displaySession() const
{
    //display session information
    cout << "Session ID: " << sessionID << "\n";
    cout << "Duration in minutes: " << durationMinutes << "\n";
}

//overloaded operator
TutoringSession TutoringSession::operator + (const TutoringSession& other)
{
    //merging two sessions by summing their duration 
    TutoringSession mergedSession;
    mergedSession.durationMinutes = (this->durationMinutes + other.durationMinutes);
    return mergedSession;
}

//non-member overloaded operator
bool operator > (const TutoringSession& s1, const TutoringSession& s2)
{
    if(s1.durationMinutes > s2.durationMinutes)
        return true;
    else
        return false;
}