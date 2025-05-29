#include <iostream>
#include <string>  // Correct header for std::string
using namespace std;

class Car {
public:
    string model;
    int year;
    double price;

    // Default constructor delegates to parameterized constructor
    Car() : Car("Unknown", 0, 0.0) { }

    // Parameterized constructor
    Car(string Model, int Year, double Price) {
        model = Model;
        year = Year;
        price = Price;
    }

    // Copy constructor
    Car(const Car &obj) {
        model = obj.model;
        year = obj.year;
        price = obj.price;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    void applyDiscount(double percent) {
        price = price * (1 - percent / 100);
    }
};

int main() {
    Car car1;  // Calls default constructor
    car1.display();

    Car car2("Mustang", 1967, 80000.01);
    car2.display();

    Car car3 = car2;  // Calls copy constructor
    car3.applyDiscount(19.67);
    car3.display();

    return 0;
}
