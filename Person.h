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
//#write Person class here
#endif
