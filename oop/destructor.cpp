#include <iostream>
using namespace std;

// destructor is a member function of a class that is automatically destroyed when an object is destroyed 
// has same name as the class but is prefixed with ~
// doesn not have a return type and u r allowed one destructor at a time
// main purpose is free dynamically allocated memory

class MyClass {
    public:
        MyClass() {
            // Constructor code
            data = new int[10];  // Allocate memory
        }
    
        ~MyClass() {
            // Destructor code
            delete[] data;  // Release memory
        }
    
    private:
        int *data;
    };
    