#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"
#include "UniversityMember.h"

int main()
{

    //base class pointer
    UniversityMember* member;

    //creating objects of the classes
    Student student1("Haider", 2501, 3.7);
    Student student2("Hamza", 2502, 3.5);
    Student student3("Hasan", 2503, 3.3);
    AccessCard card1("101-B", 1);
    AccessCard card2("102-B", 2);
    AccessCard card3("103-B", 3);
    TeachingAssistant ta1("Husnain", 2201, 4.0, 12000, card2, 12);
    TeachingAssistant ta2("Haris", 2301, 3.8, 14000, card1, 15);
    Staff staff1("Junaid", 102, 420000, card3);
    Staff staff2("Umar", 103, 500000, card3);

    //adding all these objects to Department object
    Department foe("Faculty of Engineering");
    //do not know a better way of doing this that is as simple as this.
    member = &student1;
    foe.addMember(member);
    member = &student2;
    foe.addMember(member);
    member = &student3;
    foe.addMember(member);
    member = &ta1;
    foe.addMember(member);
    member = &ta2;
    foe.addMember(member);
    member = &staff1;
    foe.addMember(member);
    member = &staff2;
    foe.addMember(member);
    //---------------------------------------------
    //demonstrating runtime polymorphism
    foe.displayAllRoles();

    //demonstrating compiletime polymorphisms by method overloading
    ta1.gradeAssignment("B+"); //<-this will call the function with string parameter
    ta1.gradeAssignment(88); //<-this will call the function with integer parameter

    //creating TutoringSession object
    TutoringSession session1(101, 45, &ta1, &student2);
    TutoringSession session2(102, 60, &ta2, &student3);

    //demonstrating operator overloading
    
    //finding out which session is the longest
    if(session1 > session2)
    {
        cout << "Session 1 is the longest!\n";
    }
    else 
    {
        cout << "Session 2 is the longest!\n";
    }

    //merging the two sessions into one
    TutoringSession mergedSession = session1 + session2;
    //this should print 45 + 60 = 105.
    cout << "Duration of Merged Session: " << mergedSession.getDuration() << "\n";

    return 0;
}