#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student:: Person {
        private:
        int yearLevel;
        string major;
        public:
        Student(int y, string m) {
            yearLevel=y;
            major=m;
        }
        int getYearLevel () {
            return yearLevel;
        }
        string getMajor () {
            return major;
        }
        display() {
            cout<<"Name: " << Person->getName() << endl << "Year Level: " << yearLevel << endl << "Major:" << major;
        }
    };
//#write student class here













#endif
