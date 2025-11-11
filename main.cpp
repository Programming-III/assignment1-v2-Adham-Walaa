#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   Course c= new Course ("CS202", "Programming", 250, 220);
   Instructor t= new Instructor("Computer Science", 5);
   Student s= new Student(2, "Informatics");
    return 0;
}
