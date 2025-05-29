#include <iostream>
using namespace std;

class Car {
    public:
        string model;

        Car() { //default non-parameter constructor
            model = "Unknown";
        }

        //parameters constructor: same as class, no return type, same as def __init__
        Car(string modelName) {
            model = modelName;
        }

        void display() {
            cout << "Car model: " << model << endl;
        }
};

int main() {
    Car c1;            // Calls default constructor
    Car c2("Mustang"); // Calls parameterized constructor

    c1.display();  // Output: Car model: Unknown
    c2.display();  // Output: Car model: Mustang

    return 0;
}