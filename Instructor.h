#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:: Person {
    private:
        string department;
        int experienceYears;
    public:
        Instructor (string p, int e) {
            department=p;
            experienceYears=e;
        }
        string getDepartment () {
            return department;
        }
        int getExperienceYears () {
            return experienceYears;
        }
        display() {
            cout<<"Name: " << Person->getName() << endl << "Department: " << department << endl <<
                "Experience Years: " << experienceYears;
        }

    };
//#write Instructor class here












#endif
