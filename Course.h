#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
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
//#write your code here














#endif
