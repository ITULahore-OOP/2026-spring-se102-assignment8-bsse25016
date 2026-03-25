#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include "Student.h"
#include "TeachingAssistant.h"

class TutoringSession
{
    //private data
    private:
    int sessionID;
    double durationMinutes;
    //demonstrating association
    TeachingAssistant* ta;
    Student* student;

    //public functions
    public:
    //default constructor
    TutoringSession();
    //constructor
    TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);

    //getter
    double getDuration() const;

    //display function
    void displaySession() const;

    //overloaded operator
    TutoringSession operator + (const TutoringSession& other);

    //non-member overloaded operator
    friend bool operator > (const TutoringSession& s1, const TutoringSession& s2);
};
#endif