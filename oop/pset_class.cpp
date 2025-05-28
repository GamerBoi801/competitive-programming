#include <iostream>
using namespace std;

class Car {
public:
    string model;

    void display(string modelName) {
        cout << "Car model: " << modelName;
    }
};

int main() {
    Car c;
    c.model = "Mustang";
    c.display(c.model);
    return 0;
}