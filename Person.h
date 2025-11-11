#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person {
        private:
        string name;
        int id;
        public:
        Person (string s, int d) {
            name=s;
            id=d;
        }
        string getName () {
            return name;
        }
        int getID () {
            return id;
        }
        display() {
            cout<<"Name: " << name << endl << "(ID: " << id << ")" << endl;
        }

    };
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
class Course:: Person {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    addStudent(const Student& s) {

    }
    displayCourseInfo () {
        cout<< "Course: " << courseCode << " - " << courseName<< endl << " Max Students: " << maxStudents << endl <<
            "Currently Enrolled: " << Student->display() << endl << "Instructor Info:" << endl << Instructor->display()
        << endl << "Student Info:" << endl << Student->display();
    }
};
//#write Person class here
#endif
